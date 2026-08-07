#include <iostream>

using namespace std;

int main(void){
    int foundation = 0, table_size = 0;
    cout << "Введите начало таблицы и размер через пробел (таблица квадратная, размер задается одним числом)" << endl;
    cin >> foundation >> table_size;
    if (table_size < 0){
        cout << "The size of the table is incorrect" << endl;
        return 0;
    }
    for (int i = foundation; i < foundation + table_size; i++) // Печать первой строки, где расположены множители 
        cout << "\t" << i;
    cout << endl;
    for (int i = foundation; i < foundation + table_size; i++){
        cout << i << "\t";
        for (int j = foundation; j < foundation + table_size; j++){
            cout << i * j << "\t";
        }
        cout << endl;
    }
}