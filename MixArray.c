#include <stdio.h>
int i = 0;
int main()
{
    //array declaration
    int arr1[3] = {1, 2, 3};
    int arr2[3] = {4, 5, 6};
    int offset = 1;

  int arr3[6];

    for (int i =  0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i]=arr1[i] ;
        }
    }


for (int i = 0; i < 6; i++)
{
    printf("%d \n",arr3[i]);

}






    return 0;
}

// int mix(arr1, arr2, offset)
// {

// }