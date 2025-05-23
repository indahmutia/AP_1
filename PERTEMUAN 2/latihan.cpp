#include <iostream>     // header bahasa c++
#define PI 3.14159      // bikin konstanta PI

using namespace std;

int main() 
{
    float r, volume, luas_permukaan; // deklarasi variabel

    cout << "Masukkan jari-jari bola: "; // nampilin teks ke user
    cin >> r;                            // user masukin nilai jari-jari, disimpan ke variabel r

    // rumus volume bola: 4/3 * π * r^3
    volume = (4.0 / 3.0) * PI * r * r * r;

    // rumus luas permukaan bola: 4 * π * r^2
    luas_permukaan = 4 * PI * r * r;

    // nampilin hasil perhitungan volume dan luas permukaan ke layar
    cout << "Volume bola = " << volume << endl;
    cout << "Luas permukaan bola = " << luas_permukaan << endl;

    return 0; 
}