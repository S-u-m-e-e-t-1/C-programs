#include <iostream>
using namespace std;

inline int square(int num) {
    return num * num;
}

int main() {
    int num = 5;

    cout << "Square: " << square(num) << endl;

    return 0;
}
