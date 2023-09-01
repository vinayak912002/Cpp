#include <iostream>
using namespace std;

//as the name suggests we are going to insert the last element aat the correct place
//best case = O(n)
//worst case = O(n^2)
//stable, online

void insertionSort(int nums[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = nums[i];

        j = i - 1;
        while (j >= 0 && nums[j] > key)
        {
            nums[j + 1] = nums[j];
            j -= 1;
        }
        nums[j+1] = key;
    }
}

int main()
{
    int nums[] = {5,4,3,2,1,0};
    insertionSort(nums, 6);
    for (int i = 0; i < 6; i++)
    {
        cout<< nums[i]<< " ";
    }
}