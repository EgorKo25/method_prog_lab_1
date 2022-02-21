#include <iostream>

void Sqrt2(int value, int *power)
{

    while (value != 1)
    {
        value /= 2;
        power++;
    }
}
int BytePower(int value1, int value2)
{
    int power = 0;
    int *ptr_power = &power;

    Sqrt2(value2, ptr_power);

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
    int *ptr_value1 = &value1;
    int *ptr_value2 = &value2;
    GetData(ptr_value1, ptr_value2);
    std::cout << ptr_value1 << "\t" << ptr_value2 << std::endl;

    return 0;
}