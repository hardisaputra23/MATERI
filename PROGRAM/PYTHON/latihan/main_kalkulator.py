from operasi import *
print("\n\t\t\tKALKULATOR\n1.Penjumlahan\n2.Pembagian\n3.Perkalian\n4.Pengurangan\n5.Perpangkatan\n6.Modulus (sisa bagi)\n7.Floor division(pembulatan Kebawah)\n0.Exit")
menu = input("\nMasukkan pilihan anda : ")
try:
    menu = int(menu)    
except ValueError:
    print("hanya mendukung angka")
    exit()
if menu == 0:
    print("\n\t\tkeluar dari program")
    exit()
nilaiPertama = input("nilai pertama : ")
nilaiKedua = input("nilai kedua : ")
try:
    nilaiPertama = int(nilaiPertama)
    nilaiKedua = int(nilaiKedua)
    if menu == 1:
        penjumlahan = penjumlahan(nilaiPertama, nilaiKedua)
        hasil = penjumlahan.hitungJumlah()
        print("hasil penjumlahan ",nilaiPertama, " + ",nilaiKedua ," = ",hasil)
    elif menu == 2:
        pembagian = pembagian(nilaiPertama, nilaiKedua)
        hasil = pembagian.hitungPembagian()
        print("hasil pembagian ",nilaiPertama, " / ",nilaiKedua ," = ", hasil)
    elif menu == 3:
        perkalian = perkalian(nilaiPertama, nilaiKedua)
        hasil = perkalian.hitungPerkalian()
        print("hasil perkalian ",nilaiPertama, " * ",nilaiKedua ," = ", hasil)
    elif menu == 4:
        pengurangan = pengurangan(nilaiPertama, nilaiKedua)
        hasil = pengurangan.hitungPengurangan()
        print("hasil pengurangan ",nilaiPertama, " - ",nilaiKedua ," = ", hasil)
    elif menu == 5:
        perpangkatan = perpangkatan(nilaiPertama, nilaiKedua)
        hasil = perpangkatan.hitungPerpangkatan()
        print("hasil perpangkatan ",nilaiPertama, " ** ",nilaiKedua ," = ", hasil)
    elif menu == 6:
        modulus = modulus(nilaiPertama, nilaiKedua)
        hasil = modulus.hitungModulus()
        print("hasil modulus ",nilaiPertama, " % ",nilaiKedua ," = ", hasil)
    elif menu == 7:
        floorDivision = floorDivision(nilaiPertama, nilaiKedua)
        hasil = floorDivision.hitungFloorDivision()
        print("hasil floor divison ",nilaiPertama, " // ",nilaiKedua ," = ", hasil)
    else:
        print("daftar menu tidak ada") 
except ValueError:
    print("input bukan bilangan angka")

