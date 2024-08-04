#include <iostream>
using namespace std;

template <typename T>
class node{
public:    
    T data;
    node<T>* next;
    node(T d): data(d),next(NULL){}


};
template <typename T>
class stack{
    node<T>* head;
public:
    stack():head(NULL){}
    void push(T d){
        if(head==NULL){
            node<T>* n=new node<T>(d);
            head=n;
        }
        else{
            node<T>* n=new node<T>(d);
            n->next=head;
            head=n;
        }

    }
    void pop(){
        if(head==NULL){
            cout<<"No element in stack";
        }
        else{
            node<T>* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
    }
    void top(){
        cout<<head->data;
    }
};