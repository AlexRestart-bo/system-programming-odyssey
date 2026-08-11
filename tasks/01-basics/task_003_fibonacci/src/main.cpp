#include <iostream>

using std::cout;

int iter_fibonacci(int n){
    if (n == 0 || n == 1) return n;
    int out = 0;
    int previous = 0;
    int current = 1;
    for (int i = 2; i <= n; i++){
        out = previous + current;
        previous = current;
        current = out;
    }
    return out;
}

int main(void){
    cout << iter_fibonacci(5) << std::endl;
    cout << iter_fibonacci(10) << std::endl;
    return 0;
}