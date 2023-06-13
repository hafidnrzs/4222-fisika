#include <iostream>
using namespace std;

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

double carijarak(double kecepatan, double waktu){

   double hasil = kecepatan * waktu;
    return hasil;
}

int main()
{
    // Test konversi km -> m
    cout << konversi_km_m(10) << "m" << endl; // output = 10000m
    cout << konversi_km_m(0.35) << "m" << endl; // output = 350m

    // Test konversi m -> km
    cout << konversi_m_km(350) << "km" << endl; // output = 0.35km
    cout << konversi_m_km(10000) << "km" << endl; // output = 10km
    cout << carijarak(10, 1000) << endl;
    return 0;
}