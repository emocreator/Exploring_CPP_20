/// Read ints and print a message that tells user whether the number is odd or even

#include <iostream>

int main()
{
    int x;
    while(std::cin >> x)
        if(x%2 ==0)
            std::cout << x << " is even.\n";
        else
            std::cout << x << " is odd.\n";
}