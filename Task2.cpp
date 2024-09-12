#include<iostream>
#include<vector>

void foundSum(std::vector<int>& a)
{
    int num;
    std::cout<<"\nEnter number: ";
    std::cin>>num;
    bool found = true;

    for(int i = 0;i < a.size() && found;++i)
    {
        for(int j = i + 1; j < a.size() && found;++j)
        {
            if(num == (a[i] + a[j]))
            {
                found = false;
                std::cout<<"\nNumber " << num <<" is equal sum of " << a[i] << " + " << a[j];
            }
        }
    }
    if(found)
    {
        std::cout<<"\nSum of numbers not found";
    }
}

int main()
{
    std::vector<int> a {2, 7, 11, 15};
    foundSum(a);
}