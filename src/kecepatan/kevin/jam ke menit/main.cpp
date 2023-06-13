#include <iostream>
using namespace std;

double konversi_jam_menit(double jam) {
    double menit = jam * 60;
    return menit;
}

double konversi_menit_jam(double menit) {
    double jam = menit / 60;
    return jam;
}

int main() {
    double jamInput, menitInput;

    cout << "Program Konversi Jam - Menit" << endl;
    cout << "-----------------------------" << endl;

    cout << "Masukkan jumlah jam: ";
    cin >> jamInput;

    cout << "Masukkan jumlah menit: ";
    cin >> menitInput;

    double totalMenit = konversi_jam_menit(jamInput);
    cout << "Hasil Jam Ke Menit: " << totalMenit << endl;

    double jamOutput = konversi_menit_jam(menitInput);
    cout << "Hasil Menit Ke Jam: " << jamOutput << endl;

    return 0;
}