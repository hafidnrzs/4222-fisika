#include "header.h"

int main()
{
    // Test konversi sekon -> jam
    cout << konversiSekonKeJam(7200) << " jam" << endl; // output = 2 jam
    cout << konversiSekonKeJam(1850.5) << " jam" << endl; // output = 0.514 jam

    // Test konversi sekon -> menit
    cout << konversiSekonKeMenit(1800) << " menit" << endl; // output = 30 menit
    cout << konversiSekonKeMenit(360.75) << " menit" << endl; // output = 6.0125 menit

    // Test cari kecepatan
    cout << cariKecepatan(150, 60) << " m/s" << endl; // output = 2.5 m/s
    return 0;
}