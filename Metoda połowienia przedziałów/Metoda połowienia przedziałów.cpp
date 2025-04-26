#include <iostream>
#include <iomanip>
using namespace std;

float f(float x){
      return x*(x*(x-3)+2)-6;
}
float polprze(float a,float b,float epsilon){
    if (f(a) == 0.0){
        return a;
    }
    if (f(b) == 0.0){
        return b;
    }
    while (b - a > epsilon){
        float srodek = (a + b)/2;
        if(f(srodek) == 0){
            return srodek;
        }
        if(f(a) * f(srodek) < 0){
            b = srodek;
        }
        else{
            a = srodek;
        }
        
    }
    return (a + b)/2;
}
int main(){
  float a = -10;
  float b = 10;
  float epsilon = 0.00001;
  cout << fixed << setprecision(5);
  cout << "Znalezione miejsce zerowe wynosi :" << polprze(a,b,epsilon);
  }