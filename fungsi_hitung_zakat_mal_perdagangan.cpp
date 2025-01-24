#include <iostream>
#include <iomanip>
using namespace std;

//Fungsi zakat perdagangan
double hitungZakatMalPerdagangan(double totalPerdagangan, double modal, double keuntungan, double hutang, double hargaEmas){
    totalPerdagangan = modal + keuntungan + hutang;
    double nisab = 85 * hargaEmas;
    if (totalPerdagangan < nisab){
        cout << "Anda belum diwajibkan membayar Zakat Mal Perdagangan, karna belum mencapai Nishab" << endl;
        return 0;
    } else {
        return totalPerdagangan * 0.025;
    }
}

int main (){
    double modal, keuntungan, hutang, hargaEmas, totalPerdagangan;
    cout << "Masukkan jumlah modal (Rp) : ";
    cin >> modal;
    cout << "Masukkan jumlah keuntungan (Rp) : ";
    cin >> keuntungan;
    cout << "Masukkan jumlah hutang (Rp) : ";
    cin >>  hutang;
    cout << "Masukkan harga emas sekarang dalam per gram : ";
    cin >> hargaEmas;
    double zakatMal = hitungZakatMalPerdagangan(totalPerdagangan, modal, keuntungan, hutang, hargaEmas);
    cout << fixed << setprecision (2);
    cout << "Zakat mal yang harus anda keluarkan : Rp" << zakatMal << endl;
}
