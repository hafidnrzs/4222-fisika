#include "header.h"

void menuJarak()
{
    string satuanKecepatan, satuanWaktu;
    double besaranKecepatan, besaranWaktu;

    cout << "\n.----------------------.\n";
    cout << "  Program Mencari Jarak\n";
    cout << "'-----------------------'\n";
    do
    {
        cout << "Diketahui kecepatan. Input satuan kecepatan (km/jam atau m/s): ";
        cin >> satuanKecepatan;
        cin.ignore();
    } while (satuanKecepatan != "km/jam" && satuanKecepatan != "m/s");
    cout << "Input besaran kecepatan: ";
    cin >> besaranKecepatan;

    do
    {
        cout << "Diketahui waktu. Input satuan waktu (jam atau menit atau detik): ";
        cin >> satuanWaktu;
        cin.ignore();
    } while (satuanWaktu != "jam" && satuanWaktu != "menit" && satuanWaktu != "detik");
    cout << "Input besaran waktu: ";
    cin >> besaranWaktu;

    if (satuanKecepatan == "km/jam")
    {
        besaranKecepatan = konversiKmpjKeMps(besaranKecepatan);
    }
    if (satuanWaktu == "jam")
    {
        besaranWaktu = konversiJamDetik(besaranWaktu);
    }
    else if (satuanKecepatan == "menit")
    {
        besaranWaktu = konversiMenitDetik(besaranWaktu);
    }

    double hasil = cariJarak(besaranKecepatan, besaranWaktu);
    string satuanJarak = "m";

    // konversi hasil
    int pilihkonversiJarak;
    do
    {   
        cout << ".------------.\n";
        cout << "Hasil : " << hasil << " " << satuanJarak << "\n";
        if (satuanJarak == "m")
        {
            cout << "1. Konversi ke km\n";
            cout << "0. Kembali ke menu utama\n";
            cout << "Pilih menu: ";
            cin >> pilihkonversiJarak;
            if (pilihkonversiJarak == 1)
            {
                hasil = konversiMKeKm(hasil);
                satuanJarak = "km";
            }
        }
        else if (satuanJarak == "km")
        {
            cout << "1. Konversi ke m \n";
            cout << "0. Kembali ke menu utama\n";
            cout << "Pilih menu: ";
            cin >> pilihkonversiJarak;
            if (pilihkonversiJarak == 1)
            {
                hasil = konversiKmKeM(hasil);
                satuanJarak = "m";
            }
        }
    } while (pilihkonversiJarak != 0);
}