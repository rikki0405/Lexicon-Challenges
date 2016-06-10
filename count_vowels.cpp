/* Text 03: Count Vowels */
/* Added Complexity: Count each vowel type */

#include <iostream>

int vowel_check(const char &c) {
    
    if (c == 'a' || c == 'A') return 0;
    if (c == 'e' || c == 'E') return 1;
    if (c == 'i' || c == 'I') return 2;
    if (c == 'o' || c == 'O') return 3;
    if (c == 'u' || c == 'U') return 4;
    
    return -1; // consonant
}

int count_vowels() {
    
    std::string s;
    std::cin >> s;
    std::cin.ignore();
    int vowel[5] = { 0, 0, 0, 0, 0 }, vowels = 0;
    
    for (int i = 0; i < s.size(); i++) {
        char c;
        c = s.at(i);
        switch (vowel_check(c)) {
            case -1:
                break;
            default:
                vowel[vowel_check(c)]++;
                vowels++;
                break;
        }
    }
    
    std::cout << "Total vowels: " << vowels << std::endl;
    std::cout << "Vowel Breakdown\nA: " << vowel[0] << "\nE: " << vowel[1] << std::endl;
    std::cout << "I: " << vowel[2] << "\nO: " << vowel[3] << "\nU: " << vowel[4] << std::endl;
    
    return 0;
}