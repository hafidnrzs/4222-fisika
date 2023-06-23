#include <iostream>
#include <cmath>

void hitungGaya(double massa, double percepatan)
{
    double gaya = massa * percepatan;
    std::cout << "Gaya: " << gaya << " Newton" << std::endl;
}

void hitungMassa(double gaya, double percepatan)
{
    double massa = gaya / percepatan;
    std::cout << "Massa: " << massa << " kg" << std::endl;
}

void vhitungPercepatan(double gaya, double massa)
{
    double percepatan = gaya / massa;
    std::cout << "Percepatan: " << percepatan << " m/s^2" << std::endl;
}

void hitungGayaBidangMiringSin(double massa, double sudut, double gravitasi)
{
    // Konversi sudut dari derajat ke radian
    double sudutRad = sudut * M_PI / 180.0;

    double gaya = massa * gravitasi * sin(sudutRad);
    std::cout << "Gaya pada benda di bidang miring (sin): " << gaya << " Newton" << std::endl;
}

void hitungGayaBidangMiringCos(double massa, double sudut, double gravitasi)
{
    // Konversi sudut dari derajat ke radian
    double sudutRad = sudut * M_PI / 180.0;

    double gaya = massa * gravitasi * cos(sudutRad);
    std::cout << "Gaya pada benda di bidang miring (cos): " << gaya << " Newton" << std::endl;
}

void hukumNewton2()
{
    int pilihan;
    double massa, gaya, percepatan, sudut, gravitasi;

    do
    {
        std::cout << "------------------------" << std::endl;
        std::cout << "| KELOMPOK FISIKA FAFA |" << std::endl;
        std::cout << "------------------------" << std::endl;
        std::cout << "Menu Kalkulator Hukum Newton II:" << std::endl;
        std::cout << "1. Hitung Gaya" << std::endl;
        std::cout << "2. Hitung Massa" << std::endl;
        std::cout << "3. Hitung Percepatan" << std::endl;
        std::cout << "4. Hitung Gaya pada Benda di Bidang Miring (sin)" << std::endl;
        std::cout << "5. Hitung Gaya pada Benda di Bidang Miring (cos)" << std::endl;
        std::cout << "0. Keluar" << std::endl;
        std::cout << "Pilih menu: ";
        std::cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            std::cout << "Masukkan massa (kg): ";
            std::cin >> massa;
            std::cout << "Masukkan percepatan (m/s^2): ";
            std::cin >> percepatan;
            hitungGaya(massa, percepatan);
            std::cout << "====================================";
            break;
        case 2:
            std::cout << "Masukkan gaya (Newton): ";
            std::cin >> gaya;
            std::cout << "Masukkan percepatan (m/s^2): ";
            std::cin >> percepatan;
            hitungMassa(gaya, percepatan);
            std::cout << "====================================";
            break;
        case 3:
            std::cout << "Masukkan gaya (Newton): ";
            std::cin >> gaya;
            std::cout << "Masukkan massa (kg): ";
            std::cin >> massa;
            vhitungPercepatan(gaya, massa);
            std::cout << "====================================";
            break;
        case 4:
            std::cout << "Masukkan massa (kg): ";
            std::cin >> massa;
            std::cout << "Masukkan sudut (derajat): ";
            std::cin >> sudut;
            std::cout << "Masukkan gravitasi (m/s^2): ";
            std::cin >> gravitasi;
            hitungGayaBidangMiringSin(massa, sudut, gravitasi);
            std::cout << "====================================";
            break;
        case 5:
            std::cout << "Masukkan massa (kg): ";
            std::cin >> massa;
            std::cout << "Masukkan sudut (derajat): ";
            std::cin >> sudut;
            std::cout << "Masukkan gravitasi (m/s^2): ";
            std::cin >> gravitasi;
            hitungGayaBidangMiringCos(massa, sudut, gravitasi);
            std::cout << "====================================";
            break;
        case 0:
            std::cout << "Program selesai." << std::endl;
            break;
        default:
            std::cout << "Menu tidak valid." << std::endl;
            break;
        }

        std::cout << std::endl;
    } while (pilihan != 0);

    return;
}