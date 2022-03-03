#include <iostream>

template <typename T>
T GetAnChaeckData()
{
    T temp;
    std::cout << "Enter value: " << std::endl = "\t";

    std::cin >> temp;
    while (std::cin.fail() || std::cin.get() != '\n')
    {
        std::cin.clear(); // Resets all bits of flow, Ie the flow becomes good
        std::cin.ignore(9999, '\n');
        std::cin.sync(); //Delete data from Buffer
        std::cout << "Enter again: ";
        std::cin >> temp;
    }
    return temp;
}
int isPow(int pow)
{
    int tmp = 0;

    if (((pow % 2) == 1) & (pow != 1))
        return -1;

    while (pow != 1)
    {
        pow /= 2;
        tmp++;
    }

    if (pow > 1)
        return -1;

    return tmp;
}

int BytePower(int value1, int value2)
{
    register int res = 0;
    value2 = isPow(value2);

    if(value2 != -1)
    {
        res = value1 << value2;
    }else{
        std::cout << "Value2 is not a power of 2";
    }

    return res;
}

int main(int argc, char **argv)
{
    register int value1, value2;

    value1 = GetAnChaeckData<int>();
    value2 = GetAnChaeckData<int>();
    
    register int res = BytePower(value1, value2);

    std::cout << "Result of the bit mul:\t" << res << std::endl;

    return 0;
}