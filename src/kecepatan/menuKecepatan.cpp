#include "header.h"

void menuKecepatan()
{
    string satuanJarak, satuanWaktu;
    double besaranJarak, besaranWaktu;

    cout << "\n.---------------------------.\n";
    cout << "  Program Mencari Kecepatan\n";
    cout << "'---------------------------'\n";
    do
    {
        cout << "Diketahui jarak. Input satuan jarak (km atau m): ";
        cin >> satuanJarak;
        cin.ignore();
    } while (satuanJarak != "km" && satuanJarak != "m");
    cout << "Input besaran jarak: ";
    cin >> besaranJarak;

    do
    {
        cout << "Diketahui waktu. Input satuan waktu (jam atau menit atau detik): ";
        cin >> satuanWaktu;
        cin.ignore();
    } while (satuanWaktu != "jam" && satuanWaktu != "menit" && satuanWaktu != "detik");
    cout << "Input besaran waktu: ";
    cin >> besaranWaktu;

    if (satuanJarak == "km")
    {
        besaranJarak = konversiKmKeM(besaranJarak);
    }
    if (satuanWaktu == "jam")
    {
        besaranWaktu = konversiJamDetik(besaranWaktu);
    }
    if (satuanWaktu == "menit")
    {
        besaranWaktu = konversiMenitDetik(besaranWaktu);
    }

    double hasil = cariKecepatan(besaranJarak, besaranWaktu);
    string satuanKecepatan = "m/s";

    // konversi hasil
    int pilihkonversiKecepatan;
    do
    {
        cout << ".------------.\n";
        cout << "  Hasil : " << hasil << " " << satuanKecepatan << "\n";
        if (satuanKecepatan == "km/jam")
        {
            cout << "1. Konversi ke m/s\n";
            cout << "0. Kembali ke menu utama\n";
            cout << "Pilih menu: ";
            cin >> pilihkonversiKecepatan;
            if (pilihkonversiKecepatan == 1)
            {
                hasil = konversiKmpjKeMps(hasil);
                satuanKecepatan = "m/s";
            }
        }
        else if (satuanKecepatan == "m/s")
        {
            cout << "1. Konversi ke km/jam\n";
            cout << "0. Kembali ke menu utama\n";
            cout << "Pilih menu: ";
            cin >> pilihkonversiKecepatan;
            if (pilihkonversiKecepatan == 1)
            {
                hasil = konversiMpsKeKmpj(hasil);
                satuanKecepatan = "km/jam";
            }
        }
    } while (pilihkonversiKecepatan != 0);
}