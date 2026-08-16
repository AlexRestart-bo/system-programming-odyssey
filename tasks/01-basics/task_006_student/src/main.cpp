#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct Student
{
    std::string name;
    int age;
    int evaluations[3];
};

float calc_average(Student student){
    return ((float)student.evaluations[0] + (float)student.evaluations[1] 
        + (float)student.evaluations[1]) / 3.0;
}

int main (void) {
    Student student = {"Alan", 17, {4, 3, 3}};
    cout << student.name << " : age - " << student.age 
        << ", average evaluation - " << calc_average(student) << endl;
}