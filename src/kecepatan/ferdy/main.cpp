//program membuat konvrensi jam ke detik
#include <iostream>

using namespace std;
double jam_detik(double jam) {
    jam =jam * 3600;

    return jam;   
}
int main (){
    double jam;
    double hasil;
    cout<<"masukan jam : ";cin>>jam;
    cout<<"hasil detik : "<<jam_detik(jam);
    return 0;
}
