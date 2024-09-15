// src/class.h
#ifndef CLASS_H
#define CLASS_H

#include <cmath>
using namespace std;

class BangunDatar {
public:
    virtual double hitungLuas() = 0;
};

class PersegiPanjang : public BangunDatar {
private:
    double panjang, lebar;
public:
    PersegiPanjang(double p, double l);
    double hitungLuas() override;
};

class Segitiga : public BangunDatar {
private:
    double alas, tinggi;
public:
    Segitiga(double a, double t);
    double hitungLuas() override;
};

class SetengahLingkaran : public BangunDatar {
private:
    double diameter;
public:
    SetengahLingkaran(double d);
    double hitungLuas() override;
};

#endif // CLASS_H
