#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;
    
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    for (int i = 0; i < kalimat.length(); i++) {
        
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || 
            kalimat[i] == 'o' || kalimat[i] == 'u') {
            kalimat[i] = toupper(kalimat[i]); 
       }
    }

    cout << "Kalimat setelah diubah: " << kalimat << endl;
    return 0;
}