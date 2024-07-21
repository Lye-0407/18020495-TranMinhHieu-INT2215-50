#include <iostream>

using namespace std;

int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2) 
{
    bool ascending = true; // kiểm tra mảng tăng dần hay giảm dần
    
    if (lenArr1 > 1 && firstArr[0] > firstArr[1]) 
        ascending = false;

    int* mergeArr = new int[lenArr1 + lenArr2];
    int index1 = 0, index2 = 0, indexMerge = 0;

    if (ascending) // merge mảng nếu tăng dần
    {
        while (index1 < lenArr1 && index2 < lenArr2) 
        {
            if (firstArr[index1] <= secondArr[index2])
                mergeArr[indexMerge++] = firstArr[index1++];
            else
                mergeArr[indexMerge++] = secondArr[index2++];
        }
    } 
    else // merge mảng nếu giảm dần
    {
        while (index1 < lenArr1 && index2 < lenArr2) 
        {
            if (firstArr[index1] >= secondArr[index2]) 
                mergeArr[indexMerge++] = firstArr[index1++];
            else
                mergeArr[indexMerge++] = secondArr[index2++];
        }
    }
    
    // Thêm phần tử còn lại của mảng firstArr
    while (index1 < lenArr1) 
        mergeArr[indexMerge++] = firstArr[index1++];

    // Thêm phần tử còn lại của mảng secondArr
    while (index2 < lenArr2)    
        mergeArr[indexMerge++] = secondArr[index2++];
        
    return mergeArr;
}