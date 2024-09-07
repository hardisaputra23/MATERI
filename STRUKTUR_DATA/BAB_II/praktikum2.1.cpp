#include <iostream>
using namespace std;

int pilihan;

float cariLuasalasbalok(float panjangBalok, float lebarBalok) {
    float luasAlasbalok = panjangBalok * lebarBalok;
    return luasAlasbalok;
}
    
float cariVolumebalok(float panjangBalok, float lebarBalok, float tinggiBalok){
    float luasAlasbalok = cariLuasalasbalok(panjangBalok, lebarBalok);
    float volumeBalok = luasAlasbalok * tinggiBalok;
    return volumeBalok;
}

float cariVolumekubus(float panjangSisi){
    float volumeKubus = panjangSisi*panjangSisi*panjangSisi;
    return volumeKubus;
}

int main() {
    cout <<"===Program Menghitung Volume Balok dan Kubus"<<endl;
    cout << "1. Cari volume Balok "<<endl;
    cout << "2. Cari volume Kubus "<<endl;
    cout << "Masukkan angka menu volume yang akan dihitung: ";
    cin >> pilihan;
    
    if (pilihan == 1){
        float panjangBalok;
        float lebarBalok;
        float tinggiBalok;
        cout << "Anda memilih menghitung volume balok!" << endl;
        cout << "Masukkan panjang balok (cm) : ";
        cin >> panjangBalok;
        cout << "Masukkan lebar balok (cm) : ";
        cin >> lebarBalok;
        cout << "Masukkan tinggi balok (cm) : ";
        cin >> tinggiBalok;
        float volumeBalok = cariVolumebalok (panjangBalok, lebarBalok,
        tinggiBalok);
        cout << "Volume balok adalah "<< volumeBalok << " cm3" << endl; 
    } else if (pilihan == 2){
        float panjangSisikubus;
        cout << "Anda memilih menghitung volume kubus!" << endl;
        cout << "Masukkan panjang sisi kubus (cm) : ";
        cin >> panjangSisikubus;
        float volumeKubus = cariVolumekubus (panjangSisikubus);
        cout << "Volume kubus adalah "<< volumeKubus << " cm3" <<endl;
    } else {
        cout << "Anda salah menginput pilihan!" << endl;
    }
    
return 0;
}