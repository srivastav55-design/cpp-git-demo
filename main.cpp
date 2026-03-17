#include <iostream>
using namespace std;


int sum(int *a, int *b) {
    return *a + *b;
}

int main() {

    int a = 5, b = 12;
    int *ptr_a = &a;
    int *ptr_b = &b;
    int c =sum(&a, &b);
    cout << "sum is" << c << endl;
    return 0;
}
