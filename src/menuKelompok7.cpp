#include "header.h"

void menuKelompok7()
{
    cout << "(A11.2022.14769) TEGAR SETIYANA RAMADHAN" << endl;
    cout << "(A11.2022.14764) PETRUS DAMIANUS SIGIT D. S." << endl;
    cout << "(A11.2022.14763) IVAN DARRYL CAHYADI" << endl;
    cout << "\nProgram Kalkulator Perhitungan Momentum dan Energi Kinetik" << endl;

    if (apakahLanjut() == 'y')
    {
        system("cls");
        momentum();
    }
}