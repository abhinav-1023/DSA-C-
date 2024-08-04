#include<iostream> 
#include "queue.h"
using namespace std;

int main(){
    queue<int> q;
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    q.front();
    q.rear();
    q.pop();
    q.front();
    q.rear();
return 0;
}