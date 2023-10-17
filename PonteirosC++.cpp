#include <iostream>

using namespace std;

int main()
{
    int array[5]={10,20,30,40,50};
    int* ponteiro;
    ponteiro = array;
    std::cout<<"ponteiro: "<<ponteiro<<endl; //ou <<"/n"
     std::cout<<"ponteiro: "<<*(ponteiro+1); 
}