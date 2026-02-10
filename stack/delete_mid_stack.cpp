// https://www.naukri.com/code360/problems/delete-middle-element-from-stack_985246?leftPanelTabValue=SUBMISSION

#include<iostream>
#include<stack>
class fun{
    public:
void deleteFromStack(stack<int>&inputStack, int count, int size){
   if(inputStack.empty() || count == size/2){
      inputStack.pop();
      return;
   }
   int temp = inputStack.top();
   inputStack.pop();
   deleteFromStack(inputStack, count+1, size);
   inputStack.push(temp);
}

void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int count = 0;
   deleteFromStack(inputStack, count, N);
   
}
};
