#include <iostream>
#include <iomanip>

using namespace std;

int N, cont;

int main(void) {
  cout << "Qual a ordem da matriz? ";
  cin >> N;

  int mat[N][N];

  for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
          cout << "Elemento ["  <<i << "," << j << "]: ";
          cin >> mat[i][j];
    }
  }

    cout << "DIAGONAL PRINCIPAL: " <<endl;
      for (int i = 0; i < N; i++) {
          cout << mat[i][i] <<  " ";
      }

    cont = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (mat[i][j] < 0) {
              cont++;
            }
        }
    }
  
    cout <<endl << "QUANTIDADE DE NEGATIVOS: " << cont;
    
    
  
  return 0;
}