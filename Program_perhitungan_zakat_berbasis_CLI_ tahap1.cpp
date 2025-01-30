#include <iostream>
#include <iomanip>
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

if (jumlahSapi >= 30 && jumlahSapi <= 39){
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


// Fungsi untuk menghitung zakat fitrah
double hitungZakatFitrah(int jumlahOrang, double hargaBerasPerKg) {
    const double kebutuhanBeras = 2.5;
    return jumlahOrang * hargaBerasPerKg * kebutuhanBeras;
}

int main() {
    
    double totalHarta, hargaEmas, hargaPerak, totalPerdagangan, modal, keuntungan, hutang, totalHasilPanen, totalInvestasi, nilaiInvestasi, saldoAkhir, hargaBerasPerKg;
    int jumlahUnta, jumlahSapi, jumlahKambing, tambahan, jumlahOrang;

    int pilihan;
    cout << "=== Program Perhitungan Zakat Berbasis CLI ===" << endl;
    cout << "Pilih jenis zakat : " << endl;
    cout << "1. Zakat Mal" << endl;
    cout << "2. Zakat Fitrah" << endl;
    cout << "Input pilihan : ";
    cin >> pilihan;
    cout << endl;

    if (pilihan == 1){
        int pilihan_kedua;
        cout << "=== Pilih Jenis Zakat Mal ===" << endl;
        cout << "1. Zakat Emas" << endl;
        cout << "2. Zakat Perak" << endl;
        cout << "3. Zakat Perdagangan" << endl;
        cout << "4. Zakat Pertanian" << endl;
        cout << "5. Zakat Ternak" << endl;
        cout << "6. Zakat Investasi" << endl;
        cout << "7. Zakat Tabungan" << endl;
        cout << "Input pilihan : ";
        cin >> pilihan_kedua;
        cout << endl;

        if (pilihan_kedua == 1){
            cout << "=== Zakat Mal Emas ===" << endl;
            cout << "Masukkan total harta anda (Rp) : ";
            cin >> totalHarta;
            cout << "Masukkan harga emas sekarang dalam per gram : ";
            cin >> hargaEmas;
            double zakatMal = hitungZakatMalEmas(totalHarta, hargaEmas);
            cout << fixed << setprecision (2); 
            cout << "Zakat mal yang harus anda keluarkan : Rp" << zakatMal << endl;
        }
        
        if (pilihan_kedua == 2){
            cout << "=== Zakat Mal Perak ===" << endl;
            cout << "Masukkan total harta anda (Rp) : ";
            cin >> totalHarta;
            cout << "Masukkan harga perak sekarang dalam per gram : ";
            cin >> hargaPerak;
            double zakatMal = hitungZakatMalPerak (totalHarta, hargaPerak);
            cout << fixed << setprecision (2);
            cout << "Zakat mal yag harus anda keluarkan : Rp" << zakatMal << endl;
        }

        if (pilihan_kedua == 3){
            cout << "=== Zakat Mal Perdagangan ===" << endl;
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

        if (pilihan_kedua == 4){
            int pilihan_ketiga;
            cout << "=== Zakat Mal Pertanian ===" << endl;
            cout << "1. Jika diari tanpa biaya" << endl;
            cout << "2. Jika diari dengan biaya" << endl;
            cout << "Input pilihan : ";
            cin >> pilihan_ketiga;

            if (pilihan_ketiga == 1){
                cout << "=== Zakat Mal Pertanian (jika diari tanpa biaya) ===" << endl;
                cout << "Masukkan total hasil panen (Kg) : ";
                cin >> totalHasilPanen;
                double zakatMal = hitungZakatPertanianJikaDiariTanpaBiaya(totalHasilPanen);
                cout << fixed << setprecision (2);
                cout << "Zakat mal yang harus anda keluarkan : " << zakatMal << " Kg" << endl;
            }

            if (pilihan_ketiga){
                cout << "=== Zakat Mal Pertanian (jika diari dengan biaya) ===" << endl;
                cout << "Masukkan total hasil panen (Kg) : ";
                cin >> totalHasilPanen;
                double zakatMal = hitungZakatPertanianJikaDiariDenganBiaya(totalHasilPanen);
                cout << fixed << setprecision (2);
                cout << "Zakat mal yang harus anda keluarkan : " << zakatMal << " Kg" << endl;
            }
        }

        if (pilihan_kedua == 5){
            int pilihan_keempat;
            cout << "=== Zakat Mal Peternakan ===" << endl;
            cout << "1. Unta" << endl;
            cout << "2. Sapi" << endl;
            cout << "3. Kambing/Domba" << endl;
            cout << "Input pilihan : ";
            cin >> pilihan_keempat;

            if (pilihan == 1){
                cout << "== Zakat Mal Unta ==" << endl;
                cout << "Masukkan jumlah unta : ";
                cin >> jumlahUnta;
                hitungZakatUnta (jumlahUnta);
            }

            if (pilihan == 2){
                cout << "== Zakat Mal Sapi ==" << endl;
                cout << "Masukkan jumlah sapi : ";
                cin >> jumlahSapi;
                hitungZakatSapi (jumlahSapi);
            }

            if (pilihan == 3){
                cout << "== Zakat Mal Kambing ==" << endl;
                cout << "Masukkan jumlah kambing : ";
                cin >> jumlahKambing;
                int zakatMal = hitungZakatKambing (jumlahKambing, tambahan);
                 cout << "Jumlah kambing yang dikeluarkan : " << zakatMal << endl;
            }
        }

        if (pilihan_kedua == 6){
                cout << "=== Zakat Mal Investasi ===" << endl;
                cout << "Masukkan nilai investasi : ";
                cin >> nilaiInvestasi;
                cout << "Masukkan nilai keuntungan : ";
                cin >> keuntungan;
                cout << "Masukkan harga emas sekarang dalam per gram : ";
                cin >> hargaEmas;
                double zakatMal = hitungZakatInvestasi(totalInvestasi, nilaiInvestasi, keuntungan, hargaEmas);
                cout << fixed << setprecision (2);
                cout << "Zakat mal yang harus anda keluarkan : Rp" << zakatMal << endl;
        }

        if (pilihan_kedua == 7){
                cout << "=== Zakat Mal Tabungan ===" << endl;
                cout << "Masukkan saldo akhir tabungan : ";
                cin >> saldoAkhir;
                cout << "Masukkan harga emas sekarang dalal per gram : ";
                cin >> hargaEmas;
                double zakatMal = hitungZakatTabungan(saldoAkhir, hargaEmas);
                cout << fixed << setprecision (2);
                cout << "Zakat mal yang harus anda keluarkan : Rp" << zakatMal << endl;
        }

    }

    if (pilihan == 2){
        cout << "=== Zakat Fitrah ===" << endl;
        cout << "Masukkan jumlah orang dalam keluarga anda : ";
        cin >> jumlahOrang;

        cout << "Masukkan harga beras perkilogram (Rp) : ";
        cin >> hargaBerasPerKg;

        double zakatFitrah = hitungZakatFitrah(jumlahOrang, hargaBerasPerKg);
        cout << "Zakat fitrah yang harus anda keluarkan: Rp" << zakatFitrah << endl;
    }

    cout << endl;
    cout << "=== Terimakasih telah menggunakan Program Perhitungan Zakat Berbasis CLI, semoga menjadi amal jariyah ===" << endl;
return 0;
}
