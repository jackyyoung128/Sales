#include "Sales.h"

Sales::Sales ( string name, int level ) : Employee ( name, level )
{
    sale = 0;
}

Sales::~Sales()
{
    //dtor
}
