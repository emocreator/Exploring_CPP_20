/// What does the program do

/// Ans: Initiate Sum = 0 and count = 0 when we input it adds number to sum then once we close using Ctrl + Z it gives us the average


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
    
    /// Test 10 50 20 40 30 
    /// Ouput Average: 30
}