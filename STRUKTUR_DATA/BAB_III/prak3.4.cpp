#include <iostream>
using namespace std;

class Datadiri {
    public:
    string nama = "Ahmad Albar";
    int usia = 26;
    enum Gender { Male,Female };
    Gender gender = Male;

    void tampil(){
        cout<<this->nama<<endl;
        cout<<this->usia<<endl;
        if (this->gender==0){
            cout<<"Pria"<<endl;
        } else if (this->gender==1){
            cout<<"Wanita"<<endl;
        } else {
            cout<<"Salah input!"<<endl;
        }
    }
};

int main( int argc, char const *argv[]) {
    Datadiri datadiri;
    datadiri.tampil();

    return 0;
}