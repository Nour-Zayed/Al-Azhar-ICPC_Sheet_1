#include <iostream>

using namespace std;


int main() {
    char X;
    cin >> X;

    if (X >= '0' && X <= '9') {
        cout <<"IS DIGIT";
    } else if (X >= 'A' && X <= 'Z') {
        cout <<"ALPHA\nIS CAPITAL";
    } else if (X >= 'a' && X <= 'z') {
        cout <<"ALPHA\nIS SMALL";
    } else {
        cout << X << " is not a Digit or an Alphabet." << endl;
    }

    return 0;
}

