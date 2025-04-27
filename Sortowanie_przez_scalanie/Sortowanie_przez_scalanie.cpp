#include <iostream>
using namespace std;

void Merge(int* tab, int l, int m, int r) {
    int lSize = m - l + 1;
    int rSize = r - m;
    
    int* tabL = new int[lSize];
    int* tabR = new int[rSize];
    
    for (int x = 0; x < lSize; x++) {
        tabL[x] = tab[l + x];
    }
    
    for (int y = 0; y < rSize; y++) {
        tabR[y] = tab[m + 1 + y];
    }
    
    int indexL = 0;
    int indexR = 0;
    int currIndex = l;
    
    while (indexL < lSize && indexR < rSize) {
        if (tabL[indexL] <= tabR[indexR]) {
            tab[currIndex] = tabL[indexL];
            indexL++;
        } else {
            tab[currIndex] = tabR[indexR];
            indexR++;
        }
        currIndex++;
    }
    
    while (indexL < lSize) {
        tab[currIndex] = tabL[indexL];
        currIndex++;
        indexL++;
    }
    
    while (indexR < rSize) {
        tab[currIndex] = tabR[indexR];
        currIndex++;
        indexR++;
    }
    
    delete[] tabL;
    delete[] tabR;
}

void MergeSort(int* tab, int l, int r) {
    if (r > l) {
        int m = (l + r) / 2;
        MergeSort(tab, l, m);      // Sortuj lewą połowę
        MergeSort(tab, m + 1, r);  // Sortuj prawą połowę
        Merge(tab, l, m, r);      // Scal posortowane połowy
    }
}

int main() {
    int n;
    cout << "Wprowadz liczbe elementow do posortowania: ";
    cin >> n;
    
    int* tab = new int[n];
    
    cout << "\nTablica przed posortowaniem:\n";
    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 100;
        cout << tab[i] << " | ";
    }
    cout << "\n\nRozpoczecie sortowania\n";
    
    MergeSort(tab, 0, n - 1);
    
    cout << "\nTablica po sortowaniu:\n";
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " | ";
    }
    cout << "\n";
    
    delete[] tab;
    return 0;
}