#include <assert.h>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    assert(multiply(2, 3) == 6);
    assert(multiply(5, 4) == 20);
    return 0;
}
