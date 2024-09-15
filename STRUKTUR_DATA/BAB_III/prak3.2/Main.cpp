#include <iostream>
#include "src/Bangundatar.h"

using namespace std;

int pilihan;
float panjang;
float lebar;
float diameter;

void inputPersegi(){
    cout<<"Masukkan panjang sisi (cm): "<<endl;
    cin>>panjang;
};

void inputPersegipanjang(){
    cout<<"Masukkan panjang sisi (cm): "<<endl;
    cin>>panjang;
    cout<<"Masukkan lebar sisi (cm): "<<endl;
    cin>>lebar;
};

void inputLingkaran(){
    cout<<"Masukkan diameter (cm): "<<endl;
    cin>>diameter;
};

int main( int argc, char const *argv[]) {
    cout <<"=== PROGRAM MENGHITUNG LUAS BANGUN DATAR ==="<<endl;
    cout <<"Silahkan memilih bangun datar:"<<endl;
    cout <<"1. Persegi"<<endl;
    cout <<"2. Persegi Panjang"<<endl;
    cout <<"3. Lingkaran"<<endl;
    cout <<"Silahkan input angka pilihan:"<<endl;
    cin >> pilihan;

    if (pilihan == 1){
        cout <<"Anda memiluh persegi"<<endl;
        Bangundatar newPersegi;
        inputPersegi();
        newPersegi.tampilLuas(newPersegi.luasPersegi(panjang));
    } else if (pilihan==2){
        cout <<"Anda memilih persegi panjang"<<endl;
        Bangundatar newPersegipanjang;
        inputPersegipanjang();
        newPersegipanjang.tampilLuas(newPersegipanjang.luasPersegipanjang(panjang, lebar));
    } else if (pilihan == 3){
        cout <<"Anda memilih lingkaran"<<endl;
        Bangundatar newLingkaran;
        inputLingkaran();
        newLingkaran.tampilLuas(newLingkaran.luasLingkaran(diameter));
    } else {
        cout <<"Anda salah input!"<<endl;
    }

    return 0;
}