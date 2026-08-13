#include <iostream>
#include <random>

using std::cout;
using std::cin;
using std::endl;

unsigned int produce_number(void){
    std::random_device rd;
    std::mt19937 gen(rd()); 
    std::uniform_int_distribution<> dist(1, 100); 
    return dist(gen); 
}

int main(void){
    cout << "Угадайте число, которое меньше 100 и больше одного. У вас 10 попыток. " << endl;
    int entered = -1;
    int established = produce_number();
    int efforts = 0;
    while (efforts++ < 10){
        cin >> entered;
        if (entered == established){
            cout << "Вы угадали и победили!" << endl;
            break;
        }
        else if (entered < established)
            cout << "Введенное число МЕНЬШЕ загаданного" << endl;
        else if (entered > established)
            cout << "Введенное число БОЛЬШЕ загаданного" << endl;
    }

    if (efforts >= 10)
        cout << "Вы проиграли!" << endl;
    
    return 0;
}