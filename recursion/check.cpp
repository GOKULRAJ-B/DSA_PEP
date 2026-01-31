#include<iostream>
using namespace std;

bool isInterleave(string s1, string s2, string s3) {
        int i=0, j=0, k=0, si=-1, sj=-1;
        int n = s3.length(), m=s2.length(), o=s1.length();
        if(n!=m+o) return false;
        while(k<n){
            if(s1[i]==s3[k] && s3[k]==s2[j]){
                if(si==-1){
                    si = i;
                    sj = j;
                }
                i++;
                j++;
                k++;
            }
            else if(s1[i]==s3[k]){
                if(si!=-1){
                    if(k!=n-1 && s3[k+1]==s1[i] && s3[k+1]!=s2[j+1]){
                        i++;
                        k++;
                        si = -1;
                        sj = -1;
                    }
                    else{
                        j = sj;
                        si = -1;
                        sj = -1;
                        i++;
                        k++;
                    }
                }
                else{
                    i++;
                    k++;
                }
            }
            else if(s2[j]==s3[k]){
                if(si!=-1){
                    if(k!=n-1 && s3[k+1]==s2[j] && s3[k+1]!=s1[i+1]){
                        j++;
                        k++;
                        si = -1;
                        sj = -1;
                    }
                    else{
                        i = si;
                        si = -1;
                        sj = -1;
                        j++;
                        k++;
                    }
                }
                else{
                    j++;
                    k++;
                }
            }
            else{
                return false;
            }
        }
        //if(i!=s1.length()-1 || j!=s2.length()-1) return false;
        return true;
    }

int main(){
    cout<<isInterleave("aa","ab","aaba");
}

