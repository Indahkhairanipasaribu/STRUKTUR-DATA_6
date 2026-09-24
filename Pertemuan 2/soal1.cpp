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

void display() {
    node *temp = top;

    cout << "Isi Stack : ";

    while (temp != NULL) {
        cout << temp->value << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {

    system("cls");

    push(10);
    display();
    push(20);
    display();
    push(30);
    display();
    pop();
    display();

    return 0;
}