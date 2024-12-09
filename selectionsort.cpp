#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    srand(time(0));   //Seed random number generator
    
    int nilai[1200];
    int i, j, n, temp;

    cout << setfill('=') << setw(60) << '=' << endl;
    cout << setfill(' ');
    cout << "---------------------- SELECTION SORT ----------------------" << endl;
    cout << setfill('=') << setw(60) << '=' << endl;
    cout << setfill(' ');

    cout << "Masukkan jumlah angka yang ingin disorting:" << endl;
    cin >> n;
    cout << setfill('-') << setw(60) << '-' << endl;
    cout << setfill(' ');
    cout << "Angka akan digenerate random, sesuai jumlah yang kamu input" << endl;
    for (i = 0; i <= n - 1; i++) {
        nilai[i] = rand() % 1000;
    }
    for (i = 0; i <= n - 1; i++) {
        cout << nilai[i] << ", ";
    }
    cout << endl;

    cout << setfill('-') << setw(60) << '-' << endl;
    cout << setfill(' ');

    cout << "Angka setelah diselection sort:" << endl;
    for (i = 0; i <= n - 2; i++) {
        int ij;

        ij = i;
        for (j = n - 1; j >= i + 1; j--) {
            if (nilai[j] < nilai[ij]) {
                ij = j;
            }
        }
        if (ij != i) {
            temp = nilai[i];
            nilai[i] = nilai[ij];
            nilai[ij] = temp;
        }
    }
    for (i = 0; i <= n - 1; i++) {
        cout << nilai[i] << ", ";
    }
    return 0;
}
