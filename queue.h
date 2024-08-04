#include <iostream>
using namespace std;


template<typename T>
class node{
public:
    T data;
    node<T> * next;
    node(T d): data(d),next(NULL){}   
};
template <typename T>
class queue{
    node<T>* head;
    
public:
    queue():head(NULL){}
    void push(T d){
        if(head==NULL){
            node<T> * n=new node<T>(d);
            head=n;
        }
        else{
            node<T> * n=new node<T>(d);
            n->next=head;
            head=n;
        }
    }
    void pop(){
        
        
        {
        node<T>* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL; 
        }
    }
    void front(){
        cout<<head->data<<endl;
    }
    void rear(){
        node<T> * temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
    
};