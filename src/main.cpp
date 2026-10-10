#include <iostream>
#include <string>

int main()
{
    std::string direction;
    double temp;

    if (!(std::cin >> direction >> temp))
    {
        std::cout << "Invalid input\n";
        return 0;
    }

    if (direction == "C2F")
    {
        double result = temp * 9.0 / 5.0 + 32.0;
        std::cout << "Result: " << result << " F\n";
    }
    else if (direction == "F2C")
    {
        double result = (temp - 32.0) * 5.0 / 9.0;
        std::cout << "Result: " << result << " C\n";
    }
    else
    {
        std::cout << "Invalid input\n";
    }

    return 0;
}
