#include <iostream>
using namespace std;

void penjumlahan(int &nilai1, int &nilai2, int penambah){
    nilai1 = nilai1 + penambah;
    nilai2 = nilai2 - penambah;
}

int main(){
    int nilaiPertama=5, nilaiKedua=5, nilaiPenambah=5;
    int *aliasNilai1;
    int *aliasNilai2;

    aliasNilai1 = &nilaiPertama;
    aliasNilai2 = &nilaiKedua;

    *aliasNilai1 = 10;
    *aliasNilai2 = 20;
    
    penjumlahan(nilaiPertama, nilaiKedua, nilaiPenambah);

    cout<<"Penjumlahan 1 = "<<nilaiPertama<<endl;
    cout<<"Penjumlahan 2 = "<<nilaiKedua<<endl;
    
    return 0;
}