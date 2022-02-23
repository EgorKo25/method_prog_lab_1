#include <iostream>

void Sqrt2(int value, int *power)
{
    try
    {
        while (value != 1)
        {
            value /= 2;
            (*power)++;
        }
    }
    catch (...)
    {
        std::cout << "Error! Unusable value!";
    }
}
int BytePower(int value1, int value2)
{
    register int power = 0;

    Sqrt2(value2, &power);

    register int res = value1 << power;

    return res;
}

void GetData(int *value1, int *value2)
{
    try
    {
        std::cout << "Enter the first value: \t";
        std::cin >> *value1;

        std::cout << "Enter the second value: \t";
        std::cin >> *value2;
    }
    catch(...)
    {
        std::cout << "Error! Unusable value!";
    }
    
}

int main(int argc, char **argv)
{
    register int value1, value2;

    GetData(&value1, &value2);
    register int res = BytePower(value1, value2);

    std::cout << "Result of the bit mul:\t" << res << std::endl;

    return 0;
}