#include "header.h"

int main()
{
    cout << ".-------------------------------.\n";
    cout << "| KUMPULAN PROJEK KELOMPOK 4222 |\n";
    cout << "'-------------------------------'\n";

    int pilihMain;
    do
    {
        cout << "\n.-------------------.\n";
        cout << " Menu:\n";
        cout << " 1. KELOMPOK 1 - Hukum Newton 1\n";
        cout << " 2. KELOMPOK 2 - Hukum Newton 2\n";
        cout << " 3. KELOMPOK 3 - Hukum Newton 3\n";
        cout << " 4. KELOMPOK 4 - Kinematika\n";
        cout << " 5. KELOMPOK 5 - Kecepatan\n";
        cout << " 6. KELOMPOK 6 - Energi Mekanik\n";
        cout << " 7. KELOMPOK 7 - Momentum\n";
        cout << " 0. Keluar program\n";
        cout << "'-------------------'\n";
        cout << "Pilih menu: ";
        cin >> pilihMain;

        if (pilihMain == 1)
        {
            menuKelompok1();
        }
        else if (pilihMain == 2)
        {
            menuKelompok2();
        }
        else if (pilihMain == 3)
        {
            menuKelompok3();
        }
        else if (pilihMain == 4)
        {
            menuKelompok4();
        }
        else if (pilihMain == 5)
        {
            menuKelompok5();
        }
        else if (pilihMain == 6)
        {
            menuKelompok6();
        }
        else if (pilihMain == 7)
        {
            menuKelompok7();
        }
        else if (pilihMain == 0)
        {
            continue;
        }
        else
        {
            cout << "Input Anda salah! Masukkan menu 1 - 7 atau 0 untuk keluar\n";
        }

        if (keluarProgram() == 'y')
        {
            return 0;
        }
    } while (pilihMain != 0);
}
