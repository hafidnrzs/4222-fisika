#include "header.h"

// void menuKecepatan();
// void menuJarak();
void menuWaktu();
void menuUtama();

int main()
{
    cout << "________________________________\n";
    cout << "| Program Kalkulator Kecepatan |\n";
    cout << "________________________________\n";

    int pilihMain;
    do
    {
        menuUtama();
        cout << "Pilih menu: ";
        cin >> pilihMain;
        if (pilihMain == 1)
        {
            // menuKecepatan();
        }
        else if (pilihMain == 2)
        {
            // menuJarak();
        }
        else if (pilihMain == 3)
        {
            menuWaktu();
        }
        else if (pilihMain == 0)
        {
            continue;
        }
        else
        {
            cout << "Input Anda salah! Masukkan menu 1 - 3 atau 0 untuk keluar\n";
        }
    }
    while (pilihMain != 0);
    
    // unitTest();
    return 0;
}

void menuUtama()
{
    cout << "Menu:\n";
    cout << "1. Mencari kecepatan\n";
    cout << "2. Mencari jarak\n";
    cout << "3. Mencari waktu\n";
    cout << "0. Keluar program\n";
}