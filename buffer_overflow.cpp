#include <iostream>

using namespace std;

int main() {
    char buffer[10];
    cout << "Enter a string: ";
    cin.getline(buffer, 8);
    cout << "You entered: " << buffer << endl;
    return 0;
}
