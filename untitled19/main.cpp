#include <iostream>
#include <vector>

int sum_curr(std::vector<int> vec, int min, int max)
{
    int sumFunction = 0;
    for(int i = min; i <= max; i++)
        sumFunction += vec[i];
    return sumFunction;
}

int main() {
    std::vector<int> vec = {-2,1,-3,4,-1,2,1,-5,4};
    int maxSum=vec[0];
    int min=0;
    int max=0;
    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = i ; j < vec.size(); j++)
        {
            int current_sum = sum_curr(vec, i, j);
            if(current_sum > maxSum)
            {
                maxSum = current_sum;
                min = i;
                max = j;
            }
        }
    }
    std::cout<<"Start Index - "<<min<<". End Index - "<<max;
}
