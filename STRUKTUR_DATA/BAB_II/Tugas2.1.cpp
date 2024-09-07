#include <iostream>
#include <cmath>

// Fungsi rumus luas persegi
void hitungLuasPersegi(float s, float &luasPersegi) {
    luasPersegi = s * s;
}

// Fungsi rumus luas lingkaran
void hitungLuasLingkaran(float r, float &luasLingkaran) {
    luasLingkaran = M_PI * r * r;
}

// Fungsi untuk menghitung luas area biru
void hitungLuasBiru(float luasPersegi, float luasLingkaran, float &luasBiru) {
    luasBiru = luasPersegi - luasLingkaran;
}

int main() {
    float sisiPersegi;
    std::cout << "masukkan sisi persegi : "; //Untuk menginput luas sisi Persegi
    std::cin >> sisiPersegi;
    float jariJariLingkaran = sisiPersegi / 2;

    float luasPersegi, luasLingkaran, luasBiru;

    // Menghitung luas persegi
    hitungLuasPersegi(sisiPersegi, luasPersegi);

    // Menghitung luas lingkaran
    hitungLuasLingkaran(jariJariLingkaran, luasLingkaran);

    // Menghitung luas biru
    hitungLuasBiru(luasPersegi, luasLingkaran, luasBiru);

    // Menampilkan hasil
    std::cout << "Luas area berwarna biru adalah: " << luasBiru << " cm^2" << std::endl;

    return 0;
}