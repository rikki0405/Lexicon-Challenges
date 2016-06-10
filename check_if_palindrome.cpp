/* Text 04: Check if Palindrome */

#include <iostream>

bool is_palindrome(const std::string &a, const std::string &b) {
    
    for (int i = 0; i < a.size(); i++) { if (a.at(i) != b.at(i)) return false; }
    return true;
}

int check_if_palindrome() {
    std::string s, s_, s_rev;
    std::getline(std::cin, s_);
    s = s_;
    
    /* remove whitespace */
    s_.erase(remove_if(s_.begin(), s_.end(), isspace), s_.end());
    s_rev = s_;
    std::reverse(s_rev.begin(), s_rev.end());
    
    std::cout << "\"" << s << "\" " << (is_palindrome(s_, s_rev) ? "is" : "is not") << " a palindrome" << std::endl;
    
    return 0;
}