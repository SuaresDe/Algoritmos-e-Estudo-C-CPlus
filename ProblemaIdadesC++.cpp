#include <iostream>
#include <math.h>

using namespace std;

int main() {

string nome1, nome2;
int idade1, idade2;
double media;
  
cout << "Dados da primeira pessoa:\n";
cout << "Nome: ";
  cin >> nome1;
cout << "Idade: ";
  cin >> idade1;

cout << "Dados da segunda pessoa:\n";
cout << "Nome: ";
  cin >> nome2;
cout << "Idade: ";
  cin >> idade2;

  media = (idade1 + idade2) / 2;

cout << "A idade média de " << nome1 << " e " << nome2 << " é " << media << ".";

}