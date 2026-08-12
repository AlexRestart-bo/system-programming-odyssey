#include <iostream>
#include <cassert>
#include <chrono>

using std::cout;
using std::cin;
using std::endl;

void testsFibonacci(void);

int iter_fibonacci(int n){
    if (n < 0) return 0;
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

int recurs_fibonacci(int n){
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return recurs_fibonacci(n-1) + recurs_fibonacci(n - 2);
}

int main(void){
    cout << recurs_fibonacci(5) << std::endl;
    cout << recurs_fibonacci(10) << std::endl;
    testsFibonacci();
    int num;
    cout << "Enter a natural number" << std::endl;
    std::cin >> num;
    cout << "Fibonacci_" << num << " = " << iter_fibonacci(num) << std::endl; 
    
    return 0;
}

void testsFibonacci(void){
    cout << "Запуск тестов функций recurs_fibonacci() и iter_fibonacci()" << std::endl;
    for (int i = -3; i < 40; i++){
        assert(recurs_fibonacci(i) == iter_fibonacci(i));
    }
    /*
    // подсчет времени выполнения функции recurs_fibonacci(40)
    auto start_point = std::chrono::steady_clock::now();
    recurs_fibonacci(40);
    auto end_point = std::chrono::steady_clock::now();
    auto duration_recurs = std::chrono::duration_cast<std::chrono::microseconds>(start_point - end_point);
    long long recurs_time = duration_recurs.count();

    // подсчет времени выполнения функции iter_fibonacci(40)
    start_point = std::chrono::steady_clock::now();
    iter_fibonacci(40);
    end_point = std::chrono::steady_clock::now();
    auto duration_iter = std::chrono::duration_cast<std::chrono::microseconds>(start_point - end_point);
    long long iter_time = duration_iter.count();

    cout << "recurs_time = " << recurs_time << " iter_time = " << iter_time << endl;
    cout << "40е число Фибоначи рекурсивным способом подсчитывается в " << recurs_time / iter_time << "раз дольше" << endl;
    */
    cout << "Все тесты пройдены!" << std::endl;
}