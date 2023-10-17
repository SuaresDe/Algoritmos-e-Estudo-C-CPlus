#include <iostream>

using namespace std;

int x,y,z;

int main() {
  
  cout << "Primeiro valor: ";
  cin >>   x;

    cout << "Segundo valor: ";
    cin >>   y;

      cout << "Terceiro valor: ";
      cin >>   z;
    

if (x < y && x < z) {
  cout << x;
  }
    else if (y < z){
    cout << y;  
    } 
      else 
      cout << z;
  
  return 0;
}
  
