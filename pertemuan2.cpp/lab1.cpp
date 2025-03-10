#include <iostream>
#define PI 3.14159

using namespace std;

int main() 
{
    float r, volume, luas_permukaan;

    cout << "Masukkan jari-jari bola: ";
    cin >> r;

    volume = (4.0 / 3.0) * PI * r * r * r;
    luas_permukaan = 4 * PI * r * r;

    cout << "Volume bola = " << volume << endl;
    cout << "Luas permukaan bola = " << luas_permukaan << endl;

    return 0;
}