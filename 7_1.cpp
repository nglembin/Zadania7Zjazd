#include <iostream>
#include <string>

using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
};

int main() {
    const int LICZBA_OSOB = 3;
    Osoba osoby[LICZBA_OSOB];

    for (int i = 0; i < LICZBA_OSOB; i++) {
        cout << "Podaj imie osoby nr " << i + 1 << ": ";
        cin >> osoby[i].imie;
        cout << "Podaj nazwisko osoby nr " << i + 1 << ": ";
        cin >> osoby[i].nazwisko;
    }

    cout << "\nImiona i nazwiska trzech osób:" << endl;
    for (int i = 0; i < LICZBA_OSOB; i++) {
        cout << "Osoba nr " << i + 1 << ": " << osoby[i].imie << " " << osoby[i].nazwisko << endl;
    }

    return 0;
}
