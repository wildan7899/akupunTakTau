#include <bits/stdc++.h>
using namespace std;

int main () {

    int number;
    char op;


    cout << "Kalkulator BETA" << endl;
    cout << "Masukkan angka pertama: ";
    cin >> number;
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> op;
    cout << "Masukkan angka kedua: ";
    cin >> number;

    if (op == '+') {
        cout << "Hasil: " << number + number << endl;
    } else if (op == '-') {
        cout << "Hasil: " << number - number << endl;
    } else if (op == '*') {
        cout << "Hasil: " << number * number << endl;
    } else if (op == '/') {
        if (number != 0) {
            cout << "Hasil: " << number / number << endl;
        } else {
            cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
        }
    } else {
        cout << "Operator tidak valid!" << endl;
    }
    



    return 0;
}