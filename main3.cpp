#include <iostream>
#include <cstdlib>
#include <ctime>



using namespace std;
int randomadd(int num) {
    int r = rand() % 10 + 1;

  
    int newnum = num + r;
    cout << "rand added: " << r << endl;
  
    return newnum;
}
int main() {
    srand(time(0));
    int n;
    cout << "enter num: ";
    cin >> n;
    int orig = n;

    int changed = randomadd(n);
    cout << "original: " << orig << endl;



  
    cout << "changed: " << changed << endl;
    return 0;
}
