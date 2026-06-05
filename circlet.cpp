#include <iostream>
using namespace std;

int main() {

    // pattern:1

    for(int i = 41; i <= 45; i++) {

        for(int j = 41; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    cout << endl;

    //  // pattern:2

    int num = 11;

    for(int i = 1; i <= 4; i++) {

        for(int j = 1; j <= i; j++) {

            if(num <= 20) {
                cout << num << " ";
                num++;
            }
        }

        cout << endl;
    }

    cout << endl;

     // pattern:3

    for(int i = 5; i >= 1; i--) {

        for(int s = 1; s < i; s++) {
            cout << "  ";
        }

        for(int j = i; j <= 5; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    cout << endl;

     // pattern:4

    for(int i = 5; i >= 1; i--) {

        for(int s = 5; s > i; s--) {
            cout << "  ";
        }

        for(int j = 1; j <= i; j++) {

            if(j % 2 == 1) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }

        cout << endl;
    }

    cout << endl;

     // pattern:5

    int n = 5;

    for(int i = n; i >= 1; i--) {

        for(int s = 1; s < i; s++) {
            cout << "  ";
        }

        for(int j = i; j <= n; j++) {
            cout << j << " ";
        }

        for(int j = n - 1; j >= i; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

     cout << endl;


    //  // pattern:6
    int m = 5;

    for(int i = 1; i <= m; i++) {

        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        for(int s = 1; s <= (m - i) * 4; s++) {
            cout << " ";
        }

        for(int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    cout<<endl;

    // pattern:7

     int a = 5;

    for(int i = 1; i <= a; i++) {

        for(int j = 1; j <= a; j++) {

            if(i == 1 || i == 3) {
                cout << "* ";
            }
            else if(i == 2 && (j == 1 || j == a)) {
                cout << "* ";
            }
            else if(i == 2) {
                cout << "  ";
            }
            else if(i >= 4 && j == 1) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}