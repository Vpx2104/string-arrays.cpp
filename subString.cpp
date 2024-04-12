#include <iostream>
#include <string>

int main() {
    std::string str = "HELLO WORLD!";
    std::string substr = str.substr(7, 5);
    printf("substring: %s\n", substr.c_str());

    return 0;
}