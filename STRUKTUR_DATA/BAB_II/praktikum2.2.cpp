#include <iostream>
using namespace std;

float cariLuassegitigask (float alas, float tinggi){
    float luas = (alas*tinggi)/2;
    return luas;
}

int main() {
    float alasSegitigask[3];
    float tinggiSegitigask[3];
    
    cout << "===Program menghitung luas 3 segitiga siku-siku==="<<endl;
    for (int i = 0; i<3; i++){
        cout<<"Masukkan panjang alas segitiga (cm) ke-"<< i+1 << endl;
        cin >> alasSegitigask[i];
    };
    
    for (int i = 0; i<3; i++){
        cout<<"Masukkan tinggi segitiga (cm) ke-"<< i+1 << endl;
        cin >> tinggiSegitigask[i];
    };
    
    for (int i = 0; i<3; i++){
        cout<<"Luas segitiga siku-siku ke-"<< i+1 << " adalah:" << endl;
        float segiTigasikusiku = cariLuassegitigask(alasSegitigask[i],
        tinggiSegitigask[i]);
        cout<<segiTigasikusiku<< " cm2" << endl;
    };

return 0;
}