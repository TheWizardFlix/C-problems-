#include <iostream>
using namespace std;
void doubleit(int &num) {
    num = num * 2;
}
int main() {
    int x;
    cout << "enter num: " << endl;
    cin >> x;
    doubleit(x);
    cout << "now: " << x << endl;
    return 0;
}
