#include "teacher/teacher.h"

int main() {

    Teacher person;
    person.Set();
    person.Print();
    person.PrintTotalWage();
    person.PrintToFile("/home/kirill/Рабочий стол/data");
    return 0;
}