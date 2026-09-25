#include <iostream>
#include <stack>
using namespace std;

int main() {
    system("cls");

    stack<float> tumpukan;
    float input;

    while (cin >> input) {
        tumpukan.push(input);
    }

    do {
        cout << tumpukan.top() << " ";
        tumpukan.pop();
    } while (tumpukan.size() != 0);

    cout << endl;

    system("pause");

    return 0;
}