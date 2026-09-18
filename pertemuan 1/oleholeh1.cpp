#include <iostream>
using namespace std;

int main() {
    int arr[3][3][4], val = 2;

    for (int i = 0; i < 3; i++) {
        cout << "LAPIS " << i + 1 << "\n";
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                arr[i][j][k] = val;
                
                if (val < 10) cout << " ";
                cout << val << " ";
                
                val += ((i * 12 + j * 4 + k) % 2 == 0) ? -1 : 2;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}