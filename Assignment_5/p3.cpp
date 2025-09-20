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

Node* middle(Node* head){
    Node* fast = head;
    Node* slow = head;

    while(fast != nullptr && fast->next != nullptr){
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}
int main(){
    int arr[] = {1,2,3,4};
    Node* head = convertToLL(arr, 5);
    Node* mid = middle(head);
    cout << mid->val;

    return 0;
}