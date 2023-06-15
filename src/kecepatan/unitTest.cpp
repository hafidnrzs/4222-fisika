#include "header.h"

void menuCariKecepatan()
{
    // Test cari kecepatan
    cout << cariKecepatan(150, 60) << " m/s" << endl; // output = 2.5 m/s
}

void menuCariJarak()
{
    cout << carijarak(10, 1000) << endl;
}

void menuCariWaktu()
{
    double jarak, kecepatan;
    cout << "Masukkan jarak (km): ";
    cin >> jarak;
    cout << "Masukkan kecepatan (km/jam): ";
    cin >> kecepatan;

    double hasil = hitung_waktu(jarak, kecepatan);
    cout << "Waktu yang diperlukan: " << hasil << " jam " << endl;
}

void menuKonversiKecepatan()
{
    cout << "Konversi kecepatan\n";
    cout << "1. km/jam ke m/s\n";
    cout << "2. m/s ke km/jam\n";
    cout << "Pilih menu: ";

    int pilih;
    double kph, mps, kmph;
    cin >> pilih;
    switch(pilih)
    {
        case 1:
            cout << "Masukkan kecepatan dalam kilometer per jam (km/h): ";
            cin >> kph;

            mps = kphToMps(kph);

            cout << "Kecepatan setara dalam meter per detik (m/s): " << mps << endl;
            break;
        case 2:
            cout << "Masukkan kecepatan dalam meter per detik: ";
            cin >> mps;

            kmph = konversiMpsKeKmph(mps);

            cout << "Kecepatan dalam kilometer per jam: " << kmph << endl;
            break;
        default:
            return;
    }
}

void menuKonversiJarak()
{
    // Test konversi km -> m
    cout << konversi_km_m(10) << "m" << endl; // output = 10000m
    cout << konversi_km_m(0.35) << "m" << endl; // output = 350m

    // Test konversi m -> km
    cout << konversi_m_km(350) << "km" << endl; // output = 0.35km
    cout << konversi_m_km(10000) << "km" << endl; // output = 10km
}

void menuKonversiWaktu()
{
    cout << "Konversi waktu\n";
    cout << "1. sekon ke jam\n";
    cout << "2. sekon ke menit\n";
    cout << "3. jam ke detik\n";
    cout << "4. menit ke detik\n";
    cout << "5. jam ke menit\n";
    cout << "6. menit ke jam\n";
    cout << "Pilih menu: ";

    int sel;
    double jam, menit, hasil, jamInput, menitInput, totalMenit, jamOutput;
    cin >> sel;
    switch(sel)
    {
        case 1:
            // Test konversi sekon -> jam
            cout << konversiSekonKeJam(7200) << " jam" << endl; // output = 2 jam
            cout << konversiSekonKeJam(1850.5) << " jam" << endl; // output = 0.514 jam
            break;
        case 2:
            // Test konversi sekon -> menit
            cout << konversiSekonKeMenit(1800) << " menit" << endl; // output = 30 menit
            cout << konversiSekonKeMenit(360.75) << " menit" << endl; // output = 6.0125 menit
            break;
        case 3:
            cout<<"masukan jam : ";cin>>jam;
            cout<<"hasil detik : "<<jam_detik(jam);
            break;
        case 4:
            cout<<"masukan menit : ";cin>>menit;
            cout<<"hasil detik : "<<menit_detik(menit);
            break;
        case 5:
            cout << "Program Konversi Jam - Menit" << endl;
            cout << "-----------------------------" << endl;

            cout << "Masukkan jumlah jam: ";
            cin >> jamInput;

            totalMenit = konversi_jam_menit(jamInput);
            cout << "Hasil Jam Ke Menit: " << totalMenit << endl;           
            break;
        case 6:
            cout << "Masukkan jumlah menit: ";
            cin >> menitInput;

            jamOutput = konversi_menit_jam(menitInput);
            cout << "Hasil Menit Ke Jam: " << jamOutput << endl;
            break;
    }
}

void pilihMenu()
{
    int pilih;
    cout << "Pilih menu: ";
    cin >> pilih;
    switch(pilih)
    {
        case 1:
            menuCariKecepatan();
            break;
        case 2:
            menuCariJarak();
            break;
        case 3:
            menuCariWaktu();
            break;
        case 4:
            menuKonversiKecepatan();
            break;
        case 5:
            menuKonversiJarak();
            break;
        case 6:
            menuKonversiWaktu();
    }
}

void tampilMenu()
{
    cout << "Menu\n";
    cout << "1. Mencari kecepatan\n";
    cout << "2. Mencari jarak\n";
    cout << "3. Mencari waktu\n";
    cout << "4. Fungsi konversi kecepatan\n";
    cout << "5. Fungsi konversi jarak\n";
    cout << "6. Fungsi konversi waktu\n";
    pilihMenu();
}

void unitTest()
{
    cout << "Program Kalkulator Kecepatan\n";
    tampilMenu();
}