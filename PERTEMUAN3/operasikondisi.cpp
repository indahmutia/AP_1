#include <iostream>
using namespace std;

int main(){
    int nilai;

    system("CLS"); // buat ngebersihin layar console, tapi cuma jalan di Windows

    cout << "Masukkan niai : ";
    cin >> nilai; // input nilai dari user

    //  IF STATEMENT 
    // Kalau nilai <= 65, berarti nggak lulus
    // if (nilai <= 65) {
    //     cout << "Anda tidak lulus" << endl;
    // }

    // IF-ELSE STATEMENT 
    // Kalau nilai <= 65, nggak lulus, selain itu ya lulus
    // if (nilai <= 65) {
    //     cout << "Anda tidak lulus" << endl;
    // } else {
    //     cout << "Anda lulus";
    // }

    //  IF - ELSE IF 
    // Kalau nilainya 100, tampilkan pujian, 
    // kalau di bawah 65 nggak lulus,
    // if (nilai == 100) {
    //     cout << "Anda keceh!" << endl; 
    // } else if (nilai <= 65) {
    //     cout << "Anda tidak lulus" << endl;
    // } else {
    //     cout << "Anda lulus" << endl;
    // }

    //  NESTED IF 
    // If di dalam if
    // Cek dulu lulus/nggak, terus dalam kondisi lulus,
    // dicek lagi nilainya 100 atau nggak
    // if (nilai <= 65){
    //     cout << "Anda tidak lulus" << endl;
    // } else {
    //     if (nilai == 100) {
    //         cout << "Anda lulus dan anda keceh" << endl;
    //     } else {
    //         cout << "Anda lulus" << endl;
    //     }
    // }

    // SWITCH CASE
    // Ini buat contoh nilai diubah ke hari.
    // switch (nilai) {
    //     case 1: 
    //         cout << "Senin" << endl;
    //         break;
    //     case 2: 
    //         cout << "Selasa" << endl;
    //         break;
    //     case 3: 
    //         cout << "Rabu" << endl;
    //         break;
    //     case 4: 
    //         cout << "Kamis" << endl;
    //         break;
    //     case 5: 
    //         cout << "Jumat" << endl;
    //         break;
    //     case 6: 
    //         cout << "Sabtu" << endl;
    //         break;
    //     case 7: 
    //         cout << "Minggu" << endl;
    //         break;
    //     default: 
    //         cout << "Inputan tidak valid" << endl;
    //         break; 
    // }

    //  SWITCH RANGE 
    // Kasih predikat dari nilai
    // switch (nilai) {
    //     case 85 ... 100 : cout << "A" << endl; break; 
    //     case 80 ... 84 : cout << "B+" << endl; break;
    //     case 75 ... 79 : cout << "B" << endl; break;
    //     case 70 ... 74 : cout << "C+" << endl; break;
    //     case 65 ... 69 : cout << "C" << endl; break;
    //     case 60 ... 64 : cout << "D" << endl; break;
    //     default : cout << "E" << endl; break; 
    // }

    //  TERNARY OPERATOR 
    // Cek angka ganjil/genap pakai operator ternary
    // if (nilai % 2 == 0) {
    //     cout << "genapp nih" << endl;
    // } else {
    //     cout << "ganjil sih" << endl;
    // }

    // Kalo mau lebih simpel kek gini ya
    // string checkNum = (nilai % 2 == 0) ? "genap" : "ganjil";
    // cout << nilai << " tuh bilangan " << checkNum << " sih" << endl;
}