#include <iostream>

using namespace std;

double konversiMpsKeKmph(double mps) {
    double kmph = mps * 3.6;
    return kmph;
}

int main() {
    double mps, kmph;

    cout << "Masukkan kecepatan dalam meter per detik: ";
    cin >> mps;

    kmph = konversiMpsKeKmph(mps);

    cout << "Kecepatan dalam kilometer per jam: " << kmph << std::endl;

    return 0;
}
