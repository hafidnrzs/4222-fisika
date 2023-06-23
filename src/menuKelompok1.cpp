#include "header.h"

void menuKelompok1()
{
    cout << "Kelompok Bryan" << endl;
    cout << "1. (A11.2022.14762) BRYAN BAGAS PRASETYO PURBA" << endl;
    cout << "2. (A11.2022.14761) SALIM ADISETO" << endl;
    cout << "3. (A11.2022.14752) ALFY RIFQIFATHONY" << endl;
    cout << "4. (A11.2022.14749) DETA RICHO ADITTIA" << endl;
    cout << "5. (A11.2022.14778) M. IVAN KHOIRUR RIZKY" << endl;
    cout << "6. (A11.2022.14760) RAFI JONATHAN S." << endl;
    cout << "\nAplikasi Hukum Newton I" << endl;

    if (apakahLanjut() == 'y')
    {
        system("cls");
        hukumNewton1();
    }
}