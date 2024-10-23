#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main() {
    vector<string> lines;
   string line;

    cout << "Enter text (type 'END' to stop):\n";
    while (true) {
       getline(cin, line);
        if (line == "END") break;
        lines.push_back(line);
    }

    cout << "\nLines starting from 'line':\n";
    for (const auto& l : lines) {
        if (l.find("line") != string::npos) {
            cout << l << endl;
        }
    }

    return 0;
}