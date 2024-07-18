#include <iostream>

using namespace std;

int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2) 
{
    
    bool ascending = true; // check up arr or dow arr
    
    if (lenArr1 > 1 && firstArr[0] > firstArr[1]) 
        ascending = false;

    int* mergeArr = new int[lenArr1 + lenArr2];
    int index1 = 0, index2 = 0, indexMerge = 0;

    if (ascending) // merge arr if up arr
    {
        while (index1 < lenArr1 && index2 < lenArr2) 
        {
            if (firstArr[index1] <= secondArr[index2])
                mergeArr[indexMerge++] = firstArr[index1++];
            else
                mergeArr[indexMerge++] = secondArr[index2++];
        }
    } else          // merge arr if up arr
    {
        while (index1 < lenArr1 && index2 < lenArr2) 
        {
            if (firstArr[index1] >= secondArr[index2]) 
                mergeArr[indexMerge++] = firstArr[index1++];
            else
                mergeArr[indexMerge++] = secondArr[index2++];
        }
    }
    
    while (index1 < lenArr1) // bonus unit arr1
        mergeArr[indexMerge++] = firstArr[index1++];

    while (index2 < lenArr2)    // bonus unit arr2
        mergeArr[indexMerge++] = secondArr[index2++];
        
    return mergeArr;
}

int main() 
{
    int lenArr1, lenArr2;
    cin >> lenArr1 >> lenArr2;

    int* firstArr = new int[lenArr1];
    int* secondArr = new int[lenArr2];

    for (int i = 0; i < lenArr1; i++)
        cin >> firstArr[i];

    for (int i = 0; i < lenArr2; i++)
        cin >> secondArr[i];

    int* mergedArray = merge(firstArr, lenArr1, secondArr, lenArr2);

    for (int i = 0; i < lenArr1 + lenArr2; i++)
        cout << mergedArray[i] << " ";

    delete[] firstArr;
    delete[] secondArr;
    delete[] mergedArray;

    return 0;
}