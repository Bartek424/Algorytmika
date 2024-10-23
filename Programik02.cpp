#include <iostream>
using namespace std;

int mojfun(int liczba);
int main() {
	int liczba;
	cout << "Podaj liczbe ktora chcesz znalesc :";
	cin >> liczba;

	cout << "Ideks tej liczby jest rowny " << 	mojfun(liczba);
	return 0;
}
int mojfun(int liczba){
	int liczby[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	int lewo = 0; int prawo = 14; int srodek = (lewo + prawo)/2;
	while(lewo <= prawo){
		if (liczby[srodek] == liczba){
			return srodek;
		}
		else if(liczby[srodek] > liczba){
			prawo = srodek - 1;
		}
		else {
			lewo = srodek + 1;
		}
		srodek = (lewo + prawo)/2;	
	}
	return -1;
}
