/*
    Program Validasi
    Ket : Program untuk cek bilangan genap lebih dari dua
    By  : Yudha Rizqia Grafer
    Tgl : 05 Oktober 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int bilangan;

    //Algoritma
    cout << "Masukan Bilangan : ";
    cin >> bilangan;
    if ((bilangan %  2 == 0 ) && (bilangan > 2))
    {
        cout << bilangan << " adalah bilangan genap > 2 " << endl;
    }
    cout << "Cek Selesai";
    return 0;
}
