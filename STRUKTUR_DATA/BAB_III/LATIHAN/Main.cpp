#include <iostream>
#include <cmath>
#include "src/class.h"

using namespace std;

int main() {
    // Input dimensi
    double panjangPersegiPanjang = 6.0;
    double lebarPersegiPanjang = 2.0;
    double alasSegitiga = 5.0;
    double tinggiSegitiga = 4.0;
    double diameterSetengahLingkaran = alasSegitiga;

    // Membuat objek bangun datar
    PersegiPanjang pp(panjangPersegiPanjang, lebarPersegiPanjang);
    Segitiga sg(alasSegitiga, tinggiSegitiga);
    SetengahLingkaran sl(diameterSetengahLingkaran);

    // Menghitung luas total
    double luasTotal = pp.hitungLuas() + sg.hitungLuas() + sl.hitungLuas();

    // Menampilkan hasil
    cout << "Luas total dari area berwarna coklat adalah: " << luasTotal << " cm^2" << endl;

    return 0;
}
