#include <iostream>
#include <chrono> // Untuk delay
#include <thread> // Untuk sleep_for
#include <cmath> // library mat
using namespace std;

int main()
{
    char pilihan;
    double pi, SPE, SPA, KEL, LUAS, dia1, dia2, r, t, voltabung;

    pi = 3.1415926535; // nilai pi

awal:
    // clear console
    system("CLS");
    // User diminta untuk memilih operasi
    cout << "==================== SUP MY G ====================" << endl;
    cout << "Pilihlah Dari Operasi Berikut Ini :" << endl;
    cout << "1. Menghitung Keliling Layang - Layang " << endl;
    cout << "2. Menghitung Luas Layang - Layang " << endl;
    cout << "3. Menghitung Volume Tabung " << endl;
    cout << "Q. Keluar Dari Aplikasi " << endl <<endl;
    cout << "Input : ";
    cin >> pilihan;

    if (pilihan == '1') {
        goto layang_keliling;
    }
    if (pilihan == '2') {
        goto layang_luas;
    }
    if (pilihan == '3') {
        goto tabung_vol;
    }
    if (pilihan == 'Q' || pilihan == 'q') {
        goto akhir;
    }


layang_keliling:
    // clear console
    system("CLS");
    // pertanyaan keliling layangan
    cout << "Sisi Pendek Layang-Layang (CM)  : ";
    cin >> SPE;
    cout << "Sisi Panjang Layang-Layang (CM) : ";
    cin >> SPA;

    // rumus keliling layangan
    KEL = (2 * (SPE + SPA));

    // Output ke console
    cout << "Keliling Layang-Layang : " << KEL << "CM" << endl;

    // minta yes or no
    cout << endl << endl;
    cout << "Y untuk mengulang penghitungan, Q untuk ke home !!  ";
    cin >> pilihan;
    cout << endl;
    if (pilihan == 'Y' || pilihan == 'y') {
        goto layang_keliling; // Kembali ke penghitungan luas
    }
    else if (pilihan == 'Q' || pilihan == 'q') {
        goto awal; // Kembali ke home
    }
    else {
        // Menangani input yang tidak valid
        cout << "Input error, otomatis kembali ke Home !!" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        goto awal; // Kembali ke prompt
    }



layang_luas:
    // clear console
    system("CLS");
    // pertanyaan luas layangan
    cout << "Diagonal 1 (CM)  : ";
    cin >> dia1;
    cout << "Diagonal 2 (CM)  : ";
    cin >> dia2;

    // rumus keliling dan luas layangan
    LUAS = (0.5 * dia1 * dia2);

    // Output ke console
    cout << "Luas Layang - Layang   : " << LUAS << "CM" << endl;

    // minta yes or no
    cout << endl << endl;
    cout << "Y untuk mengulang penghitungan, Q untuk ke home !!  ";
    cin >> pilihan;
    cout << endl;
    if (pilihan == 'Y' || pilihan == 'y') {
        goto layang_luas; // Kembali ke penghitungan luas
    }
    else if (pilihan == 'Q' || pilihan == 'q') {
        goto awal; // Kembali ke home
    }
    else {
        // Menangani input yang tidak valid
        cout << "Input error, otomatis kembali ke Home !!" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        goto awal; // Kembali ke prompt
    }


tabung_vol:
    // clear console
    system("CLS");
    // pertanyaan kel dan luas layangan
    cout << "Jari - Jari Tabung (CM)  : ";
    cin >> r;
    cout << "Tinggi Tabung (CM)       : ";
    cin >> t;

    // rumus volume tabung
    voltabung = (pi*pow(r, 2)*t);

    // Output ke console
    cout << "Volume Tabung   : " << voltabung << "CM" << endl;

    // minta yes or no
    cout << endl << endl;
    cout << "Y untuk mengulang penghitungan, Q untuk ke home !!  ";
    cin >> pilihan;
    cout << endl;
    if (pilihan == 'Y' || pilihan == 'y') {
        goto tabung_vol; // Kembali ke penghitungan luas
    }
    else if (pilihan == 'Q' || pilihan == 'q') {
        goto awal; // Kembali ke home
    }
    else {
        // Menangani input yang tidak valid
        cout << "Input error, otomatis kembali ke Home !!" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        goto awal; // Kembali ke prompt
    }

akhir:
    return 0;
} 