#include <iostream>
using namespace std;

struct node {
    int value;
    node *next;
};

node *front = NULL;
node *rear = NULL;

void enqueue(int n) {
    node *newNode = new node;
    newNode->value = n;
    newNode->next = NULL;

    if (front == NULL) {
        front = newNode;
        rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue() {
    node *temp = front;
    front = front->next;

    if (front == NULL)
        rear = NULL;

    delete temp;
}

void display() {
    node *temp = front;

    cout << "Isi Queue : ";

    while (temp != NULL) {
        cout << temp->value << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {

    system("cls");

    enqueue(10);
    display();
    enqueue(20);
    display();
    enqueue(30);
    display();
    dequeue();
    display();

    return 0;
}