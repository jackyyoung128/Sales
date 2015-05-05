#include <iostream>
#include "Employee.h"
#include "Sales.h"

using namespace std;

inline void out ( Employee name )
{
    cout << name.getName () << " : " << name.calcSalary () << endl;
}

inline void out ( Sales name )
{
    cout << name.getName () << " : " << name.calcSalary () << endl;
}

int main()
{
    Employee work1 ( "Work1", 2);
    Employee work2 ( "Work2", 3);

    out ( work1 );
    work2.setLevel ( 5 );
    out ( work2 );

    Sales sale ( "Sale", 3);
    sale.addSaleValue ( 10000 );
    out ( sale );

    return 0;
}
