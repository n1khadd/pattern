#include <iostream>
using namespace std;

int main() {
    for (int i = 3; i >= 0; i--) {
        for (int j = 3; j >= i; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    for (char i = 'A'; i <= 'D'; i++) {
        for (char j = 'A'; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
