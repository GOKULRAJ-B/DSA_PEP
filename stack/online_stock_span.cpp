


//https://leetcode.com/problems/online-stock-span/description/



#include<iostream>
#include<string>
#include<stack>

class StockSpanner {
public:
    vector<int>stock;
    stack<pair<int,int>>st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        // int span = 1;
        // if(stock.empty()){
        //     stock.push_back(price);
        //     return span;
        // }
        // for(int i=stock.size()-1; i>=0; i--){
        //     if(stock[i]<=price) span++;
        //     else break;
        // }
        // stock.push_back(price);
        // return span;
        int currspan = 1;
        while(!st.empty() && st.top().first <= price){
            currspan += st.top().second;
            st.pop();
        }
        st.push({price,currspan});

        return currspan;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */