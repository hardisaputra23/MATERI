#include <iostream>
using namespace std;

void tampilData (string nama, int hargaBarang){
    cout <<"Nama barang : "<< nama <<endl;
    cout <<"Harga barang : "<< hargaBarang << " Rupiah" <<endl;
}
int main() {
    string nama;
    int harga;
    nama = "Yamaha F1ZR";
    harga = 12000000;
    tampilData(nama, harga);
    return 0;
}