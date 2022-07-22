#pragma once
#include <iostream>
#include <vector>
#include <math.h>
#include <fstream>

static const std::vector<int> years_for_Premium = {1, 3, 5};
static const std::vector<int> interest_for_Premium = {0, 5, 8, 15};

class Teacher {
    std::string surname;
    float experience;
    float hourly_wage;
    float spent_hours;
public:
    Teacher();
    void Set();
    void Print();
    void PrintTotalWage();
    void PrintToFile(const std::string &);
};