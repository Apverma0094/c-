#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "Enter the number of students: ";
    std::cin >> n;

    std::vector<std::string> names(n);
    std::cout << "Enter the names of the students:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> names[i];
    }

    std::sort(names.begin(), names.end());

    std::cout << "\nSorted names of students:\n";
    for (const auto& name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}