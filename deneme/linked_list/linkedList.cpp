#include <iostream>
using namespace std;

class Node{
public:
    int data; // tuttuğumuz elemanların değeri
    Node* next;

    Node(int data){
        this->data = data; 
        this->next = nullptr;
    }
};

class LinkedList{
public:
    Node* head; //başlangıç node'unu tanımlamak.

    LinkedList(){
        head = nullptr;
    }

    void append(int data1){
        Node* new_node = new Node(data1);
        if(head == nullptr){
            head = new_node;
            return;
        }
        Node* last = head; //son düğümü bulma işlemi
        while(last->next != nullptr){
            last = last->next;
        }
        last->next = new_node;
    }

    void printList(){
        Node* current = head;
        while(current != nullptr){
            cout << current->data << "->";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }

    void deleteNode(int key){
        Node* temp = head;
        Node* prev = nullptr; 

        if(temp != nullptr && temp->data == key){
            head = temp->next;
            delete temp;
            return;
        }

        while(temp != nullptr && temp->data != key){
            prev = temp;
            temp = temp->next;
        }

        if(temp == nullptr) return;

        prev->next = temp->next;
        delete temp;


    }


};


int main(){
    LinkedList list;

    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);

    cout << "Linked List:" << endl;
    list.printList();
    cout<< list.head;


    cout << "3 'ü sil:" << endl;
    list.deleteNode(3);
    list.printList();
    return 0;
} 
