#include<iostream> 
#include"stack.h"
using namespace std;

int main(){
    stack<string> s;
    s.push("abhinav");
    s.push("shubham");
    s.push("Mahi bhai");
    s.push("vivek");
    s.top();
    cout<<endl;
    s.pop();
    s.top();
return 0;
}