//karena menggunakan cin dan cout
#include <iostream>

//untuk mempersingkat penulisan
using namespace std;

//fungsi utama
int main()
{
    //deklarasi variabel
    int jam, menit, sisa, detik;
    
    cout << "Masukkan Jumlah Detik  : ";

    //untuk memasukkan input detik
    cin >> detik;

    //untuk menyimpan nilai masing-masing variabel
    jam = detik / 3600;
    sisa = detik % 3600;
    menit = sisa / 60;
    sisa = sisa % 60;

    //untuk menampilkan output dari hasil konversi
    cout << "Hasil Konversi         : ";
    cout << jam << " jam ";
    cout << menit << " menit ";
    cout << sisa << " detik" << endl;
    
    return 0;
}