#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // hiányzó "_"
    std::cout << "1-100 ertekek duplazasa"; // '' helyett "" és ; a végére
    for (int i = 0; i<N_ELEMENTS; i++) //hiányos ciklusmag
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"; //hiányzó ";"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // nincs lenullázva
    for (int i = 0; i < N_ELEMENTS; i++) //, helyett ;
    {
        atlag += b[i]; //hiányzó ";"
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    
    std::cout << "Uzenet egy idegentol!" << std::endl;

    return 0;
}




