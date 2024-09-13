#include<iostream>
#include<vector>

int findInd(std::vector<int>& numbers)
{
    for (int i = 0; i < numbers.size(); ++i)
    {
        if (numbers[i] > 0)
        {
            return i;
        }
    }
    return -1;
}
void display_by_module(std::vector<int>& numbers, int firstInd)
{
    std::cout << "\nOutput by module: ";
    int j = 1;
    int i = 0;
    while (firstInd + i < numbers.size() || firstInd - j >= 0)
    {
        if (firstInd + i < numbers.size() && numbers[firstInd + i] < -numbers[firstInd - j])
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

int main()
{
    std::vector<int>numbers{ -200, -100, -50, -5, 1, 10, 15,20,25 };
    int firstInd = findInd(numbers);

    if (firstInd == -1)
    {
        firstInd = numbers.size()-1;
        display_by_module(numbers, firstInd);
    }
    else
    {
        display_by_module(numbers, firstInd);
    }
}