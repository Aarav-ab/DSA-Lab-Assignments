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

int numberOfOccur(Node* head, int key){
    Node* temp = head;
    int cnt = 0;
    while(temp){
        if(temp->val == key) cnt++;
        temp = temp->next;
    }
    return cnt;
}

void deleteKey(Node* &head, int key){
    Node* temp = head;
    while(temp && temp->val==key){
        head = head->next;
        delete temp;
        temp = head;
    }

    while(temp && temp->next){
        if(temp->next->val == key){
            Node* x = temp->next->next;
            delete temp->next;
            temp->next = x;
        }
        else temp = temp->next;
    }
}

int main(){
    int arr[] = {1,2,1,2,1,3,1};
    int key = 1;

    Node* head = convertToLL(arr, 7);
    deleteKey(head, key);
    display(head);
    return 0;
}