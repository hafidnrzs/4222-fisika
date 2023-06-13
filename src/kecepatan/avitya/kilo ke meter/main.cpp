#include <iostream>

using namespace std;

double kphToMps(double kph) {
    return kph * 1000 / 3600;
}

int main() {
    double kph;
    cout << "Masukkan kecepatan dalam kilometer per jam (km/h): ";
    cin >> kph;

    double mps = kphToMps(kph);

    cout << "Kecepatan setara dalam meter per detik (m/s): " << mps << endl;

    return 0;
}
