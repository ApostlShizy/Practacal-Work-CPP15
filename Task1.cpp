#include<iostream>
#include<vector>

void foundRange(std::vector<int>& numbers)
{
    int maxSum = 0;
    int ind_i = 0;
    int ind_j = 0;

    for(int i = 0;i < numbers.size();++i)
    {
        int currentSum = 0;       

        for(int j = i; j < numbers.size();++j)
        {
            currentSum += numbers[j];
            if(currentSum > maxSum)
            {
                maxSum = currentSum;
                ind_i = i;
                ind_j = j;
            }
        }
    }

    std::cout<<"\ni is = "<< ind_i << " j is = "<< ind_j;
    std::cout<<"\nSum is: "<<maxSum;
}

int main()
{
    std::vector<int> numbers {-2, 1, -3, 4, -1 ,2 ,1 ,-5 ,4};
    foundRange(numbers);
}