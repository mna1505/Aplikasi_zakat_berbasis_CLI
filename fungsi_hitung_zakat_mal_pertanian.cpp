#include <iostream>
#include <iomanip>
using namespace std;

//Fungsi zakat pertanian jika diari tanpa biaya
double hitungZakatPertanianJikaDiariTanpaBiaya (double totalHasilPanen){
    const int nisab = 653;
    if (totalHasilPanen >= nisab){
        return totalHasilPanen * 0.1;
    } else {
        cout << "Anda belum diwajibkan membayar Zakat Mal Pertanian, karna belum mencapai Nishab" << endl;
        return 0;
    }
}

//Fungsi zakat pertanian jika diari dengan biaya
double hitungZakatPertanianJikaDiariDenganBiaya (double totalHasilPanen){
    const int nisab = 653;
    if (totalHasilPanen >= nisab){
        return totalHasilPanen * 0.05;
    } else {
        cout << "Anda belum diwajibkan membayar Zakat Mal Pertanian, karna belum mencapai Nishab" << endl;
        return 0;
    }
}

int main (){
    int pilihan;
    double totalHasilPanen;
    cout << "=== Pilih Kategori Zakat Mal Pertanian ===" << endl;
    cout << "1. Jika diari tanpa biaya" << endl;
    cout << "2. Jika diari dengan biaya" << endl;
    cout << "Masukkan pilihan : ";
    cin >> pilihan;

    if (pilihan == 1){
        cout << "Masukkan total hasil panen (Kg) : ";
        cin >> totalHasilPanen;
        double zakatMal = hitungZakatPertanianJikaDiariTanpaBiaya(totalHasilPanen);
        cout << fixed << setprecision (2);
        cout << "Zakat mal yang harus anda keluarkan : " << zakatMal << " Kg" << endl;
    }

    if (pilihan == 2){
        cout << "Masukkan total hasil panen (Kg) : ";
        cin >> totalHasilPanen;
        double zakatMal = hitungZakatPertanianJikaDiariDenganBiaya(totalHasilPanen);
        cout << fixed << setprecision (2);
        cout << "Zakat mal yang harus anda keluarkan : " << zakatMal << " Kg" << endl;
    }
} 
