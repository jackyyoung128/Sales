#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
    public:
        Employee ( string, int );
        virtual ~Employee();

        string getName ()
        {
            return name;
        }

        int calcSalary ()
        {
            int salary = preSalary*level + baseSalary;
            return salary;
        }

        int setLevel ( int level )
        {
            this->level = level;
        }

    protected:
        string name;
        int level;
        const int baseSalary = 3000;
        const int preSalary = 1000;
    private:
};

#endif // EMPLOYEE_H
