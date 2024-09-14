#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung kalori yang terbakar
double hitungKaloriTerbakar(double berat, double durasi, double met) {
    // Rumus: Kalori terbakar = MET * berat (kg) * durasi (jam)
    return met * berat * durasi;
}

int main() {
    // Deklarasi variabel
    double berat, durasi, kaloriTerbakar;
    int pilihanAktivitas;
    double met; // MET: Metabolic Equivalent of Task

    // Daftar aktivitas dan nilai MET mereka
    cout << "Pilih aktivitas fisik:\n";
    cout << "1. Berlari (8 MET)\n";
    cout << "2. Bersepeda (6 MET)\n";
    cout << "3. Berenang (10 MET)\n";
    cout << "Masukkan pilihan Anda (1-3): ";
    cin >> pilihanAktivitas;

    // Meminta pengguna memasukkan berat badan dan durasi aktivitas
    cout << "Masukkan berat badan Anda (dalam kg): ";
    cin >> berat;
    cout << "Masukkan durasi aktivitas (dalam jam): ";
    cin >> durasi;

    // Menentukan nilai MET berdasarkan pilihan aktivitas
    switch (pilihanAktivitas) {
        case 1:
            met = 8.0;  // Berlari
            break;
        case 2:
            met = 6.0;  // Bersepeda
            break;
        case 3:
            met = 10.0; // Berenang
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            return 1;
    }

    // Menghitung kalori yang terbakar
    kaloriTerbakar = hitungKaloriTerbakar(berat, durasi, met);

    // Menampilkan hasil
    cout << "Kalori yang terbakar: " << kaloriTerbakar << " kalori" << endl;

    // Menunggu pengguna menekan enter sebelum keluar
    cout << "Tekan enter untuk keluar...";
    cin.ignore(); // Mengabaikan karakter newline yang tersisa dari input sebelumnya
    cin.get(); // Menunggu pengguna menekan enter

    return 0;
}
