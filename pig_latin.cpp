/* Text 02: Pig Latin */
/* banana -> anana-bay */

#include <iostream>

int pig_latin() {
    
    std::string input, latin;
    std::cin >> input;
    std::cin.ignore();
    
    /* pig latin */
    for (int i = 1; i < input.size(); i++) { latin += input.at(i); }
    latin = latin + "-" + input.at(0) + "ay";
    
    std::cout << latin << std::endl;
    
    return 0;
}