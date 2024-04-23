#include "doubly-linked.h"

List::List(){
    first = nullptr;
}

List::~List(){  
    Node* current = first;
    while(current != nullptr){
        Node* next = current->next;
        delete current;
        current = next;
    }
}

void List::insert(int n){
    Node* newNode = new Node;
    newNode->val = n;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if(first == nullptr){
        first = newNode;
    }
    else{
        Node* current = first;
        while(current->next != nullptr){
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}

void List::reverse(){
    Node* ptr1 = first;
    Node* ptr2 = ptr1->next;
    ptr1->next = nullptr;
    ptr1->prev = ptr2;

    while(ptr2 != nullptr){
        ptr2->prev = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->prev;
    }
    first = ptr1;
}

void List::print(){

    if(first == nullptr)
        return;

    Node* current = first;
    while(current != nullptr){
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
    
}