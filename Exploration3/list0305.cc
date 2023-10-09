/// Read integers and print their average.
/// Print nothing if the input is empty.

#include <iostream>

int main()
{
    int x;
    int sum{0};
    int count{};

    while(std::cin >> x)
    {
        sum = sum+x;
        count = count +1;
    }
    if(count ==0)
        std::cout << "Count is 0 this cannot be done\n"; 
    else
        std::cout << "Average: " << sum/count << "\n";
}