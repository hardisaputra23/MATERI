# kalkulator.py

class penjumlahan:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def hitungJumlah(self):
        return self.a + self.b

class pembagian:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def hitungPembagian(self):
        if self.b != 0:
            return self.a / self.b
        else:
            raise ValueError("Pembagian dengan nol tidak diperbolehkan")

class perkalian:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def hitungPerkalian(self):
        return self.a * self.b

class pengurangan:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def hitungPengurangan(self):
        return self.a - self.b
    
class perpangkatan:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def hitungPerpangkatan(self):
        return self.a ** self.b

class modulus:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def hitungModulus(self):
        return self.a % self.b
    
class floorDivision:
    def __init__(self, a, b):
        self.a = a
        self.b = b
    def  hitungFloorDivision(self):
        return self.a // self.b
