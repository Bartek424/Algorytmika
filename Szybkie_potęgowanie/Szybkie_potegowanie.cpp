#include <iostream>
using namespace std;
int mojfun(int x, int y);
int main() {
	int x,y,wynik;
  	cout << "Podaj baze :";
  	cin >> x;
  	cout << "Podaj wykładnik:";
  	cin >> y;
  	wynik = mojfun(x,y);
	cout << x << "^" << y << "=" << wynik << endl;
	return 0;
}
int mojfun(int x, int y){
	int wynik;
	wynik = 1;
	while (y > 0){
  		if(y % 2 == 1){
  			wynik = wynik * x;
		};
		x = x * x;
		y = y /2;
	}
	return wynik;
}