// src/class.cpp
#include "class.h"

PersegiPanjang::PersegiPanjang(double p, double l) : panjang(p), lebar(l) {}

double PersegiPanjang::hitungLuas() {
    return panjang * lebar;
}

Segitiga::Segitiga(double a, double t) : alas(a), tinggi(t) {}

double Segitiga::hitungLuas() {
    return (alas * tinggi) / 2.0;
}

SetengahLingkaran::SetengahLingkaran(double d) : diameter(d) {}

double SetengahLingkaran::hitungLuas() {
    double radius = diameter / 2.0;
    return (M_PI * pow(radius, 2)) / 2.0;
}
