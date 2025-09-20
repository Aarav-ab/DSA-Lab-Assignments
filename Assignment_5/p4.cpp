#include <iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

        Node(int val){
            this->val = val;
            this->next = nullptr;
        }

        Node(int val, Node* next){
            this->val = val;
            this->next = next;
        }
};

void display(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

Node* convertToLL(int arr[], int len){
    if(len==0) return nullptr;
    
    Node* head = new Node(arr[0]);
    Node* temp = head;

    for(int i=1; i<len; i++){
        Node* x = new Node(arr[i]);
        temp->next = x;
        temp = x;
    }
    return head;
}

// Using Recursion
Node* reverseLL(Node* head){
    if(head->next == nullptr || head == nullptr) return head;
    Node* newHead = reverseLL(head->next);
    
    head->next->next = head;
    head->next = nullptr;
    return newHead;
}

// Using Loop
Node* easyReverseLL(Node* head){
    Node* temp = head;
    Node* prev = nullptr;

    while(temp != nullptr){
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

int main(){
    int arr[] = {5,3,1,4,2};
    Node* head = convertToLL(arr, 5);
    Node* rev = easyReverseLL(head);
    display(rev);

    return 0;
}