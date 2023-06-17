#include "header.h"

// Fungsi utama
double cariKecepatan(double jarak, double waktu)
{
    double hasil = jarak / waktu;
    return hasil;
}

double cariJarak(double kecepatan, double waktu)
{
    double hasil = kecepatan * waktu;
    return hasil;
}

double cariWaktu(double jarak, double kecepatan)
{
    double waktu = jarak / kecepatan;
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

double konversiJamMenit(double jam)
{
    double menit = jam * 60;
    return menit;
}

double konversiJamDetik(double jam)
{
    jam = jam * 3600;
    return jam;   
}

double konversiMenitDetik(double menit)
{
    menit =menit * 60;
    return menit;   
}

double konversiMenitJam(double menit)
{
    double jam = menit / 60;
    return jam;
}

// Konversi jarak
double konversiKmKeM(double x)
{
    double hasil = x * 1000;
    return hasil;
}

double konversiMKeKm(double x)
{
    double hasil = x / 1000;
    return hasil;
}

// Konversi kecepatan
double konversiKmpjKeMps(double kph)
{
    return kph * 1000 / 3600;
}

double konversiMpsKeKmpj(double mps)
{
    double kmph = mps * 3.6;
    return kmph;
}