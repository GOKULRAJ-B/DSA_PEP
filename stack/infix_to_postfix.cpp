

class Solution {
  public:
    int precedence(char c){
        if(c=='^') return 3;
        if(c=='*' || c=='/') return 2;
        if(c=='+' || c=='-') return 1;
    }
    string infixToPostfix(string& s) {
        // code here
        stack<char> st;
        string ans="";
        //string s1="";
        // int i = 0;
        // while(i<s.length()){
        //     if(isalnum(s[i])){
        //         st.push(s[i]);
        //         i++;
        //     }
        //     else{
        //         if(s[i]=='('){
        //             st.push(s[i]);
        //             i++;
        //         }
        //         else if(s[i]==')'){
        //             if(st.top !='('){
        //                 s1 = s1 + st.top();
        //                 st.pop();
        //             }
        //             else{
        //                 i++;
        //                 st.pop();
        //             }
        //         }
        //         else{
        //             if(!isalpha(st.top())){
        //                 st.push(s[i]);
        //                 i++;
        //             }
        //             else{
        //                 if(precedence(s[i]) > precedence(st.top())){
        //                     st.push(s[i]);
        //                     i++;
        //                 }
        //                 else{
        //                     s1 = s1 + st.top();
        //                     st.pop();
        //                     st.push(s[i]);
        //                     i++;
        //                 }
        //             }
        //         }
        //     }
        // }
        for(char c : s){
            if(isalnum(c)){
            ans += c;
        }
        else if(c == '('){
            st.push(c);
        }
        else if(c==')'){
            while(!st.empty() && st.top()!='('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && precedence(st.top()) >= precedence(c) && (c=='^' && st.top()=='^')){
                ans += st.top();
                st.pop();
            }
            st.push(c);
        }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};












