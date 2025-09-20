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

void deleteLL(Node* &head){

    while(head != nullptr){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    head = nullptr;
}

Node* insertHead(Node* head, int val){
    return new Node(val, head);
}

Node* insertTail(Node* head, int val){
    if(head == nullptr) return new Node(val);
    
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* x = new Node(val);
    temp->next = x;
    return head;
}

Node* insertion(Node* head, int val, int k){
    if(k<=0){
        cout << "You entered wrong position!";
        return nullptr;
    }

    Node* x = new Node(val);
    if(k==1){
        if(head==nullptr) return x;
        else return insertHead(head, val);
    }

    Node* temp = head;
    int cnt = 0;
    while(temp){
        cnt++;
        if(cnt == k-1){
            x->next = temp->next;
            temp->next = x;
            return head;
            
        }
        temp = temp->next;
    }

    cout << "Position Out of Bounds!!!";
    delete x;
    return head;
}

void deleteHead(Node* &head){
    if(head == nullptr) return;
    Node* temp = head;
    head = head->next;
    delete temp;
    temp = nullptr;
}

void deleteTail(Node* &head){
    if(head == nullptr || head->next == nullptr) return;
    Node* temp = head;

    while(temp->next->next != nullptr){
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;

}

void deletion(Node* &head, int k){
    if(k==1){
        deleteHead(head);
        return ;
    }

    Node* temp = head;
    int cnt = 0;

    while(temp != nullptr){
        cnt++;

        if(cnt == k-1){
            Node* x = temp->next->next;
            delete temp->next;
            temp->next = x;
            return;
        }
        temp = temp->next;
    }

    cout << "The deletion position is out of bounds.";
    
}

int main(){
    int arr[] = {5,3,1,4,2};
    Node* head = convertToLL(arr, 5);

    deletion(head, 1);

    display(head);
    return 0;
}