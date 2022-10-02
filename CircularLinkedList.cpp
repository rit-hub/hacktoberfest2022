#include <bits/stdc++.h>
using namespace std;

struct Node {
int data;
Node *next;
Node(int d){
    data =d;
    next = NULL;
}
};

//Print Circular Linked List
void PrintCLL(Node *head){
 if(head==NULL) return ;
    Node *curr = head;
    do{
        cout<<curr->data<<" ";
        curr = curr->next;
    }while(curr!=head);
    cout<<endl;
}

//Insert at Begining of Circular Linked list

Node *insertAtBegin(Node *head , int x){
 Node *temp = new Node(x);
    if(head == NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;
    }
}

//Insert at End of Circular Linked List
Node *insertAtEnd(Node *head,int x){
       Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return temp;
    }
}

//Delete Head of Circular Linked list
Node *deleteHead(Node *head){
    if(head ==NULL) return NULL;
    if(head->next == head){
        delete head;
        return NULL;
    }
        head->data = head->next->data;
        Node *temp = head->next;
        head->next = head->next->next;
        delete temp;
        return head;
    
}

//Delete Kth Node From a Circular Linked list
Node *deleteKth(Node *head , int k){
    if(head==NULL) return head;
    if(k==1) return deleteHead(head);
    Node *curr = head;
    for(int i=0 ; i<k-2 ; i++) curr = curr->next;
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}

int main(){
    Node *head = NULL;
    head = insertAtBegin(head,3);
    head = insertAtBegin(head,7);
    head = insertAtBegin(head,5);
    cout<<"Insert At Begin Operation : ";
    PrintCLL(head);
    head = insertAtEnd(head,2);
    head = insertAtEnd(head,9);
    cout<<"Insert At End Operation : ";
    PrintCLL(head);
    head = deleteHead(head);
    cout<<"Delete Head Operation : ";
    PrintCLL(head);
    head = deleteKth(head,3);
    cout<<"Delete 3rd Node From Begining : ";
    PrintCLL(head);

}

