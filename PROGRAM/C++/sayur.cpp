#include <iostream>

int main() {
    int inputPengguna;
    bool sukaSayur;

    std::cout << "Apakah kamu suka makan sayur? (1 untuk ya, 0 untuk tidak): ";
    std::cin >> inputPengguna;

    sukaSayur = (inputPengguna == 1);

    if (sukaSayur) {
        std::cout << "Kamu suka makan sayur!" << std::endl;
    } else {
        std::cout << "Kamu tidak suka makan sayur." << std::endl;
    }

    return 0;
}