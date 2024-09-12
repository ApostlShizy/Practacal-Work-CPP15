#include<iostream>
#include<vector>
#include<cmath>

int main()
{
    int firstInd = 0;    
    std::vector<int>numbers{-200, -100, -50, -5, 1, 10, 15,20,25 };

    for (int i = 0; i < numbers.size() && !firstInd; ++i)
    {
        if (numbers[i] > 0)
        {
            firstInd = i;
        }
    }
    
    int j = 1;
    int i = 0;

    std::cout<<"\nOutput by module: ";

    while (firstInd + i < numbers.size() || firstInd - j >= 0)
    {
        if (firstInd + i < numbers.size() && numbers[firstInd + i] < abs(numbers[firstInd - j]))
        {
            std::cout << numbers[firstInd + i] << " ";
            ++i;
        }
        else
        {
            std::cout << numbers[firstInd - j] << " ";
            ++j;
        }
    }
}