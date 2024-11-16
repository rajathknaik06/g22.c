/*Problem Statement



Fin is managing salary taxation and wants a program to determine the net salaries based on the provided salary amount. Determine the net salary: 



If the salary is less than 50000, print "No Tax." 
For salaries between 50000 (inclusive) and 100000 (exclusive), apply 10% tax and print the net salary after deduction.
For 100000 or more, apply 20% tax and print the net salary after deduction.


Implement a program that takes Fin's salary as input (integer) and calculates the net salary after converting it into float.

Input format :
The input consists of an integer value n, representing Fin's monthly salary.

Output format :
If no tax is applicable, the output prints "No Tax"

If a tax is applicable, the output prints "Salary after X% Tax: Y" where X represents the applicable tax percent value and Y represents the net salary after deduction with two decimal places.*/

#include<stdio.h>
int main()
{
    int salary;
    float netsalary;
    
    scanf("%d",&salary);
    
    if(salary < 50000)
    {
        printf("No Tax\n");
    }
    else if (salary >= 50000 && salary < 100000)
    {
     netsalary = salary - (salary* 0.10);          //salary - deduction 
     printf("salary after 10%% Tax: %.2f\n",netsalary);
    }
    else
    {
     netsalary = salary - (salary* 0.20);
     printf("salary after 20%% Tax: %.2f\n",netsalary);
    }
    
    return 0;
    
}
