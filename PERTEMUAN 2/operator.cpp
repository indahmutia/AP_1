#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Bersihin layar (note: cuma  di Windows)
    system("CLS"); 

    // Ini pake assignment operator (=)
    a = 3;
    b = 5;

    // Operasi aritmatika dasar nih
    int tambah = a + b;     // Penjumlahan
    int kurang = a - b;     // Pengurangan
    int kali = a * b;       // Perkalian
    float bagi = (float)a / b; // Pembagian: 3 / 5, diconvert ke float biar gak dibuletin
    int modulo = a % b;     // Sisa bagi: 3 % 5 = 3


    // cout << "Hasil penjumlahan  : " << tambah << endl;
    // cout << "Hasil pengurangan  : " << kurang << endl;
    // cout << "Hasil perkalian    : " << kali << endl;
    // cout << "Hasil pembagian    : " << bagi << endl;
    // cout << "Hasil sisa bagi    : " << modulo << endl;
    

    
    // cout << "a == b : " << (a == b) << endl; // cek apakah a sama dengan b
    // cout << "a > b  : " << (a > b) << endl;  // cek apakah a lebih besar dari b
    // cout << "a >= b : " << (a >= b) << endl; // a lebih besar atau sama dengan b
    // cout << "a < b  : " << (a < b) << endl;  // a lebih kecil dari b
    // cout << "a <= b : " << (a <= b) << endl; // a lebih kecil atau sama dengan b
    // cout << "a != b : " << (a != b) << endl; // a tidak sama dengan b


    
    // Dipake pas bikin kondisi yang lebih dari satu
   
    // cout << (true && true) << endl;   // true
    // cout << (true && false) << endl;  // false
    // cout << (false && true) << endl;  // false
    // cout << (false && false) << endl; // false

    // cout << (true || true) << endl;   // true
    // cout << (true || false) << endl;  // true
    // cout << (false || true) << endl;  // true
    // cout << (false || false) << endl; // false

    // cout << !true << endl;  // false
    // cout << !false << endl; // true
    

    // Bitwise Operator 
    int x = 6, y = 4;

    /*
    cout << (5 & 7) << endl;  // AND antara bit 5 dan 7
    cout << (5 | 7) << endl;  // OR
    cout << (5 ^ 7) << endl;  // XOR
    cout << (~7) << endl;     // NOT (kebalikan bit 7)
    cout << (7 << 2) << endl; // geser bit ke kiri 2 kali
    cout << (7 >> 2) << endl; // geser bit ke kanan 2 kali
    */

    // Shorthand Operator (+=, -=, /=, dll)
    // ini versi singkatnya nulis operasi
    /*
    a += 7; // sama aja kayak a = a + 7
    cout << a << endl;

    a -= 7; // a = a - 7
    cout << a << endl;

    a /= 7; // a = a / 7
    cout << a << endl;
    */

    // Increment & Decrement
    // pre-increment: nilai naik dulu, baru dipake
    // cout << ++a << endl; // a ditambah dulu, baru ditampilkan
    // cout << ++b << endl;
    

    // post-increment: nilai dipake dulu, baru naik
    // cout << a++ << endl; // tampilkan dulu a, baru nanti naik
    // cout << a << endl;   // cek a lagi
    // cout << b++ << endl;
    // cout << b << endl;
    

    // pre-decrement dan post-decrement
    // cout << --a << endl; // kurangi dulu, baru ditampilkan
    // cout << a-- << endl; // tampilkan dulu, baru dikurang
    // cout << a << endl;

}