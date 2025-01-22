#include <iostream>
using namespace std;

// Fungsi untuk menghitung zakat mal emas
double hitungZakatMalEmas(double totalHarta, double hargaEmas){
    double nisab = 85 * hargaEmas;
    if (totalHarta < nisab){
        cout << "Anda belum diwajibkan membayar Zakat Mal Emas, karna belum mencapai Nishab" << endl;   
        return 0;
    } else {
        return totalHarta * 0.025;
    }
}

int main (){
  double totalHarta, hargaEmas;
  cout << "Masukkan total harta anda (Rp) : ";
  cin >> totalHarta;
  cout << "Masukkan harga emas sekarang dalam per gram : ";
  cin >> hargaEmas;
  double zakatMal = hitungZakatMalEmas(totalHarta, hargaEmas);
  cout << "Zakat mal yang harus anda keluarkan : Rp" << zakatMal << endl;
}
