#include <iostream>
using namespace std;

float volume;
float cariVolume(float s) {
    float volume = s*s*s;
    cout << volume <<endl;
    return volume;
}
int main() {
    float panjangKubus1;
    float panjangKubus2;
    
    cout << "Masukkan panjang rusuk kubus pertama: ";
    cin >> panjangKubus1;
    
    cout << "Masukkan panjang rusuk kubus kedua: ";
    cin >> panjangKubus2;
    
    if (cariVolume(panjangKubus1)>cariVolume(panjangKubus2)){
        cout << "Kubus 1 lebih besar daripada kubus 2" << endl;
        } 
    else if (cariVolume(panjangKubus1)==cariVolume(panjangKubus2)){
        cout << "Kubus 1 sama besarnya dengan kubus 2" << endl;
        } 
    else {
        cout << "Kubus 1 lebih kecil daripada kubus 2" << endl;
        }
return 0;
}