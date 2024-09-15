#include <iostream>
#include "Bangundatar.h"

using namespace std;

void Bangundatar::luasPersegi(float panjang) {
    this->panjang = panjang;
    float luas = this->panjang* this->panjang;
    cout <<"Luas persegi adalah: "<< luas << endl;
};