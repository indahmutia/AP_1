#include <iostream>
using namespace std;

int main(){
    int nilai;

    system("CLS");

    cout << "Masukkan niai : ";
    cin >> nilai;

    // if statement
    // if (nilai <= 65) {
    //     cout << "Anda tidak lulus" << endl;
    // }

    // if-else statement
    // if (nilai <= 65) {
    //     cout << "Anda tidak lulus" << endl;
    // } else {
    //     cout << "Anda lulus";
    // }

    // if else if statement
    // if (nilai == 100) {
    //     cout << "Anda keceh!" << endl; 
    // } else if (nilai <= 65) {
    //     cout << "Anda tidak lulus" << endl;
    // } else {
    //     cout << "Anda lulus" << endl;
    // }

    // Nested if
//     if (nilai <= 65){
//         cout << "Anda tidak lulus" << endl;
//     } else {
//         if (nilai == 100) {
//             cout << "Anda lulus dan anda keceh" << endl;
//         } else {
//             cout << "Anda lulus" << endl;
//         }
//     }
// }

// switch case
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

    //switch range
//     switch (nilai) {
//         case 85 ... 100 : cout << "A" << endl; break; 
//         case 80 ... 84 : cout << "B+" << endl; break;
//         case 75 ... 79 : cout << "B" << endl; break;
//         case 70 ... 74 : cout << "C+" << endl; break;
//         case 65 ... 69 : cout << "C" << endl; break;
//         case 60 ... 64 : cout << "D" << endl; break;
//         default : cout << "E" << endl; break; 
//     }
// }

// ternary operator
// if (nilai % 2 == 0) {
//     cout << "genapp nih" << endl;
// } else {
//     cout << "ganjil sih" << endl;
// }

string checkNum = (nilai % 2 == 0) ? "genap" ;"ganjil";
cout << nilai << "tuh bilangan " << checkNum << "sih" << endl;
}