#include <iostream>
#include <iomanip>
using namespace std;

// Fungsi untuk menghitung zakat mal perak
double hitungZakatMalPerak(double totalHarta, double hargaPerak){
    double nisab = 595 * hargaPerak;
    if (totalHarta < nisab){
        cout << "Anda belum diwajibkan membayar Zakat Mal Perak, karna belum mencapai Nishab" << endl;
        return 0;
    } else {
        return totalHarta * 0.025;
    }
}

int main (){
  double totalHarta, hargaPerak;
  cout << "Masukkan total harta anda (Rp) : ";
  cin >> totalHarta;
  cout << "Masukkan harga perak sekarang dalam per gram : ";
  cin >> hargaPerak;
  double zakatMal = hitungZakatMalPerak(totalHarta, hargaPerak);
  cout << fixed << setprecision (2);
  cout << "Zakat mal yang harus anda keluarkan : Rp" << zakatMal << endl;
}
