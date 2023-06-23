#include <iostream>
#include <cmath>

using namespace std;

// Fungsi untuk menghitung momentum
double hitungMomentum(double massa, double kecepatan) {
    return massa * kecepatan;
}

// Fungsi untuk menghitung energi kinetik
double hitungEnergiKinetik(double massa, double kecepatan) {
    double energiKinetik = 0.5 * massa * pow(kecepatan, 2);
    return energiKinetik;
}

void momentum() {
    double massa, kecepatan;

    cout << "=== KALKULATOR PERHITUNGAN MOMENTUM DAN ENERGI KINETIK ===" << endl;

    // Masukkan massa objek
    cout << "Masukkan massa objek (kg): ";
    cin >> massa;

    // Masukkan kecepatan objek
    cout << "Masukkan kecepatan objek (m/s): ";
    cin >> kecepatan;

    // Hitung dan tampilkan momentum
    double momentum = hitungMomentum(massa, kecepatan);
    cout << "Momentum objek adalah " << momentum << " kg.m/s" << endl;

    // Hitung dan tampilkan energi kinetik
    double energiKinetik = hitungEnergiKinetik(massa, kecepatan);
    cout << "Energi kinetik objek adalah " << energiKinetik << " joule" << endl;

    return;
}