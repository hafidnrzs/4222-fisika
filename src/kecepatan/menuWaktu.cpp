#include "header.h"

void menuWaktu()
{
    string satuanJarak, satuanKecepatan;
    double besaranJarak, besaranKecepatan;

    cout << "Program Mencari Waktu\n";
    cout << "Diketahui jarak. Input satuan jarak (km atau m): ";
    cin >> satuanJarak;
    cout << "Input besaran jarak: ";
    cin >> besaranJarak;

    cout << "Diketahui kecepatan. Input satuan kecepatan (km/j atau m/s): ";
    cin >> satuanKecepatan;
    cout << "Input besaran kecepatan: ";
    cin >> besaranKecepatan;

    double hasil = cariWaktu(besaranJarak, besaranKecepatan);

    cout << "Hasil: " << hasil << " m/s\n";
}