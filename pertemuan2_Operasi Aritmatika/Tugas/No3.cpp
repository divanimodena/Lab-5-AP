#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius, tinggi, sisi_alas, tinggi_limas, panjang_sisi, tinggi_prisma;

    // Input nilai yang diperlukan
    cout << "Masukkan jari-jari kerucut: ";
    cin >> radius;
    cout << "Masukkan tinggi kerucut: ";
    cin >> tinggi;
    cout << "Masukkan sisi alas limas segitiga: ";
    cin >> sisi_alas;
    cout << "Masukkan tinggi limas segitiga: ";
    cin >> tinggi_limas;
    cout << "Masukkan panjang sisi alas prisma: ";
    cin >> panjang_sisi;
    cout << "Masukkan tinggi prisma: ";
    cin >> tinggi_prisma;

    // Hitung luas permukaan dan volume
    double luas_permukaan_kerucut = M_PI * radius * (radius + sqrt(pow(tinggi, 2) + pow(radius, 2)));
    double volume_kerucut = (1.0 / 3.0) * M_PI * pow(radius, 2) * tinggi;
    double luas_permukaan_limas = (0.5 * sisi_alas * tinggi_limas) + (3 * 0.5 * sisi_alas * sqrt(pow(tinggi_limas, 2) - pow(sisi_alas / 2, 2)));
    double volume_limas = (1.0 / 3.0) * (1.0 / 2.0) * sisi_alas * tinggi_limas;
    double luas_permukaan_bola = 4 * M_PI * pow(radius, 2);
    double volume_bola = (4.0 / 3.0) * M_PI * pow(radius, 3);
    double luas_permukaan_prisma = 2 * ((sisi_alas * tinggi_prisma) + (panjang_sisi * tinggi_prisma) + (panjang_sisi * sisi_alas));
    double volume_prisma = sisi_alas * tinggi_prisma;

    // Menampilkan hasil
    cout << "Luas permukaan dan volume dari bangun ruang yang diberikan adalah: " << endl;
    cout << "Kerucut - Luas permukaan: " << luas_permukaan_kerucut << ", Volume: " << volume_kerucut << endl;
    cout << "Limas Segitiga - Luas permukaan: " << luas_permukaan_limas << ", Volume: " << volume_limas << endl;
    cout << "Bola - Luas permukaan: " << luas_permukaan_bola << ", Volume: " << volume_bola << endl;
    cout << "Prisma - Luas permukaan: " << luas_permukaan_prisma << ", Volume: " << volume_prisma << endl;

    return 0;
}