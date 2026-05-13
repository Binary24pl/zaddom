#include <iostream>
#include <vector>

using namespace std;

int silna(const int n);

const string prim = "jest liczba pierwsza";
const string nprim = "nie jest liczba pierwsza";

bool is_primary(const int n) {
    if(n == 0 || n == 1) return false;

    if(n == 2) return true;

    for(int i = 2; i < n; i++) {
        if(n % i == 0) return false;
    }

    return true;
}

int main() {
    vector<string> result;

    result.push_back(nprim);
    result.push_back(prim);

    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "1. Podaj silnie a i b" << endl;
        cout << "2. Podaj czy a i b sa pierwszymy" << endl;
        cout << "0. Wyjscie" << endl;

        cin >> wyjscie;

        if(wyjscie == 1) {
            cout << silna(a) << " " << silna(b) << endl;
        }

        if(wyjscie == 2) {
            cout << a << " " << result[is_primary(a)] << endl;
            cout << b << " " << result[is_primary(b)] << endl;
        }
    } while(wyjscie != 0);
    return 0;
}

int silna(const int n) {
    if(n == 0 || n == 1) return 1;

    return n * silna(n - 1);
}