#include <iostream>
using namespace std;
 
int horner(int wsp[], int st, int x) {
    if (st == 0)
        return wsp[0];
    return x * horner(wsp, st - 1, x) + wsp[st];
}
 
int main() {
    int stopien;
    cout << "Podaj stopien wielomianu: ";
    cin >> stopien;
 
    int* wsp = new int[stopien + 1];
    for (int i = 0; i <= stopien; i++) {
        cout << "Podaj wspolczynnik stojacy przy potedze " << (stopien - i) << ": ";
        cin >> wsp[i];
    }
    int x;
    cout << "Podaj argument: ";
    cin >> x;
 
    int wynik = horner(wsp, stopien, x);
    cout << "W(" << x << ") = " << wynik << endl;
 
    delete[] wsp;
    return 0;
}