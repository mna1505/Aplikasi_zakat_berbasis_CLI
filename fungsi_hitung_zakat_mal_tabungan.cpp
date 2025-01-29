#include <iostream>
#include <iomanip>
using namespace std;

//Fungsi zakat tabungan
double hitungZakatTabungan(double saldoAkhir, double hargaEmas){
    const double nisab = 85 * hargaEmas;
    if (saldoAkhir < nisab){
        cout << "Anda belum diwajibkan membayar Zakat Mal tabungan, karna belum mencapi Nishab" << endl;
        return 0;
    } else {
        return saldoAkhir * 0.025;
    }
}

int main (){
    double saldoAkhir, hargaEmas;

    cout << "=== Zakat Mal Tabungan ===" << endl;
    cout << "Masukkan saldo akhir tabungan : ";
    cin >> saldoAkhir;
    cout << "Masukkan harga emas sekarang dalam per gram : ";
    cin >> hargaEmas;
    cout << endl;
    double zakatMal = hitungZakatTabungan(saldoAkhir, hargaEmas);
    cout << fixed << setprecision (2);
    cout << "Zakat mal yang harus anda keluarkan : Rp" << zakatMal << endl;
            
}
