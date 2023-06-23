#include "header.h"

void menuKelompok4()
{
    cout << "Kelompok Daffa" << endl;
    cout << "1. (A11.2022.14758) ARGA ARYANTA INDRAFATA" << endl;
    cout << "2. (A11.2022.14767) DAFFA KUMARA KHIAR F" << endl;
    cout << "3. (A11.2022.14773) DAVID NAUFAL ZAKI" << endl;
    cout << "4. (A11.2022.14776) KRISNA SHAADIQ NUGROHO" << endl;
    cout << "5. (A11.2022.14848) MUHAMMAD AULIA ANHAR" << endl;
    cout << "\nProgram Gerak Kinematik" << endl;

    if (apakahLanjut() == 'y')
    {
        system("cls");
        kinematika();
    }
}