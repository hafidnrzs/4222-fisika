#include <iostream>

using namespace std;

float hitung_waktu(float km, float jam) {
    float waktu = km / jam;
    return waktu;
}

int main() {
    float jarak, kecepatan;
    cout << "Masukkan jarak (km): ";
    cin >> jarak;
    cout << "Masukkan kecepatan (km/jam): ";
    cin >> kecepatan;

    float hasil = hitung_waktu(jarak, kecepatan);
    cout << "Waktu yang diperlukan: " << hasil << " jam " << endl;

    return 0;
}