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

Node* findKNode(Node* head, int k){
    k -= 1;
    Node* temp = head;
    while(temp != nullptr && k>0){
        temp = temp->next;
        k--;
    }
    return temp;
}

Node* rev(Node* &head){
    if(head == nullptr || head->next==nullptr){
        return head;
    }
    Node* newHead = rev(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newHead;
}

Node* revInGrp(Node* &head, int k){

    Node* temp = head;
    Node* prev = nullptr;
    Node* newHead = nullptr;
    
    while(temp != nullptr){
        Node* kNode = findKNode(temp, k);

        if(kNode == nullptr){
             if(prev) prev->next = temp;
            break;
        }

        Node* nextNode = kNode->next;
        kNode->next = nullptr;
        Node* revHead = rev(temp);

        if(temp==head){
            newHead = revHead;
        }
        else {
            prev->next = revHead;
        }
        prev = temp;
        temp = nextNode;
        

    }

    return newHead;
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    Node* head = convertToLL(arr, 8);
    head = revInGrp(head, 3);
    display(head);
    return 0;
}