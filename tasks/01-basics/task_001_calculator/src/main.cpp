#include <iostream>
#include <cassert>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;

double divine_excep(float a, float b){
    if (b == 0) {
        cerr << "Divine Zero Error" << endl;
        return 0.0;
    }
    else 
        return a / b;
}

void runTests(){
    cout << "Запуск тестов для функции divine_excep() ... " << endl;
    assert(divine_excep(5, 2) == 2.5);
    assert(divine_excep(15, 5) == 3);
    assert(divine_excep(7, 0) == 0);
    assert(divine_excep(0, 2) == 0);
    cout << "Все тесты пройдены! " << endl;
}

int main(void){
    double x, y;
    runTests();
    cout << "Input two nubers with space for dividing: " << endl;
    cin >> x >> y;
    cout << "Result = " << divine_excep(x, y) << endl;
    return 0;
}
