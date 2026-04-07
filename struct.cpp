#include <iostream>
using namespace std;

struct orang 
{
    string nama;
    string alamat;
    int umur;
};

int main()
{
    //deklarasi variabel struct 
    orang mhs;
    //mengisi data 
    cout << "Isikan data nama : ";
    cin >> mhs.nama;
    cout << "Isikan data alamat : ";
    cin >> mhs.alamat;
    cout << "Isikan data umur : ";
    cin >> mhs.umur;
    cout << endl;

    cout << "data tampil" << endl;
    cout << "nama : " << mhs.nama << endl;
    cout << "alamat : " << mhs.alamat << endl;
    cout << "umur : " << mhs.umur << endl;

}


                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            