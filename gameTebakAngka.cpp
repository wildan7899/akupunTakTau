#include <bits/stdc++.h>
using namespace std;

int main () {

    //inisialisasi angka acak
    srand(time(0)); //angka 
    int angkaRahasia = rand() % 100 + 1; //angka acak antara 1-100
    int tebakan;
    int jumlahCoba = 0;

    cout << "Selamat datang di permainan Tebak Angka!" << endl;

    //perulangan untuk menebak angka
    do {
        cout << "Masukkan tebakanmu: ";
        cin >> tebakan;
        jumlahCoba++;

        if (tebakan > angkaRahasia) {
            cout << "Tebakanmu terlalu besar, WOK! Coba Lagi." << endl;
        } else if (tebakan < angkaRahasia) {
            cout << "Tebakanmu terlalu kecil, WOK! Coba Lagi." << endl;
        } else {
            cout << "Anjay! Tebakan lu bener WOK: " << angkaRahasia << endl;
            cout << "Jumlah percobaan: " << jumlahCoba << " kali" << endl;
        }   

    } while (tebakan != angkaRahasia);


    return 0;
}