#include <iostream>
#include <string>
#include <cstdio>

const int ASCII_VALUES = 256;

//Finds the maximum number of a letter in a string
//Prints out maximum
int main() {
    std::string s;
    std::cin >> s;
    int result;
    int charMap[ASCII_VALUES] = {0};
    for (auto i : s) {
        charMap[i]++;
    }
    int max = 0;
    for (int i=0; i<ASCII_VALUES; i++) {
        if (charMap[i] > max) {
            max = charMap[i];
            result = max;
        }
    }
    std::cout << result << std::endl;
    return 0;
}