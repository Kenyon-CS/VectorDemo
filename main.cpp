#include <iostream>
#include <vector>
#include <string>

void printVectorIntUsingBracket(const std::vector<int>& vec) {
    std::cout << "Using [] operator: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void printVectorIntUsingAuto(const std::vector<int>& vec) {
    std::cout << "Using auto: ";
    for (auto num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void printVectorStringUsingBracket(const std::vector<std::string>& vec) {
    std::cout << "Using [] operator: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void printVectorStringUsingAuto(const std::vector<std::string>& vec) {
    std::cout << "Using auto: ";
    for (const auto& str : vec) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Integer vector demonstration
    std::vector<int> intVec1 = {1, 2, 3, 4, 5};
    std::vector<int> intVec2 = {10, 20, 30};

    std::cout << "Initial integer vectors:\n";
    std::cout << "intVec1: ";
    printVectorIntUsingBracket(intVec1);
    std::cout << "intVec2: ";
    printVectorIntUsingBracket(intVec2);

    // Demonstrating use of the auto keyword
    std::cout << "\nIterating intVec1 using auto: ";
    printVectorIntUsingAuto(intVec1);

    // Size and empty
    std::cout << "\nintVec1 size: " << intVec1.size() << std::endl;
    std::cout << "intVec2 is empty: " << std::boolalpha << intVec2.empty() << std::endl;

    // Comparison operators (==, <)
    if (intVec1 == intVec2) {
        std::cout << "intVec1 is equal to intVec2.\n";
    } else {
        std::cout << "intVec1 is not equal to intVec2.\n";
    }

    if (intVec1 < intVec2) {
        std::cout << "intVec1 is less than intVec2.\n";
    } else {
        std::cout << "intVec1 is not less than intVec2.\n";
    }

    // Swap
    std::cout << "\nSwapping intVec1 and intVec2...\n";
    intVec1.swap(intVec2);

    std::cout << "After swap:\n";
    std::cout << "intVec1: ";
    printVectorIntUsingBracket(intVec1);
    std::cout << "intVec2: ";
    printVectorIntUsingBracket(intVec2);

    // String vector demonstration
    std::vector<std::string> stringVec1 = {"apple", "banana", "cherry"};
    std::vector<std::string> stringVec2 = {"x", "y", "z"};

    std::cout << "\nInitial string vectors:\n";
    std::cout << "stringVec1: ";
    printVectorStringUsingBracket(stringVec1);
    std::cout << "stringVec2: ";
    printVectorStringUsingBracket(stringVec2);

    // Demonstrating use of the auto keyword
    std::cout << "\nIterating stringVec1 using auto: ";
    printVectorStringUsingAuto(stringVec1);

    // Size and empty
    std::cout << "\nstringVec1 size: " << stringVec1.size() << std::endl;
    std::cout << "stringVec2 is empty: " << std::boolalpha << stringVec2.empty() << std::endl;

    // Comparison operators (==, <)
    if (stringVec1 == stringVec2) {
        std::cout << "stringVec1 is equal to stringVec2.\n";
    } else {
        std::cout << "stringVec1 is not equal to stringVec2.\n";
    }

    if (stringVec1 < stringVec2) {
        std::cout << "stringVec1 is less than stringVec2.\n";
    } else {
        std::cout << "stringVec1 is not less than stringVec2.\n";
    }

    // Swap
    std::cout << "\nSwapping stringVec1 and stringVec2...\n";
    stringVec1.swap(stringVec2);

    std::cout << "After swap:\n";
    std::cout << "stringVec1: ";
    printVectorStringUsingBracket(stringVec1);
    std::cout << "stringVec2: ";
    printVectorStringUsingBracket(stringVec2);

    return 0;
}
