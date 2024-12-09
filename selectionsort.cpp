#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    srand(time(0)); 
    
    int num[1200];
    int i, j, n, temp;

    cout << setfill('=') << setw(60) << '=' << endl;
    cout << setfill(' ');
    cout << "---------------------- SELECTION SORT ----------------------" << endl;
    cout << setfill('=') << setw(60) << '=' << endl;
    cout << setfill(' ');

    cout << "Enter the number of elements u want to (max 1200):" << endl;
    cin >> n;
    cout << setfill('-') << setw(60) << '-' << endl;
    cout << setfill(' ');

    cout << "Random numbers will be generated, based on the amount u input" << endl;
    for (i = 0; i <= n - 1; i++) {
        num[i] = rand() % 1000;
    }
    for (i = 0; i <= n - 1; i++) {
        cout << num[i] << ", ";
    }
    cout << endl;

    cout << setfill('-') << setw(60) << '-' << endl;
    cout << setfill(' ');

    cout << "num after selection sort:" << endl;
    for (i = 0; i <= n - 2; i++) {
        int minIndex;

        minIndex = i;
        for (j = n - 1; j >= i + 1; j--) {
            if (num[j] < num[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            temp = num[i];
            num[i] = num[minIndex];
            num[minIndex] = temp;
        }
    }
    for (i = 0; i <= n - 1; i++) {
        cout << num[i] << ", ";
    }
    return 0;
}
