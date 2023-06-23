#include "header.h"

void menuKelompok3()
{
    cout << "Kelompok MAUREN" << endl;
    cout << "1. (A11.2022.14768) CARLITA MASACCIO MAUREN" << endl;
    cout << "2. (A11.2022.14765) MAYRA ANGGRAINI" << endl;
    cout << "3. (A11.2022.14772) DINTI YONIKA DESFIA" << endl;
    cout << "4. (A11.2022.14757) AURELIA CHIARA S" << endl;
    cout << "5. (A11.2022.14786) HAERANISA BELLA KRISANTI" << endl;
    cout << "\nProgram Hukum Newton III" << endl;

    if (apakahLanjut() == 'y')
    {
        system("cls");
        hukumNewton3();
    }
}