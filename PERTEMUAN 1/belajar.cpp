#include <iostream> // header untuk c++
#include <conio.h> // header untuk getche () dan getch
using namespace std;

int main() {
    string nama;
    char kom,jeniskelamin;
    int nim;
    float ip;

    /*ini untuk komentar 
    beberapa baris */

    cout << 'hello world '<< endl;

    cout << "masukkan nama :";
   // getline  (cin >> nama);// agar karakter spasi terbaca
    /* masukkan nama */
    cout << "masukkan nama : ";
    cin >> nama ;
    cout << " masukkan kom :";
    cin >> kom ;
    cout << "masukkan nim : ";
    cin >> nim ;
    cout << " masukkan ip :";
    cin >> ip;

    cout << "masukkan jeis kelamin (L/P)";
    jeniskelamin = getche();// agar karakter langsung tampil,jadi ga perlu tekan enter
    /* untuk output*/
    cout << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    putchar(jeniskelamin);// untuk menampilkan jenis kelamin
}