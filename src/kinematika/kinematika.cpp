// import libary
#include <iostream>
// fungsi namespcae
using namespace std;

void kinematika()
{
    double x0, v0, a, t, fuel, fuelEfficiency, cc;
    cout << endl;
    cout << "-----== Program Gerak Kinematik ==-----" << endl;

    cout << "Masukkan posisi awal mobil(km)         : ";
    cin >> x0;
    cout << "Masukkan kecepatan awal mobil(km/h)    : ";
    cin >> v0;
    cout << "Masukkan percepatan mobil(km/h^2)      : ";
    cin >> a;
    cout << "Masukkan lama mobil bergerak (h)       : ";
    cin >> t;
    cout << "Masukkan jumlah bahan bakar (L)        : ";
    cin >> fuel;

    bool validInput = false;
    do
    {
        cout << "Masukkan kapasitas mesin (0-3000 CC)   : ";
        cin >> cc;
        if (cc >= 0 && cc <= 3000)
        {
            validInput = true;
        }
        else
        {
            cout << "Input tidak valid. Silakan coba lagi." << endl;
        }

    } while (!validInput);

    cout << endl;

    cout << "==========================================================================" << endl;

    cout << endl;

    if (cc <= 1000)
    {
        fuelEfficiency = 25;
    }
    else if (cc > 1000 && cc <= 1500)
    {
        fuelEfficiency = 20;
    }
    else if (cc > 1500 && cc <= 2000)
    {
        fuelEfficiency = 15;
    }
    else if (cc > 2000 && cc <= 2500)
    {
        fuelEfficiency = 10;
    }
    else if (cc > 2500 && cc <= 3000)
    {
        fuelEfficiency = 5;
    }

    double xt = x0 + v0 * t + 0.5 * a * t * t;
    double vt = v0 + a * t;
    double distance = fuel * fuelEfficiency;
    double sum = xt / fuelEfficiency;
    double remain = fuel - sum;
    double range = distance - xt;

    cout << "Posisi akhir mobil setelah " << t << " jam adalah " << xt << " Km" << endl;
    cout << "Kecepatan akhir mobil setelah " << t << " jam adalah " << vt << " Km/H" << endl;
    cout << "Perkiraan jarak tempuh dengan bahan bakar yang tersedia adalah " << distance << " Km" << endl;
    cout << "jumlah bahan bakar yang diperlukan selama " << t << " jam adalah " << sum << " L " << endl;
    cout << "Sisa bahan bakar setelah menempuh jarak " << xt << " Km adalah " << remain << " L " << endl;
    cout << "Perkiraan jarak yang dapat ditempuh lagi sampai bensin habis adalah " << range << " Km " << endl;

    return;
}