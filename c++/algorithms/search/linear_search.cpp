#include <iostream>

int search(int nums[], int target)
{
    for(int i = 0; i < sizeof(nums); i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}


int main ()
{
    int nums[] = {4,8,7,6,15,48,89};
    std::cout<< search(nums, 15);
    return 0;
}