#include <iostream>
 
using namespace std;
 
int main()
{
    int kode_barang;
    char kode_diskon;
    float harga, harga_total;

    cout << "Masukan kode barang  : ";    cin >> kode_barang;   
    cout << "Masukan kode diskon  : ";    cin >> kode_diskon;
    cout << "Masukan harga barang : ";    cin >> harga;
    cout << endl;
    cout << endl;
    cout << "Harga Total = Rp ";

    switch (kode_diskon) {
    case 'A':
        harga_total = harga - (harga * 0.1);
        cout << harga_total << endl;
        break;
    case 'B':
        harga_total = harga - (harga * 0.15);
        cout << harga_total << endl;
        break;
    case 'C':
        harga_total = harga - (harga * 0.2);
        cout << harga_total << endl;
        break;
    default:
        cout << "Maaf, kode tidak tersedia" << endl;
    }
    
    return 0;
}