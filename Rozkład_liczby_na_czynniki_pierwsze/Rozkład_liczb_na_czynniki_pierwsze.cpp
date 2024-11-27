#include <iostream>
using namespace std;
int mojfun(int n);
int main () {
	int n;
	cout << "Podaj liczbe:";
	cin >> n;
	mojfun(n);
	return 0;
}
int mojfun(int n){
	int k = 2;
	while (n > 1){
	while (n % k == 0) {
		cout << k << " ";
		n = n / k;
	}
	k++;
	}
}