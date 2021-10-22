// © Copyright 2021 Ryn Ellis


#include <iostream>

int main()
{
    //Initializing the string array to hold the first
    //10 elements of the periodic table in their letter form.
    std::string periodicTable[10] = { "H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne" };

    //Welcoming the user to the program
    std::cout << "Welcome to the 150th Anniversary of Mendeleev's periodic table of the elements!\n";
    std::cout << "Here we will display the first 10 periodic elements as their letter correspondants.\n\n";
    
    for (int i = 0; i < 10; i++)
    {
        std::cout << periodicTable[i] << "\n";
    }

    std::cout << "\nThank you for celebrating the 150th anniversary of the periodic table.\n\n";

   
}


