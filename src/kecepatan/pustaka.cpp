#include "header.h"

// Fungsi utama
double cariKecepatan(double jarak, double waktu)
{
    double hasil = jarak / waktu;
    return hasil;
}

double carijarak(double kecepatan, double waktu)
{
    double hasil = kecepatan * waktu;
    return hasil;
}

double hitung_waktu(double km, double jam)
{
    double waktu = km / jam;
    return waktu;
}

// Fungsi konversi
// Konversi waktu
double konversiSekonKeJam (double x)
{
    double hasil = x / 3600;
    return hasil;
}

double konversiSekonKeMenit (double x)
{
    double hasil = x / 60;
    return hasil;
}

double konversi_jam_menit(double jam)
{
    double menit = jam * 60;
    return menit;
}

double jam_detik(double jam)
{
    jam = jam * 3600;
    return jam;   
}

double menit_detik(double menit)
{
    menit =menit * 60;
    return menit;   
}

double konversi_menit_jam(double menit)
{
    double jam = menit / 60;
    return jam;
}

// Konversi jarak
double konversi_km_m(double x)
{
    double hasil = x * 1000;
    return hasil;
}

double konversi_m_km(double x)
{
    double hasil = x / 1000;
    return hasil;
}

// Konversi kecepatan
double kphToMps(double kph)
{
    return kph * 1000 / 3600;
}

double konversiMpsKeKmph(double mps)
{
    double kmph = mps * 3.6;
    return kmph;
}