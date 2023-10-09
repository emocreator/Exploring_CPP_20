/// My solution 


#include <iostream>

int main()
{
    int x;
    int count{};
    int sum{0};
    
    while(std::cin>>x)
    {
        sum = sum + x;
        count = count + 1;
    }
    if (count!=0)
    {
        std::cout << "Average: " << sum / count << "\n";
    }
}    
/// 2 5 3 
/// Expected output: 3.333
/// Actual output: 3

/// 2 5 4
/// Expected output: 3.667
/// Actual output: 3
