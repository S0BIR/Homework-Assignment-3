#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string N;
        cin >> N;
        for (int j = N.length() - 1; j >= 0; --j) {
            cout << N[j];
            if (j > 0) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;}
