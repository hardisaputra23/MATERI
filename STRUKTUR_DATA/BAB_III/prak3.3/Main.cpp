#include <iostream>
#include "src/Bangundatar.h"

using namespace std;

class Subbangundatar : public Bangundatar{
    public:
    float lebar;
    void luasPersegipanjang (float panjang, float lebar){
        this->panjang = panjang;
        this->lebar = lebar;
        float luas = this->panjang * this->lebar;
        cout <<"Luas persegi panjang adalah: "<< luas << " cm2" << endl;
    }
};

int main( int argc, char const *argv[]) {
    int pilihan;
    cout <<"=== PROGRAM MENGHITUNG LUAS BANGUN DATAR ==="<<endl;
    cout <<"Silahkan memilih bangun datar:"<<endl;
    cout <<"1. Persegi"<<endl;
    cout <<"2. Persegi Panjang"<<endl;
    cout <<"Silahkan input angka pilihan:"<<endl;
    cin >> pilihan;

    if (pilihan == 1){
        float panjang;
        cout <<"Anda memilih persegi"<<endl;
        Subbangundatar newPersegi;
        cout<<"Masukkan panjang persegi (cm): "<<endl;
        cin >> panjang;
        newPersegi.luasPersegi(panjang);
    } else if (pilihan==2){
        float panjang;
        float lebar;
        cout <<"Anda memilih persegi panjang"<<endl;
        Subbangundatar newPersegipanjang;
        cout<<"Masukkan panjang persegi (cm): "<<endl;
        cin >> panjang;
        cout<<"Masukkan lebar persegi (cm): "<<endl;
        cin >> lebar;
        newPersegipanjang.luasPersegipanjang(panjang, lebar);
    } else {
        cout <<"Anda salah input!"<<endl;
    }

return 0;
}