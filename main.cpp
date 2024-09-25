#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //NELEMENTS
    std::cout << "1-100 ertekek duplazasa"<< std::endl; //"" helyett '', endl hianyzott
    for (int i = 1; i <= N_ELEMENTS; i++) // rossz for ciklus argumentum
    {
        b[i] = i * 2;
    }
    for (int i = 1; i<=N_ELEMENTS; i++) //i=0 helyett i=1, i helyett i<=N_ELEMENTS
    {
        std::cout << "Ertek:"<< b[i]<<std::endl; //ertek nem �rt ki semmit
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag=0; //inicializ�l�s
    for (int i = 1; i <= N_ELEMENTS; i++) //; helyett ,
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    delete[] b; //memoria felszabadit�s
    return 0;
}