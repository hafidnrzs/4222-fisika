//program membuat konvrensi jam ke detik
#include <iostream>

using namespace std;
double menit_detik(double menit) {
    menit =menit * 60;

    return menit;   
}
int main (){
    double menit;
    double hasil;
    cout<<"masukan menit : ";cin>>menit;
    cout<<"hasil detik : "<<menit_detik(menit);
    return 0;
}
