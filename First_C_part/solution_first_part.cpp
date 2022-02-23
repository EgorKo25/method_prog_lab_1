#include <iostream>

void Sqrt2(int value, int *power)
{
    while (value != 1)
    {
        value /= 2;
        (*power)++;
    }
}
int BytePower(int value1, int value2)
{
    int power = 0;

    Sqrt2(value2, &power);
   
    int res = value1 << power;
 
    return res;
}

void GetData(int *value1, int *value2)
{
    std::cout << "Enter the first value: \t";
    std::cin >> *value1;

    std::cout << "Enter the second value: \t";
    std::cin >> *value2;
}

int main(int argc, char **argv)
{
    int value1, value2;

    GetData(&value1, &value2);
    BytePower(value1, value2);

    return 0;
}