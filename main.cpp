#include <iostream>

int main()
{
    int var = 8;
    void* ptr = &var;

    // Liniile noi care trimit textul în terminal:
    std::cout << "Valoarea lui var: " << var << std::endl;
    std::cout << "Adresa din memoria RAM: " << ptr << std::endl;
    std::cin.get();

   
}
