#include "header.h"

using namespace std;

int scor=0;
int once=0;

void guessWork(float answer){
	int attempts; string konfirm; float userX;
	attempts =1;
	cout << endl << "Mode pertanyaan dengan skor. Apakah anda ingin menebak hasil dari kalkulasi ini?" << endl << "Ketik ya apabila ingin melanjutkan mode menebak hasil. Ketik selain ya untuk melihat hasil langsung." << endl; cin >> konfirm;
	if (konfirm == "ya"){
		while(attempts <4){
			cout<< endl << "Masukkan jawaban: "; cin>>userX;
			if (userX == (float)answer){
				cout << endl << "Jawaban benar!" << endl;
				scor= scor +1;
				return;	
			} else {
				cout << endl << "Jawaban salah. Percobaan ke-" << attempts << endl;
			}
		attempts++;
		}
	} else
		return;
}

void kinesial(string ener, float rr[], int size){
	float EP; float EK;
	if (ener == "EK"){
		cout<<endl<<"massa objek yang diamati (kg): "; cin >> rr[0] ;
		cout<<"kecepatan awal yang diamati (m/s): "; cin >> rr[3] ;
		EK = 0.5 * rr[0] * pow(rr[3], 2);
		cout<<endl << EK << " Newton" << endl;
	}
	if (ener == "EP"){
		cout<<endl<<"massa objek yang diamati (kg): "; cin >> rr[0] ;
		cout<<"besar gravitasi yang diamati (m/s): "; cin >> rr[1] ;
		cout<<"titik ketinggian pertama yang diamati (meter): "; cin >> rr[2] ;
		EP = rr[0] * rr[1] * rr[2];
		cout<<endl << EP << " Newton" << endl;
	}
}

void memilih(string ono){

float m, v1, v2, h1, h2, gC;
float Arr[4];
int zise = sizeof(Arr)/sizeof(Arr[0]);

	if (ono == "EP" || ono == "EK"){

		for(int n = 0; n < zise; n++){
			Arr[0] = m;
			Arr[1] = gC;
			Arr[2] = h1;
			Arr[3] = v1;
		}
	kinesial(ono, Arr, zise);

	} else

	if (ono == "h1"){
cout<<endl<<"massa objek yang diamati (kg): "; cin >> m ; 
cout<<"kecepatan awal yang diamati (m/s): "; cin >> v1 ; 
cout<<"kecepatan akhir yang diamati (m/s): "; cin >> v2 ;
cout<<"titik ketinggian kedua yang diamati (meter): "; cin >> h2 ;
cout<<"besar gravitasi yang diamati (m/s): "; cin >> gC ;

cout << endl << "( " << m << " * " << gC << " * " << "h1" << " ) + ( 0.5 * " << m << " * " << v1 << "^2 ) = ( " << m << " * " << gC << " * " << h2 << " ) + ( 0.5 * " << m << " * " << v2 << "^2 )" << endl;

h1 = ( ( 0.5 * pow(v2, 2) ) / gC - ( 0.5 * pow(v1, 2) ) / gC ) + h2;

guessWork(h1);

cout << "hasil h1: " << h1 << " meter" << endl;

	} else

	if (ono == "h2"){
cout<<endl<<"massa objek yang diamati (kg): "; cin >> m ; 
cout<<"kecepatan awal yang diamati (m/s): "; cin >> v1 ; 
cout<<"kecepatan akhir yang diamati (m/s): "; cin >> v2 ;
cout<<"titik ketinggian pertama yang diamati (meter): "; cin >> h1 ;
cout<<"besar gravitasi yang diamati (m/s): "; cin >> gC ;

cout << endl << "( " << m << " * " << gC << " * " << h1 << " ) + ( 0.5 * " << m << " * " << v1 << "^2 ) = ( " << m << " * " << gC << " * " << "h2" << " ) + ( 0.5 * " << m << " * " << v2 << "^2 )" << endl ;

h2 = ( ( 0.5 * pow(v1, 2) / gC ) - ( 0.5 * pow(v2, 2) ) / gC ) + h1;

guessWork(h2);

cout << "hasil h2: " << h2 << " meter" << endl;
	} else

	if (ono == "v1"){
cout<<endl<<"massa objek yang diamati (kg): "; cin >> m ; 
cout<<"kecepatan akhir yang diamati (m/s): "; cin >> v2 ;
cout<<"titik ketinggian pertama yang diamati (meter): "; cin >> h1 ;
cout<<"titik ketinggian kedua yang diamati (meter): "; cin >> h2 ;
cout<<"besar gravitasi yang diamati (m/s): "; cin >> gC ;

cout << endl << "( " << m << " * " << gC << " * " << h1 << " ) + ( 0.5 * " << m << " * " << "v1" << "^2 ) = ( " << m << " * " << gC << " * " << h2 << " ) + ( 0.5 * " << m << " * " << v2 << "^2 )" << endl ;

float hasil = 2 * ( ( 0.5 * m * v2 * v2 ) - ( m * gC * h1 ) + ( m * gC * h2 ) ) / m;
v1 = sqrt(hasil);

guessWork(v1);

cout << "hasil v1: " << v1 << " m/s" << endl;
cout << "v1 dalam kilometer/jam = " << v1*(3.6) << " km/jam" << endl;
	} else

	if (ono == "v2"){
cout<<endl<<"massa objek yang diamati (kg): "; cin >> m ; 
cout<<"kecepatan awal yang diamati (m/s): "; cin >> v1 ; 
cout<<"titik ketinggian pertama yang diamati (meter): "; cin >> h1 ;
cout<<"titik ketinggian kedua yang diamati (meter): "; cin >> h2 ;
cout<<"besar gravitasi yang diamati (m/s): "; cin >> gC ;

cout << endl << "( " << m << " * " << gC << " * " << h1 << " ) + ( 0.5 * " << m << " * " << v1 << "^2 ) = ( " << m << " * " << gC << " * " << h2 << " ) + ( 0.5 * " << m << " * " << "v2" << "^2 )" << endl ;

float hasil = 2 * ( ( 0.5 * m * v1 * v1 ) - ( m * gC * h2 ) + ( m * gC * h1 ) ) / m;
v2 = sqrt(hasil);

guessWork(v2);

cout << "hasil v2: " << v2 << " m/s" << endl;
cout << "v2 dalam kilometer/jam = " << v2*(3.6) << " km/jam" << endl;

	string obejk;
	cout << endl << "Dengan kecepatan kedua sebesar " << v2 << " m/s || Maka akan dapat dipastikan seperti apa keadaan benda-benda ini saat menyentuh tanah: " << endl;
		if (v2 >= 0.1 && v2 < 5) {
		cout << "Wadah plastik => berakhir retak" << endl << "Gelas kaca => Pecah: serpihan-serpihan berukuran kecil & beberapa bentuk serpihan bubuk kaca" << endl << "Mangkuk keramik => Pecah: serpihan-serpihan berukuran sedang" << endl;
		} else
		if (v2 >= 5 && v2 < 10){
		cout << "Wadah plastik => retak struktural" << endl << "Gelas kaca => Pecah: serpihan-serpihan bubuk kaca & beberapa bentuk serpihan berukuran kecil" << endl << "Mangkuk keramik => Pecah: serpihan-serpihan berukuran kecil & serpihan-serpihan bubuk keramik" << endl;
		} else
		if (v2 >= 10){
		cout << "Wadah plastik => perubahan kasat mata pada titik bentur" << endl << "Gelas kaca => Pecah: serpihan-serpihan bubuk kaca keseluruhan" << endl << "Mangkuk keramik => Pecah: serpihan-serpihan bubuk keramik & beberapa serpihan berukuran kecil" << endl;
		} else if (v2 >= 0 && v2 < 0.1){
		cout << "Wadah plastik => kondisi tidak terubah benturan" << endl << "Gelas kaca => kondisi tidak terubah benturan" << endl << "Mangkuk keramik => kondisi tidak terubah benturan" << endl;
		}
	}

/* EP1 + EK1 = EP2 + EK2 ==> ( m . g . h1 ) + ( 0.5 . m . v1^2 ) = ( m . g . h2 ) + ( 0.5 . m . v2^2 ) */

}

void recurb(string ini){
if (ini == "tidak"){
cout<<endl<<"program selesai"<<endl;
return;
} else {
	string oncm;

	if (scor >0){
		cout << endl << "Terdapat skor mode tebak yang anda raih." << endl << "Skor anda: " << scor << endl;
	}

  cout << endl << "Selamat Datang//Wilkommen//Sugeng Rawuh" << endl;
  cout << endl << "Program berbasis bahasa komputasi C++ (dibaca: si plus plus) sederhana." << endl;
  cout << "Tema: Fisika" << endl;
  cout << "Subtema: Pengamatan Keadaan Energi Mekanikal" << endl;
  cout << endl << "catatan #1: perhitungan dalam keadaan vakum pada gravitasi senilai gravitasi bumi, tanpa mempertimbangkan hambatan angin." << endl << "catatan #2: kondisi pengamatan adalah satu momen objek bola genggam yang tertahan pada satu titik dengan sebuah ketinggian awal dari permukaan, dilepas tanpa memengaruhi stabilitas objek." << endl;

	if (once < 1){
  cout << endl << "Oleh:" << endl;
  cout << endl << "Ahmad Ridho Alghifari (A11.2022.14751)" << endl;
  cout << endl << "Bagas Aryo Priyatama (A11.2022.14756)" << endl;
  cout << endl << "Muhammad Naffa Rizky Fissabilli (A11.2022.14755)" << endl;
  cout << endl << "Muhammad Naufal Adani (A11.2022.14753)" << endl;
  cout << endl << "Muhammad Abil Wildan Syachviar (A11.2022.14784)" << endl;
  cout << endl << "Vicky Aji Setiawan (A11.2022.14785)" << endl;
  once++;
	}

	cout << endl << "Silahkan ketik nama-nama berikut ini untuk memilih variabel yang ingin dicari: " << endl << "v1: kecepatan di pilihan titik pengamatan keadaan ke-1" << endl << "v2: kecepatan di pilihan titik keadaan ke-2" << endl << "h1: ketinggian pada pilihan titik pengamatan keadaan ke-1" << endl << "h2: ketinggian pada pilihan titik pengamatan keadaan ke-2" << endl << "m: massa objek yang diperhatikan" << endl << endl; cout << "Tersedia pula mode menghitung Energi Kinetik atau Energi Potensial:" << endl << "Ketik 'EK' atau 'EP' untuk masuk mode Energi Kinetik atau Energi Potensial." <<endl;
	cin >> oncm ; cout << endl;

	if (oncm == "EK"){
	
cout<<endl<<"Kalkulasi Energi Kinetik"<< endl;

memilih(oncm);

	}
	if (oncm == "EP"){
	
cout<<endl<<"Kalkulasi Energi Potensial"<< endl;

memilih(oncm);

	}
	if (oncm == "h1"){

cout<<endl<<"h1 dicari"<<endl;

memilih(oncm);

	} else
	if (oncm == "h2"){

cout<<endl<<"h2 dicari"<<endl;

memilih(oncm);

	} else
	if (oncm == "v1"){

cout<<endl<<"v1 dicari"<<endl;

memilih(oncm);

	} else
	if (oncm == "v2"){

cout<<endl<<"v2 dicari"<<endl;

memilih(oncm);

	}
cout << endl << "apakah ingin mengulang program? ketik tidak apabila selesai: " << endl;
cin >> ini ; cout << endl << endl << endl;
recurb(ini);
return;
}
}