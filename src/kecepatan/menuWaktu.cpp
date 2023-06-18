#include "header.h"

void menuWaktu()
{
    string satuanJarak, satuanKecepatan;
    double besaranJarak, besaranKecepatan;

    cout << "\n.-----------------------.\n";
    cout << "  Program Mencari Waktu\n";
    cout << "'-----------------------'\n";

    cout << "Diketahui jarak. ";
    do
    {
        cout << "Input satuan jarak (km atau m): ";
        cin >> satuanJarak;
    }
    while (satuanJarak != "km" && satuanJarak != "m");
    cout << "Input besaran jarak: ";
    cin >> besaranJarak;

    cout << "Diketahui kecepatan. ";
    do
    {
        cout << "Input satuan kecepatan (km/jam atau m/s): ";
        cin >> satuanKecepatan;
    }
    while (satuanKecepatan != "km/jam" && satuanKecepatan != "m/s");
    cout << "Input besaran kecepatan: ";
    cin >> besaranKecepatan;

    if (satuanJarak == "km")
    {
        besaranJarak = konversiKmKeM(besaranJarak);
    }
    if (satuanKecepatan == "km/jam")
    {
        besaranKecepatan = konversiKmpjKeMps(besaranKecepatan);
    }
    double hasil = cariWaktu(besaranJarak, besaranKecepatan);
    string satuanWaktu = "s";

    // Konversi hasil
    int pilihKonversiWaktu;
    do
    {
        cout << ".------------.\n";
        cout << "  Hasil: " << hasil << " " << satuanWaktu << "\n";
        if (satuanWaktu == "s")
        {
            cout << "1. Konversi ke jam\n";
            cout << "2. Konversi ke menit\n";
            cout << "0. Kembali ke menu utama\n";
            cout << "Pilih menu: ";
            cin >> pilihKonversiWaktu;
            if (pilihKonversiWaktu == 1)
            {
                hasil = konversiSekonKeJam(hasil);
                satuanWaktu = "jam";
            }
            else if (pilihKonversiWaktu == 2)
            {
                hasil = konversiSekonKeMenit(hasil);
                satuanWaktu = "menit";
            }
        }
        else if (satuanWaktu == "menit")
        {
            cout << "1. Konversi ke jam\n";
            cout << "2. Konversi ke sekon\n";
            cout << "0. Kembali ke menu utama\n";
            cout << "Pilih menu: ";
            cin >> pilihKonversiWaktu;
            if (pilihKonversiWaktu == 1)
            {
                hasil = konversiMenitJam(hasil);
                satuanWaktu = "jam";
            }
            else if (pilihKonversiWaktu == 2)
            {
                hasil = konversiMenitDetik(hasil);
                satuanWaktu = "s";
            }
        }
        else if (satuanWaktu == "jam")
        {
            cout << "1. Konversi ke menit\n";
            cout << "2. Konversi ke sekon\n";
            cout << "0. Kembali ke menu utama\n";
            cout << "Pilih menu: ";
            cin >> pilihKonversiWaktu;
            if (pilihKonversiWaktu == 1)
            {
                hasil = konversiJamMenit(hasil);
                satuanWaktu = "menit";
            }
            else if (pilihKonversiWaktu == 2)
            {
                hasil = konversiJamDetik(hasil);
                satuanWaktu = "s";
            }
        }
    } while (pilihKonversiWaktu != 0);   
}