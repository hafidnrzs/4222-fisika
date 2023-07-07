#include <iostream>
#include <cmath>
using namespace std; // Anda bisa menggunakan using namespace std; untuk menghindari penulisan std::

// Fungsi untuk menghitung percepatan roket berdasarkan gaya dorong dan massa roket
double hitungPercepatan(double gayaDorong, double massaRoket)
{
    return gayaDorong / massaRoket;
}

void hukumNewton3()
{
    double gayaDorong, massaRoket;
    double waktu, percepatan, kecepatan, jarak;

    // Input gaya dorong dan massa roket
    cout << "Masukkan gaya dorong roket (Newtons): ";
    cin >> gayaDorong;
    cout << "Masukkan massa roket (kilogram): ";
    cin >> massaRoket;

    // Periksa apakah nilai gaya dorong atau massa roket adalah nol
    if (gayaDorong == 0 || massaRoket == 0)
    {
        cout << "Nilai gaya dorong atau massa roket tidak valid. Program berhenti." << endl;
        return; // Keluar dari program jika nilai tidak valid
    }

    // Input waktu simulasi
    cout << "Masukkan waktu simulasi (detik): ";
    cin >> waktu;

    if (waktu == 0)
    {
        cout << "Masukkan waktu yang valid" << endl;
        return;
    }

    percepatan = hitungPercepatan(gayaDorong, massaRoket);
    kecepatan = percepatan * waktu;
    jarak = 0.5 * percepatan * pow(waktu, 2);

    // Output hasil simulasi
    cout << "Hasil simulasi: " << endl;
    cout << "Percepatan roket: " << percepatan << " m/s^2" << endl;
    cout << "Kecepatan roket setelah " << waktu << " detik: " << kecepatan << " m/s" << endl;
    cout << "Jarak yang ditempuh setelah " << waktu << " detik: " << jarak << " m" << endl;

    return;
}