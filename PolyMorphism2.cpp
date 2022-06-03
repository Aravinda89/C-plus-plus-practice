/*We can change the code as shown below, 
*but now we have to maintain two
*branches of the same code, one for 
*each type of employee. 
*/

#include "main.hpp"

int main()
{
    const string status = "salary";
    string level;
    level = "salary";
    
    if(status != level)
    {
        Employee e1;
        e1.setPayRate(10.00);
        cout<<"e1 pay: $"<<e1.calcWeeklyPay();
    }
    else
    {
        Manager e1;
        e1.setPayRate(12000.00);
        cout<<"e1 pay: $"<<e1.calcWeeklyPay();
    }    


    return 0;
}