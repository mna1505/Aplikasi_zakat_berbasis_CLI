#include <iostream>
#include <iomanip>
using namespace std;

//Fungsi zakat investasi
double hitungZakatInvestasi(double totalInvestasi, double nilaiInvestasi, double keuntungan, double hargaEmas){
    totalInvestasi = nilaiInvestasi + keuntungan;
    const double nisab = 85 * hargaEmas;
    if (totalInvestasi < nisab){
        cout << "Anda belum diwajibkan membayar Zakat Mal Investasi, karna belum mencapai Nishab" << endl;
        return 0;
    } else {
        return totalInvestasi * 0.025;
    }
}

int main (){
    double totalInvestasi, nilaiInvestasi, keuntungan, hargaEmas;

    cout << "=== Zakat Mal Investasi ===" << endl;
    cout << "Masukkan jumlah nilai investasi : ";
    cin >>  nilaiInvestasi;
    cout << "Masukkan jumlah nilai keuntungan : ";
    cin >> keuntungan;
    cout << "Masukkan harga emas sekarang dalam per gram : ";
    cin >> hargaEmas;
    cout << endl;
    double zakatMal = hitungZakatInvestasi(totalInvestasi, nilaiInvestasi, keuntungan, hargaEmas);
    cout << fixed << setprecision (2);
    cout << "Zakat mal yang harus anda keluarkan : Rp" << zakatMal << endl;
}
