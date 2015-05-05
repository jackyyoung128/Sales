#ifndef SALES_H
#define SALES_H

#include "Employee.h"

class Sales : public Employee
{
    public:
        Sales ( string, int );
        virtual ~Sales();

        void addSaleValue ( int sale )
        {
            this->sale += sale;
        }

        int calcSalary ()
        {
            int salary = preSalary*level + baseSalary;
            salary += sale/pushMoney;
            return salary;
        }

    protected:
        int sale;
        const int pushMoney = 100;
    private:
};

#endif // SALES_H
