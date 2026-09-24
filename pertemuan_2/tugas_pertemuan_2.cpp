#include <iostream>
using namespace std;

struct node {
    int value;
    node *next;
};

node *top = NULL;

void push(int n) {
    node *newNode = new node;
    newNode->value = n;
    newNode->next = top;
    top = newNode;
}

void pop() {
    node *temp = top;
    top = top->next;
    delete temp;
}

void displayStack() {
    node *temp = top;

    cout << "Isi Stack : ";

    while (temp != NULL) {
        cout << temp->value << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

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

void displayQueue() {
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

    cout << "STACK" << endl;

    push(10);
    displayStack();

    push(20);
    displayStack();

    push(30);
    displayStack();

    pop();
    displayStack();

    cout << endl;

    cout << "QUEUE" << endl;

    enqueue(10);
    displayQueue();

    enqueue(20);
    displayQueue();

    enqueue(30);
    displayQueue();

    dequeue();
    displayQueue();

    return 0;
}