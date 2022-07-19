#include "teacher.h"

Teacher::Teacher() {
    this->surname = "";
    this->experience = 0;
    this->hourly_wage = 0;
    this->spent_hours = 0;
}

void Teacher::Set(){
    std::cout << "Take surname\n";
    std::cin >> this->surname;
    std::cout << "Take experience\n";
    std::cin >> this->experience;
    std::cout << "Take hourly wage\n";
    std::cin >> this->hourly_wage;
    std::cout << "Take number of academic hours spent\n";
    std::cin >> this->spent_hours;
}

void Teacher::Print() {
    std::cout << "Surname: " << this->surname << "\n";
    std::cout << "Experience: " << this->experience << "\n";
    std::cout << "Hourly wage: " << this->hourly_wage << "\n";
    std::cout << "Number of academic hours spent: " << this->spent_hours << "\n";
}

void Teacher::PrintTotalWage() {
    float wage = this->hourly_wage * this->spent_hours;
    std::cout << "Wage is: " << wage << "\n";

    float premium_coeff;
    int end = sizeof(years_for_Premium)/sizeof(int);
    if (experience < static_cast<float>(years_for_Premium[0])){
        premium_coeff = static_cast<float>(interest_for_Premium[0]);
    }
    else if (experience > static_cast<float>(years_for_Premium[end - 1])) {
        premium_coeff = static_cast<float>(interest_for_Premium[end]);
    }
    else {
        for (int i = 1; i < end; i++) {
            if (experience > static_cast<float>(years_for_Premium[i-1]) && experience <= static_cast<float>(years_for_Premium[i])){
                premium_coeff = static_cast<float>(interest_for_Premium[i]);
                break;
            }
        }
    }
    float premium = wage * premium_coeff / 100;
    std::cout << "Premium is: " << (premium*100)/100 << "\n";
}

void Teacher::PrintToFile() {
    std::ofstream out;
    out.open("/home/kirill/'Рабочий стол'/data");
    if (out.is_open()) {
        out << "Surname: " << this->surname << "\n" << "Experience: " << this->experience << "\n" << "Hourly wage: "
            << this->hourly_wage << "\n" << "Number of academic hours spent: " << this->spent_hours << "\n";
    }
    else {
        std::cout << "Fail out to file\n";
    }
    out.close();
}
