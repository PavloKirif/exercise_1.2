#include "teacher.h"


int main() {

    Teacher person;
    person.Set();
    person.Print();
    person.PrintTotalWage();
    person.PrintToFile(); //пока  не работает, может не верный путь
    return 0;
}