#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&st, int val){
    if(st.empty()){
        st.push(val);
        return;
    }
    int temp = st.top();
    st.pop();
    insertAtBottom(st,val);
    st.push(temp);
}

//   ab/c-de*+

int main(){
    stack<int>st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    insertAtBottom(st,1);
    for(int i =0; i<=4;i++){
        cout<<st.top()<<endl;
        st.pop();
    }
}