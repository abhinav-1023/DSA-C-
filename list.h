#include<iostream>
using namespace std;

class list;

class node{
    int data;
public:
    node* next;

    friend class list;

    node(int d):data(d),next(NULL){}
    int getData(){
        return data;
    }
};

class list{
    node* head;
    node* tail;
public:
    int counter;
    list():head(NULL),tail(NULL){}
    void push_front(int d){
        if(head==NULL){
            node* n=new node(d);
            head=tail=n;
        }
        else{
            node * n=new node(d);
            n->next=head;
            head=n;
        }
        counter++;
    }
    void push_back(int d){
        if(head==NULL){
            node* n=new node(d);
            head=tail=n;


        }
        else{
            node*n=new node(d);
            tail->next=n;
            tail=n;
        }
        counter++;
    }
    void insert(int pos, int d){
        if(pos==1){
            push_front(d);
        }
        else{
            node * temp=head;
            for(int i=1;i<pos;i++){
                temp=temp->next;
            }
            node * n=new node(d);
            n->next=temp->next;
            temp->next=n;
        }
        counter++;
    }
    bool search(int d){
        node* temp=head;
        while(temp->next!=NULL){
            if(temp->data==d){
                return true;

            }
            temp=temp->next;
            
        }
        return false;
    }
    void pop_front(){
        if(counter==0){
        cout<<"no element "<<endl;
        counter--;
        return;
        }
        if(counter==1){
            delete head;
            return;
            counter--;
        }
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        counter--;
    }
    void pop_back(){
        if(counter==0){
            cout<<"no element "<<endl;
            counter--;
            return;
        }
        if(counter==1){
            delete head;
            head==NULL;
            counter--;
            return;
            
        }
        
        node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
        counter--;

    }
    void destroy(int pos){
        /* if(pos==0||pos>counter){
            cout<<"Invalid position"<<endl;
        } */
       /*  if(pos==1){
            pop_back();
        } */
        node * crr=head;
        node*pre=NULL;
        for(int i=1;i<pos;i++){
            pre=crr;
            crr=crr->next;
        }
        
        pre->next=crr->next;
        crr->next=NULL;
        delete crr;
        counter--;
    }
    void print(){
        node* temp=head;
        
       for(int i=1;i<=counter;i++){
        cout<<temp->getData()<<"->";
        temp=temp->next;
       }
    }

};