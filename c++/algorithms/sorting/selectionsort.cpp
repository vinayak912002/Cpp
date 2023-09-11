#include <iostream>
using namespace std;

int main()
{
    int nums[4] = {5,4,3,2};
    int IndexAt = 4;
    for (int i = 0; i < 4;i++){
        int maxInt = INT_MIN;
        int maxIntIndex = 0;
        for (int j = 0; j < 4 - i; j++){
            //selection of the biggest element
            if(nums[j] > maxInt){
                maxInt = nums[j];
                maxIntIndex = j;
            }
        }
        //pushing it at the last index of the current list
        int temp = nums[3-i];
        nums[3-i] = nums[maxIntIndex];
        nums[maxIntIndex] = temp;
    }
    for(int k = 0;k < 4;k++){
                cout<<nums[k];
            }
    
    return 0;
}