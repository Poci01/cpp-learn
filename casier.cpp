#include <iostream>
using namespace std;

int main() {

    int pilihan;
    int daftarharga[5] = {15000, 20000, 5000, 7000, 5000};
    string daftarbarang[5] = {"Kebab", "Pizza", "Es Teh", "Es Jeruk", "Es Cream"};
    char konfirmasi, konfirmasi2 = 'y';


    do {
        cout << "================================\n";
        cout << "Selamat datang di Toko Kami!\n";
        cout << "================================\n";
        cout << "Daftar Harga Barang\n";
        cout << "================================\n";
            for (int i = 0; i < 5; i++) {
                cout << i + 1 << ". " << daftarbarang[i] << " - Rp " << daftarharga[i] << "\n";
            }





            // ##############             lanjut dari sini kalo mau           ###################
        cout << "================================\n";
                cout << "Masukkan nomor barang yang ingin dibeli (1-5): ";
                cin >> pilihan;

        if (cin.fail() || pilihan < 1 || pilihan > 5) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Pilihan tidak valid.\n";
            continue;
        }
                cout << "Apakah ada lagi yang ingin dibeli? (y/n): ";
                cin >> konfirmasi;

        if (konfirmasi != 'y' && konfirmasi != 'Y' && konfirmasi != 'n' && konfirmasi != 'N') {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Konfirmasi tidak valid. Silakan coba lagi.\n";
            continue;
        }
        cout << "================================\n";
        cout << "Anda memilih: " << daftarbarang[pilihan - 1] << "\n";
        cout << "Harga: Rp " << daftarharga[pilihan - 1] << "\n";
        cout << "Lanjut untuk pembayaran? (y/n): \n";
        cin >> konfirmasi2;

            if (konfirmasi2 == 'y' || konfirmasi2 == 'Y') {
                cout << "Pembayaran sebesar Rp " << daftarharga[pilihan - 1] << " berhasil.\n";
            } else if (konfirmasi2 == 'n' || konfirmasi2 == 'N') {
                cout << "Transaksi dibatalkan.\n";
            } else {
                cout << "Konfirmasi tidak valid. Transaksi dibatalkan.\n";
            }

        cout << "Terimakasih telah berbelanja!\n";
        cout << "================================\n";
        cout << "Ingin membeli lagi? (y/n): ";
        cin >> konfirmasi;
    } while (konfirmasi == 'y' || konfirmasi == 'Y');

}