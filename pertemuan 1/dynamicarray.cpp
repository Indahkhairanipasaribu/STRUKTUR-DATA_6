#include <iostream>
using namespace std;

int main() {
    system("cls");

    int n;
    // array biasa -> int arr[5];

    cout << "Masukkan jumlah data : ";
    cin >> n;

    int* arr = new int[n];

    cout << "Input data\n";

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "Output Data\n";

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << " : " << arr[i] << endl;
    }

    delete[] arr;
    return 0;
}