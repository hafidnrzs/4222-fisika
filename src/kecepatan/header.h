#include <iostream>
using namespace std;

// Fungsi prototype
// Fungsi utama
double cariKecepatan(double, double);
double cariJarak(double, double);
double cariWaktu(double, double);

// Fungsi konversi
// Konversi waktu
double konversiSekonKeJam(double);
double konversiSekonKeMenit(double);
double konversiJamMenit(double);
double konversiJamDetik(double);
double konversiMenitDetik(double);
double konversiMenitJam(double);

// Konversi jarak
double konversiKmKeM(double);
double konversiMKeKm(double);

// Konversi kecepatan
double konversiKmpjKeMps(double);
double konversiMpsKeKmpj(double);

// Menu
void menuKecepatan();
void menuJarak();
void menuWaktu();