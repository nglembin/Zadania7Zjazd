#include <iostream>

using namespace std;

unsigned long long silnia(int n) {
    if (n == 0 || n == 1) return 1;
    return n * silnia(n - 1);
}

int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    
    if (liczba < 0) {
        cout << "Silnia nie jest zdefiniowana dla liczb ujemnych." << endl;
        return 1;
    }
    
    unsigned long long wynik = silnia(liczba);
    cout << "Silnia " << liczba << " wynosi: " << wynik << endl;
    
    cout << "Wynik jest podzielny przez: ";
    bool found = false;
    
    if (wynik % 2 == 0) { cout << "2 "; found = true; }
    if (wynik % 3 == 0) { cout << "3 "; found = true; }
    if (wynik % 5 == 0) { cout << "5 "; found = true; }
    if (wynik % 11 == 0) { cout << "11 "; found = true; }
    
    if (!found) cout << "zadna z podanych liczb.";
    
    cout << endl;
    return 0;
}
