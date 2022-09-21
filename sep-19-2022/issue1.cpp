#include <iostream>
#include <map>
double add(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);

int main()
{
    std::map<char, double (*) (double,double)> operation;
    double num1 = 8;
    double num2 = 10;
    char c;
    std::cin >> c;
    operation['+'] = add;
    operation['-'] = sub;
    operation['*'] = mul;
    operation['/'] = div;
    std::cout << operation[c](num1,num2);
}

double add(double num1, double num2)
{
    return num1 + num2;
}

double sub(double num1, double num2)
{
    return num1 - num2;
}

double mul(double num1, double num2)
{
    return num1 * num2;
}

double div(double num1, double num2)
{
    if (num2 == 0)
    {
        std::cout << "Error!! Invalid devision: Can not devide into 0" << std::endl;
        return 0;
    }
    return num1 / num2;
}
