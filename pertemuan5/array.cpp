#include<iostream>
#include <string>
#include <array>
using namespace std;

int main () {

    //array declaratiom & intitialization
    /* 2 cara mebuat array */

    // cara 1 : array kosong 
    // string nama [5];

    // nama[0] = "alya";
    // nama[1] = "paru;";
    // nama[2] = "syukron";
    // nama[3] = "aurick";
    // nama[4] = "dzakwan";

    //cara 2 : array yang langsung di isi
    // string nama[5] = ("alya","parul","syukron","aurick","dzakwan")
    // string nama[5] = ("alya","parul","syukron","aurick","dzakwan");

    //ascending element in array 
    // cout << nama[0] << endl;
    // cout << nama[1] << endl;
    // cout << nama[2] << endl;
    // cout << nama[3] << endl;
    // cout << nama[4] << endl;

    // menggunakan looping 
    // for (int i=0; i < 5; i++) {
    //     cout << nama[i] << endl;

    // }

    //descending element in array use looping 
    // for (int i = 4; i >= 0; i--) {
    //cout << nama [i] << endl;
    //}

    //multidemensial array
    // 1 3 5 
    // 2 4 6

    // int matrix[2][3] = {{1,3,5},{2,4,6}};
    //for (int i = 0; i < 2; i++){
       // for(int j = 0; j< 3; j++){
            //cout << matrix[i][j] << " ";
       // }
       // cout << endl;
   //  }

//    int matrix[4][6] = {
//         {1, 3, 5, 7,9, 10, 11},
//         {2, 4, 6, 8, 10, 12},
//         {13, 15, 17, 19, 21, 23},
//         {14, 16, 18, 20, 22, 24}
//     };
    
//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 6; j++) {
//             cout << matrix[i][j] << "\t ";
//         }
//         cout << endl;
//     }

    // string (array of characters)
    // string nama = "naufal";
    //cout << nama[0] << endl
    ////cout << nama[2] << endl

   // for(int i = 0; i < nama .lenght(); i++){
        //cout << nama[i] << endl;
   // }

   string s1 = "hello";
   string s2 = "world";

   /* 1.s1 = s2*/
//    s1 = s2;
//    cout << " s1 = " << s1 << endl;

/* 2. s1 = s1 + s2*/
//  s1 = " hello";
//  cout << "hasil : " << s1 + s2 << endl;

/* 3. s1.length()*/
// cout << s1.lenght() << endl;
// cout << (s1 + s2).Lenght() << endl;

/* 4. s1 substr(n,m)*/
// cout << s1.substr(2.4) << endl;
// cout << ( s1 + s2 ).substr(5,3) << endl;


// operator sizeof()
// int angka = 10;
// cout << size off(angka);

// int nilai[] = {10,20,30,40,50};
// cout << sizeof(nilai);

// string s ="indah";
// cout << sizeof(s);
// cout << s.Length(); 

// string nama_karyawan[] = {"alya","parul","syukron","aurick","dzakwan"};
// int n = sizeof(nama_karyawan) / sizeof(string);
// cout << n << endl;


// array library
// array <float,5> nilai = {87,2, 90, 100, 95,7, 78,5};
// cout << "nilai : ";
// for (int i = 0; i < nilai.size(); i++) {
//     cout << nilai[i] << " ";

// }
 
// for (float n : nilai) {
//     cout << n << " ";
// }
}