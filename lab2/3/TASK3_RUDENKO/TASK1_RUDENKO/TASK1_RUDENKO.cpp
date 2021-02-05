#include <iostream>

double CelciusToFahrenheit(double celcius)
{
    // (°C × 9/5) + 32 = °F
    return (celcius * static_cast<double>(9) / 5) + 32;
}

int main()
{
    double celc = 0;

    std::cout << "Enter celcius value: ";
    std::cin >> celc;

    std::cout << celc << " celcius is " << CelciusToFahrenheit(celc) << " fahrenheit.";
}