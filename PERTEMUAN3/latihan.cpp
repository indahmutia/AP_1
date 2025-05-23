#include <iostream> 
using namespace std;

int main() {
    system("cls"); // Membersihkan layar untuk windows

    int nilai; // Variabel untuk menyimpan input nilai 

    // Minta user untuk memasukkan nilai
    cout << "Masukkan nilai: ";
    cin >> nilai; 
    // Untuk ngecek apakah nilai habis dibagi 10
    if (nilai % 10 == 0) {
        cout << "Nilai anda kelipatan 10" << endl;
    } 
    // Kalau tidak kelipatan 10, cek apakah kelipatan 5
    else if (nilai % 5 == 0) {
        cout << "Nilai anda kelipatan 5" << endl;
    } 
    // Kalau tidak kelipatan 10 dan juga bukan kelipatan 5
    else {
        cout << "Nilai anda bukan kelipatan 5 atau 10" << endl;
    }
}