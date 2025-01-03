#include <iostream>
#include <vector>
#include <string>

// The Second Problem

int calculateFinalNumber(const std::vector<std::string>& operations) {
    int result = 0;

    for (const auto& op : operations) {
        if (op == "++") {
            result++;
        } else if (op == "--") {
            result--;
        }
    }

    return result;
}

int main() {

    std::vector<std::string> operations = {"++", "++", "--", "++"};

    int result = calculateFinalNumber(operations);
    std::cout << "Final number: " << result << std::endl;

    return 0;
}
