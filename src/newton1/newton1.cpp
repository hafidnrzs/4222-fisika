#include <iostream>
#include <cmath>

using namespace std;

class Kendaraan
{
private:
    double massa;
    double gaya;
    double kecepatan;

public:
    Kendaraan() : massa(0), gaya(0), kecepatan(0) {}

    void setMassa(double m)
    {
        massa = m;
    }

    void setGaya(double f)
    {
        gaya = f;
    }

    void cekPerbedaan(const string &situasi, double waktu, double sudutKemiringan)
    {
        double percepatan = (gaya - massa * 9.8 * sin(sudutKemiringan)) / massa;
        kecepatan += percepatan * waktu;
        double posisi = 0.5 * percepatan * waktu * waktu;

        cout << "Situasi: " << situasi << endl;
        cout << "Massa kendaraan: " << massa << " kg" << endl;
        cout << "Gaya yang bekerja: " << gaya << " N" << endl;
        cout << "Sudut kemiringan jalan: " << sudutKemiringan << " derajat" << endl;
        cout << "Percepatan kendaraan: " << percepatan << " m/s^2" << endl;
        cout << "Kecepatan kendaraan setelah " << waktu << " detik: " << kecepatan << " m/s" << endl;
        cout << "Perubahan posisi kendaraan setelah " << waktu << " detik: " << posisi << " m" << endl;
        cout << endl;
    }
};

void hukumNewton1()
{
    Kendaraan trukA;
    Kendaraan trukB;

    double massaA, gayaA, massaB, gayaB, sudutKemiringanA, sudutKemiringanB;
    double waktu;

    cout << "Masukkan massa truk A (kg): ";
    cin >> massaA;
    trukA.setMassa(massaA);

    cout << "Masukkan gaya truk A (N): ";
    cin >> gayaA;
    trukA.setGaya(gayaA);

    cout << "Masukkan sudut kemiringan jalan untuk truk A (derajat): ";
    cin >> sudutKemiringanA;

    cout << "Masukkan massa truk B (kg): ";
    cin >> massaB;
    trukB.setMassa(massaB);

    cout << "Masukkan gaya truk B (N): ";
    cin >> gayaB;
    trukB.setGaya(gayaB);

    cout << "Masukkan sudut kemiringan jalan untuk truk B (derajat): ";
    cin >> sudutKemiringanB;

    cout << "Masukkan waktu (detik): ";
    cin >> waktu;

    cout << " " << endl;

    trukA.cekPerbedaan("Truk A melewati jalan lurus", waktu, sudutKemiringanA);
    trukB.cekPerbedaan("Truk B melewati jalan menanjak", waktu, sudutKemiringanB);

    return;
}
