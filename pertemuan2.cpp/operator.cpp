#include <iostream>
using namespace std;

int main() {
    int a, b;

    system("CLS"); // Membersihkan layar (hanya berfungsi di Windows)

    // Assignment Operator (=)
    a = 3;
    b = 5;

    // Arithmetical Operator (+, -, *, /, %)
    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    float bagi = (float)a / b; // Cast ke float agar hasil pembagian tidak dibulatkan
    int modulo = a % b;

    // Menampilkan hasil operasi aritmatika
    //cout << "Hasil penjumlahan  : " << tambah << endl;
    //cout << "Hasil pengurangan  : " << kurang << endl;
    //cout << "Hasil perkalian    : " << kali << endl;
    //cout << "Hasil pembagian    : " << bagi << endl;
    //cout << "Hasil sisa bagi    : " << modulo << endl;

    // Relational Operator
    //cout << "a == b : " << (a == b) << endl;
    //cout << "a > b  : " << (a > b) << endl;
    //cout << "a >= b : " << (a >= b) << endl;
    //cout << "a < b  : " << (a < b) << endl;
    //cout << "a <= b : " << (a <= b) << endl;
    //cout << "a != b : " << (a != b) << endl;
    
    // Logical Operator (&&, ||, !)
    //cout << (true && true) << endl;
    //cout << (true && false) << endl;
    //cout << (false && true) << endl;
    //cout << (false && false) << endl;

    //cout << (true || true) << endl;
    //cout << (true || false) << endl;
    //cout << (false || true) << endl;
    //cout << (false || false) << endl;

    //cout << !true << endl;
    //cout << !false << endl;

    // Bitwise Operator
    int x = 6, y = 4;

    //cout << (5 & 7) << endl;  // Bitwise AND
    //cout << (5 |7) << endl;  // Bitwise OR
    //cout << (5 ^ 7) << endl;  // Bitwise XOR
    //cout << (~7) << endl;     // Bitwise NOT
    //cout << (7<<2) << endl; // Left shift
    //cout << (7 >> 2) << endl; // Right shift

    // shorhand
    // a + = 7; // a = a + 7
    //cout << a << endl;
    // a - = 7; // a = a- 7
    //cout << a << endl;
     // a / = 7; // a = a / 7
    //cout << a << endl;
    
    // increment & decrement
    // pre increment
    //cout << a << endl;
    //cout << ++a << endl;
    
    //cout << b<< endl;
    //cout << ++b << endl;
    
    // post increment
   //cout << a << endl;
    //cout << ++a << endl;
    //cout << a << endl;
    
    
    //cout <<b<< endl;
    //cout << ++b << endl;
    //cout << b << endl;
    
    // pre decrement
    //cout << a << endl;
    //cout << ++a << endl;
    //cout << b << endl;
    //cout << --b << endl;
    
    // post decrementcout
    //cout<< a << endl;
    //cout << a-- << endl;
    //cout << a << endl;
    
    
    //cout << b << endl;
    //cout << b-- << endl;
    //cout << b << endl;
    
}