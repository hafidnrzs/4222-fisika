#include <iostream>
#include <cmath>

// Fungsi untuk menghitung percepatan roket berdasarkan gaya dorong dan massa roket
double hitungPercepatan(double gayaDorong, double massaRoket) {
    return gayaDorong / massaRoket;
}

void hukumNewton3() {
    double gayaDorong, massaRoket;
    double waktu, percepatan, kecepatan, jarak;

    // Input gaya dorong dan massa roket
    std::cout << "Masukkan gaya dorong roket (Newtons): ";
    std::cin >> gayaDorong;
    std::cout << "Masukkan massa roket (kilogram): ";
    std::cin >> massaRoket;

    // Input waktu simulasi
    std::cout << "Masukkan waktu simulasi (detik): ";
    std::cin >> waktu;

    percepatan = hitungPercepatan(gayaDorong, massaRoket);
    kecepatan = percepatan * waktu;
    jarak = 0.5 * percepatan * std::pow(waktu, 2);

    // Output hasil simulasi
    std::cout << "Hasil simulasi:\n";
    std::cout << "Percepatan roket: " << percepatan << " m/s^2\n";
    std::cout << "Kecepatan roket setelah " << waktu << " detik: " << kecepatan << " m/s\n";
    std::cout << "Jarak yang ditempuh setelah " << waktu << " detik: " << jarak << " m\n";

    return;
}
