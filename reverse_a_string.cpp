/* Matyr2's Lexicon Challenges: Text - 001: Reverse a String */

#include <iostream>

int reverse_a_string() {
    std::string reverse;
    std::cin >> reverse;
    std::cin.ignore();
    
    std::reverse(reverse.begin(), reverse.end());
    std::cout << reverse << std::endl;
    
    return 0;
}