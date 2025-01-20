# Aplikasi_zakat_beta
//Ini adalah aplikasi yang menentukan zakat kita, namun ini masih dalam tahap beta, dan masih berbasis CLI

#include <iostream>
using namespace std;

// Fungsi untuk menghitung zakat mal
double hitungZakatMal(double totalHarta){
    double hargaEmas;
    const double nisab = 85 * hargaEmas;
    if (totalHarta >= nisab) {
        return totalHarta * 0.025;
    }
    return 0;
}

// Fungsi untuk menghitung zakat fitrah
double hitungZakatFitrah(int jumlahOrang, double hargaBerasPerKg) {
    const double kebutuhanBeras = 2.5;
    return jumlahOrang * hargaBerasPerKg * kebutuhanBeras;
}

int main() {
    double totalHarta, hargaBerasPerKg, hargaEmas;
    int jumlahOrang, pilihan;

    cout << "=== Program Perhitungan Zakat ===" << endl;
    cout << "Pilih jenis zakat : " << endl;
    cout << "1. Zakat Mal" << endl;
    cout << "2. Zakat Fitrah" << endl;
    cout << "Input pilihan : ";
    cin >> pilihan;

    if (pilihan == 1){
        cout << "Masukkan total harta anda (Rp) : ";
        cin >> totalHarta;
        cout << "Masukkan harga emas sekarang dalam per gram : ";
        cin >> hargaEmas;
        double zakatMal = hitungZakatMal(totalHarta);
        if (zakatMal > 0) {
            cout << "Zakat mal yang harus anda keluarkan : Rp" << zakatMal << endl;
        } else {
            cout << "Anda tidak wajib membayar zakat karna harta anda di bawah nisab." << endl;
        }
    }

    if (pilihan == 2){
        cout << "Masukkan jumlah orang dalam keluarga anda : ";
        cin >> jumlahOrang;

        cout << "Masukkan harga beras perkilogram (Rp) : ";
        cin >> hargaBerasPerKg;

        double zakatFitrah = hitungZakatFitrah(jumlahOrang, hargaBerasPerKg);
        cout << "Zakat fitrah yang harus anda keluarkan: Rp" << zakatFitrah << endl;
    }

    cout << "Terimakasih telah menggunakan program perhitungan zakat, semoga menjadi amal jariyah ~~"; 
    return 0;
}
