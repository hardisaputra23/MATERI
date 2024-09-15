#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
    public:
    string motto ="Saya mahasiswa Teknik Komputer. Saya Bangga!";
    typedef struct dataStatus {
        string nim;
        string nama;
        string prodi;
    }dtStatusmhs ;

    dtStatusmhs dtStatusmaba;
    
    void cetakData(string nim, string nama, string prodi, string motto){
        cout<<"=== Data Mahasiswa ==="<< nim << endl;
        cout<<"NIM Mahasiswa :"<< nim << endl;
        cout<<"Nama Mahasiswa :"<< nama << endl;
        cout<<"Prodi Mahasiswa :"<< prodi << endl;
        cout<<"Motto Mahasiswa :"<< motto << endl;
        };
    };

int main( int argc, char const *argv[]) {
    Mahasiswa tekomB;

    cout<<"Masukkan NIM Mahasiswa :"<<endl;
    getline (cin, tekomB.dtStatusmaba.nim);
    cout<<"Masukkan nama mahasiswa :"<<endl;
    getline (cin, tekomB.dtStatusmaba.nama);
    cout<<"Masukkan prodi mahasiswa :"<<endl;
    getline(cin, tekomB.dtStatusmaba.prodi);
    tekomB.cetakData ( tekomB.dtStatusmaba.nim, tekomB.dtStatusmaba.nama,
    tekomB.dtStatusmaba.prodi, tekomB.motto);

    return 0;
}