#include <iostream>
using namespace std;
string pilihan;

int main() {
    double nilaiTukarUSD = 15402.0; // Nilai tukar 1 USD ke IDR (misalnya)
    double jumlahUSD, jumlahIDR;

    cout << "Masukkan jumlah uang dalam USD: $";
    cin >> jumlahUSD;

    jumlahIDR = jumlahUSD * nilaiTukarUSD;

    cout << "Jumlah uang dalam IDR: Rp" << jumlahIDR << endl;
	
    return 0;
}
