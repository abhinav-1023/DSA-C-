#include<iostream> 
#include"list.h"
using namespace std;

int main(){

   list l;
   l.push_front(1);
   l.push_back(2);
   l.push_back(3);
   l.push_back(4);
   l.destroy(2);
   l.print();
   

return 0;
}