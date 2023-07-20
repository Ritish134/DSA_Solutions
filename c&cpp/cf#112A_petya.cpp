#include <iostream>
#include <string>

int main() {
    std::string str1, str2;
    std::cin >> str1 >> str2;

    // Convert both strings to lowercase
    for (int i = 0; i < str1.length(); i++) {
        str1[i] = tolower(str1[i]);
    }
    for (int i = 0; i < str2.length(); i++) {
        str2[i] = tolower(str2[i]);
    }

    // Compare the two strings
    int result = str1.compare(str2);

    if (result < 0) {
        std::cout << "-1\n";
    } else if (result > 0) {
        std::cout << "1\n";
    } else {
        std::cout << "0\n";
    }

    return 0;
}
