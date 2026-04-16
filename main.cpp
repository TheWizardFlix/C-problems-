#include <iostream>
#include <string>
using namespace std;
void lower(string &word) {
    string temp = "";

    for (int i = 0; i < word.length(); i++) {
        char c = word[i];

        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
        temp += c;
    }
    word = temp;
}
int main() {

    string input;
    cout << "enter word: ";
    cin >> input;
    lower(input);
    cout << "result: " << input << endl;

    return 0;
}
