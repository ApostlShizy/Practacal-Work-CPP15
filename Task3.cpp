#include<iostream>
#include<vector>

void addNum(std::vector<int>& vec, int input)
{
    bool add = false;
    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec[i] == 0 && !add)
        {
            add = true;
            vec[i] = input;
        }
        else if (vec[i] > input && !add)
        {
            add = true;
            int temp = vec[i];
            vec[i] = input;
            if (i + 1 < vec.size())
            {
                vec[i + 1] = temp;
            }
        }
        if (i + 1 < vec.size() && vec[i] > vec[i + 1])
        {
            int temp = vec[i];
            vec[i] = vec[i + 1];
            vec[i + 1] = temp;
        }
    }
}

int main()
{
    std::vector<int> vec(5);
    int input = 0;

    while (input != -2)
    {
        std::cout << "\n\nInput number \n(-1 output) \n(-2 exit)\n(> 0) add in vector\nEnter: ";
        std::cin >> input;

        if (input > 0)
        {
            addNum(vec, input);
        }
        if (input == -1)
        {
            if (vec[0] == 0)
            {
                std::cout << "\nNot enough numbers to show fifth, add more";
            }
            else
            {
                std::cout << "\nfifth in ascending order: " << vec[4];
            }
        }
    }
}