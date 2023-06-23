#include <iostream>
#include <cstdlib>
using namespace std;

void menuKelompok1();
void menuKelompok2();
void menuKelompok3();
void menuKelompok4();
void menuKelompok5();
void menuKelompok6();
void menuKelompok7();

// Kelompok
void hukumNewton1();
void hukumNewton2();
void hukumNewton3();
void kinematika();
void kecepatan();
void energiMekanik();
void momentum();

inline char apakahLanjut()
{
    char lanjut;
    cout << "Lanjut? y/t : ";
    cin >> lanjut;
    return lanjut;
}

inline char keluarProgram()
{
    char exit;
    cout << "Keluar Program? y/t : ";
    cin >> exit;
    return exit;
}