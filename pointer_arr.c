#include<stdio.h>


//存放指針數組就是指針數組
// int main()
// {
    // int a = 10;
    // int b = 20;
    // int c = 30;

    // int arr[10];

    // int* pa = &a;
    // int* pb = &b;
    // int* pc = &c;


    // int* parr[10] = {&a , &b , &c};

    // int i = 0;
    // for (i = 0 ; i < 3 ; i++)
    // {
    //     printf("%d ",*(parr[i]));
    // }

    // int arr[3][4] = {1,2,3,4,
    //                 2,3,4,5,
    //                 3,4,5,6};

    // int i,j;
    // for (i = 0 ; i < 3 ; i++)
    // {
    //     for(j = 0 ; j < 4 ; j++)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }

//     int arr1[4] = {1,2,3,4};
//     int arr2[4] = {2,3,4,5};
//     int arr3[4] = {3,4,5,6};

//     int* parr[3]={arr1,arr2,arr3};
//     int i,j;
//     for (i = 0 ; i < 3 ; i++)
//     {
//         for(j = 0 ; j < 4 ; j++)
//         {
//             //printf("%d ",parr[i][j]);
//             printf("%d ",*(*(parr+i)+j));
//         }
//         printf("\n");
//     }
//     return 0;
// }