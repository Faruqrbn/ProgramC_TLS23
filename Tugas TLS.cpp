#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char pilihanYn;
    do {
        cout << "         KALKULATOR VOLUME BANGUN RUANG   " << endl
             <<"Pilih bangun ruang yang ingin dihitung volumenya: " << endl
             << "1. Kubus" << endl
             << "2. Balok" << endl
             << "3. Prisma segi-n beraturan" << endl
             << "4. Limas segi-n beraturan" << endl
             << "5. Kerucut" << endl
             << "6. Bola" << endl
             << "7. Tabung" << endl
             << "Masukkan pilihan (1-7): ";
        int pilihan;
        cin >> pilihan;

        double volume;
        if(pilihan==1) {
            double sisi;
            cout << "Masukkan panjang sisi kubus: "; cin >> sisi;
            volume = pow(sisi , 3);
            cout << "Volume kubus tersebut adalah: " << volume << endl;
        } else if(pilihan==2) {
            double panjang, lebar, tinggi;
            cout << "Masukkan panjang balok: "; cin >> panjang;
            cout << "Masukkan lebar balok: "; cin >> lebar;
            cout << "Masukkan tinggi balok: "; cin >> tinggi;
            volume = panjang * lebar * tinggi;
            cout << "Volume balok tersebut adalah: " << volume << endl;
        } else if(pilihan==3) {
            double tinggi, r;
            int n;
            do {
                cout << "Masukkan jumlah sisi (n) dari alas prisma segi-n beraturan: "; cin >> n;
                if (n <= 2) {
                    cout << "Jumlah sisi alas prisma (n) harus lebih dari 2. Silakan masukkan nilai n yang valid." << endl;
                }
            } while (n <= 2);

            cout << "Masukkan tinggi prisma segi-n beraturan: "; cin >> tinggi;
            cout << "Masukkan jarak antara titik pusat alas prisma segi-n beraturan dan salah satu titik sudut alas prisma: "; cin >> r;
            double luasAlas = 0.5 * n * pow(r , 2) * sin(2 * M_PI / n);
            volume = luasAlas * tinggi;
            cout << "Volume prisma segi-n beraturan tersebut adalah: " << volume << endl;
        } else if(pilihan==4) {
            double tinggi, r;
            int n;
            do {
                cout << "Masukkan jumlah sisi (n) dari alas limas segi-n beraturan: "; cin >> n;
                if (n <= 2) {
                    cout << "Jumlah sisi alas limas (n) harus lebih dari 2. Silakan masukkan nilai n yang valid." << endl;
                }
            } while (n <= 2);
            cout << "Masukkan tinggi limas segi-n beraturan: "; cin >> tinggi;
            cout << "Masukkan jarak antara titik pusat alas limas segi-n beraturan dan salah satu titik sudut alas prisma: "; cin >> r;
            double luasAlas = 0.5 * n * pow(r , 2) * sin(2 * M_PI / n);
            volume = (luasAlas * tinggi) / 3;
            cout << "Volume limas segi-n beraturan tersebut adalah: " << volume << endl;
        } else if(pilihan==5) {
            double jariJari, tinggi;
            cout << "Masukkan panjang jari-jari kerucut: "; cin >> jariJari;
            cout << "Masukkan tinggi kerucut: "; cin >> tinggi;
            double luasAlas = M_PI * pow(jariJari , 2);
            volume = (luasAlas * tinggi) / 3;
            cout << "Volume kerucut tersebut adalah: " << volume << endl;
        } else if(pilihan==6) {
            double jariJari;
            cout << "Masukkan panjang jari-jari bola: "; cin >> jariJari;
            volume = (4 * M_PI * pow(jariJari , 3)) / 3;
            cout << "Volume bola tersebut adalah: " << volume << endl;
        } else if(pilihan==7) {
            double jariJari, tinggi;
            cout << "Masukkan jari-jari tabung: "; cin >> jariJari;
            cout << "Masukkan tinggi tabung: "; cin >> tinggi;
            double luasAlas = M_PI * pow(jariJari , 2);
            volume = luasAlas * tinggi;
            cout << "Volume tabung tersebut adalah: " << volume << endl;
        }else {
            cout << "\nPilihan tidak valid. Silakan masukkan pilihan yang valid.\n";
            return main();
        }

        cout << "Apakah anda ingin kembali ke menu utama? (y/n): ";
        cin >> pilihanYn;
    }
    while (pilihanYn == 'y' || pilihanYn == 'Y');

    cout << "Terima kasih telah menggunakan kalkulator ini.";

    return 0;
}


