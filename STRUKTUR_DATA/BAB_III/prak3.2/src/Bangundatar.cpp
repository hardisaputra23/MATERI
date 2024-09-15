#include <iostream>
#include "Bangundatar.h"

float Bangundatar::luasPersegi(float panjang){
    float luasPersegi = panjang*panjang;
    return luasPersegi;
};

float Bangundatar::luasPersegipanjang (float panjang, float lebar){
    float luasPersegiPanjang = panjang * lebar;
    return luasPersegiPanjang;
};

float Bangundatar::luasLingkaran(float diameter){
    const float PHI = 3.14f;
    float jariJari = diameter/2;
    float luasLingkaran = PHI * (jariJari*jariJari);
    return luasLingkaran;
};

void Bangundatar::tampilLuas (float luas){
    std::cout<< "Luas yang diperoleh adalah: " << luas << " cm2" <<
    std::endl;
};