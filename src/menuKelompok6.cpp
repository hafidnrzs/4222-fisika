#include "header.h"

void menuKelompok6()
{
    cout << "Kelompok Ridho" << endl;
    cout << "1. (A11.2022.14751) AHMAD RIDHO ALGHIFARI" << endl;
    cout << "2. (A11.2022.14353) M NAUFAL ADANI" << endl;
    cout << "3. (A11.2022.14755) M NAFFA RIZKY FISSABILLI" << endl;
    cout << "4. (A11.2022.14756) BAGAS ARYO PRIYATAMA" << endl;
    cout << "5. (A11.2022.14785) VICKY AJI SETIAWAN" << endl;
    cout << "\nProgram Pengamatan Keadaan Energi Mekanikal" << endl;

    if (apakahLanjut() == 'y')
    {
        system("cls");
        energiMekanik();
    }
}