#include <iostream>
using namespace std;

//fungsi hitung zakat mal unta
void hitungZakatUnta (int jumlahUnta){

    if (jumlahUnta >= 5 && jumlahUnta <= 9 ){
        cout << "Zakat yang dikeluarkan adalah 1 ekor kambing" << endl;
    } else if (jumlahUnta >= 10 && jumlahUnta <= 14){
        cout << "Zakat yang dikeluarkan adalah 2 ekor kambing" << endl;
    } else if (jumlahUnta >= 15 && jumlahUnta <= 19){
        cout << "Zakat yang dikeluarkan adalah 3 ekor kambing" << endl;
    } else if (jumlahUnta >= 20 && jumlahUnta <= 24){
        cout << "Zakat yang dikeluarkan adalah 4 ekor kambing" << endl;
    } else if (jumlahUnta >= 25 && jumlahUnta <= 35){
        cout << "Zakat yang dikeluarkan adalah 1 ekor anak unta betina berusia lebih dari 1 tahun" << endl;
    } else if (jumlahUnta >= 36 && jumlahUnta <= 45){
        cout << "Zakat yang dikeluarkan adalah 1 ekor anak unta berusia lebih dari 2 tahun" << endl;
    } else if (jumlahUnta >= 46 && jumlahUnta <= 60){
        cout << "Zakat yang dikeluarkan adalah 1 ekor anak unta betina berusia lebih dari 3 tahun" << endl;
    } else if (jumlahUnta >= 61 && jumlahUnta <= 75){
        cout << "Zakat yang dikeluarkan 1 ekor anak unta betina berusia 4 tahun" << endl;
    } else if (jumlahUnta >= 76 && jumlahUnta <= 90){
        cout << "Zakat yang dikeluakan 2 ekor anak unta betina berusia 2 tahun" << endl;
    } else if (jumlahUnta >= 91 && jumlahUnta <= 120){
        cout << "Zakat yang dikeluarkan 2 ekor anak unta betina berusia lebih dari 3 tahun" << endl;
    } else if (jumlahUnta > 120) {
        int tambahanTabi = (jumlahUnta - 120) / 40;
        int tambahanMusinnah = (jumlahUnta - 120) / 50;
        cout << "Jumlah zakat yang dikeluarkan : " << endl << " - 2 ekor anak unta betina berusia lebih dari 3 tahun + " << tambahanMusinnah << " ekor unta musinnah tambahan" << endl << " - atau 1 ekor unta tabi + " << tambahanTabi << " ekor tabi tambahan." << endl;
    } else {
        cout << "Anda belum diwajibkan membayar Zakat Ternak, karna belum mencapai Nishab" << endl;
    }
}

//fungsi hitung zakat mal sapi
void hitungZakatSapi (int jumlahSapi){

if (jumlahSapi >= 30 && jumlahSapi <= 39) {
        cout << "Jumlah sapi yang dikeluarkan : 1 ekor sapi tabi (umur 1 tahun masuk ke 2 tahun)." << endl;
    } else if (jumlahSapi >= 40 && jumlahSapi <= 59) {
        cout << "Jumlah sapi yang dikeluarkan : 1 ekor sapi musinnah (umur 2 tahun masuk ke 3 tahun)." << endl;
    } else if (jumlahSapi >= 60 && jumlahSapi <= 69) {
        cout << "Jumlah sapi yang dikeluarkan : 2 ekor sapi tabi (umur 1 tahun masuk ke 2 tahun)." << endl;
    } else if (jumlahSapi >= 70 && jumlahSapi <= 79) {
        cout << "Jumlah sapi yang dikeluarkan : 1 ekor sapi musinnah dan 1 ekor sapi tabi." << endl;
    } else if (jumlahSapi >= 80 && jumlahSapi <= 89) {
        cout << "Jumlah sapi yang dikeluarkan : 2 ekor sapi musinnah." << endl;
    } else if (jumlahSapi >= 90 && jumlahSapi <= 99) {
        cout << "Jumlah sapi yang dikeluarkan : 3 ekor sapi tabi." << endl;
    } else if (jumlahSapi >= 100 && jumlahSapi <= 109) {
        cout << "Jumlah sapi yang dikeluarkan : 2 ekor sapi musinnah." << endl;
    } else if (jumlahSapi >= 110 && jumlahSapi <= 119) {
        cout << "Jumlah sapi yang dikeluarkan : : 2 ekor sapi musinnah dan 1 ekor sapi tabi." << endl;
    } else if (jumlahSapi >= 120 && jumlahSapi <= 129) {
        cout << "Jumlah sapi yang dikeluarkan : 3 ekor sapi musinnah atau 4 ekor sapi tabi." << endl;
    } else if (jumlahSapi > 129) {
        int tambahanTabi = (jumlahSapi - 120) / 30;
        int tambahanMusinnah = (jumlahSapi - 120) / 40;
        cout << "Jumlah sapi yang dikeluarkan : " <<  endl << " - 3 ekor sapi musinnah + " << tambahanMusinnah << " ekor musinnah tambahan." << endl << " - atau 4 ekor sapi tabi + " << tambahanTabi << " ekor tabi tambahan." << endl;
    } else {
        cout << "Anda belum diwajibkan membayar Zakat Ternak, karna belum mencapai Nishab" << endl;
    }
}

//fungsi hitung zakat mal kambing 
int hitungZakatKambing (int jumlahKambing, int tambahan){

    if (jumlahKambing >= 40 && jumlahKambing <= 120) {
        return 1;
    } else if (jumlahKambing >= 121 && jumlahKambing <= 200) {
        return 2;
    } else if (jumlahKambing >= 201 && jumlahKambing <= 300) {
        return 3;
    } else if (jumlahKambing >= 301 && jumlahKambing <= 400) {
        return 4;
    } else if (jumlahKambing >= 401 && jumlahKambing <= 500) {
        return 5;
    } else if (jumlahKambing > 500) {
        int tambahan = (jumlahKambing - 500) / 100;
        return 5 + tambahan;
    } else {
        cout << "Anda belum diwajibkan membayar Zakat Ternak, karna belum mencapai Nishab" << endl;
        return 0;
    }
}

int main (){
    int jumlahUnta, JumlahSapi, jumlahKambing, tambahan;

    int pilihan;
    cout << "=== Pilih Kategori Zakat Mal Peternakan ===" << endl;
    cout << "1. Unta" << endl;
    cout << "2. Sapi" << endl;
    cout << "3. Kambing" << endl;
    cout << "Masukkan pilihan : ";
    cin >> pilihan;
    cout << endl;

    if (pilihan == 1){
        cout << "== Zakat Mal Unta ==" << endl;
        cout << "Masukkan jumlah unta : ";
        cin >> jumlahUnta;
        hitungZakatUnta (jumlahUnta);
    }

    if (pilihan == 2){
        cout << "== Zakat Mal Sapi ==" << endl;
        cout << "Masukkan jumlah sapi : ";
        cin >> JumlahSapi;
        hitungZakatSapi (JumlahSapi);
    }

    if (pilihan == 3){
        cout << "== Zakat Mal Kambing ==" << endl;
        cout << "Masukkan jumlah kambing : ";
        cin >> jumlahKambing;
        int zakatMal = hitungZakatKambing (jumlahKambing, tambahan);
        cout << "Jumlah kambing yang dikeluarkan : " << zakatMal << endl;
    }

    cout << endl;

}
