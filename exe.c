#include <stdio.h>

// int main()
// {
//     int a,b,c;

//     a = 5;
//     c = ++a; //c=6 , a=6
//     b = ++c, c++, ++a, a++;  //c=7 b=7 , c=8 , a=7 , a=8
//     b += a++ + c; // b = 7 + 8 + 8  a = 9
//     printf("a = %d b = %d c = %d\n:",a,b,c);

//     return 0;
// }

// int count_num_of_1(int n)
// {
//     int i = 0;
//     int count = 0;
//     for (i = 0; i<32 ; i++)
//     {
//         if (((n>>i)&1)==1)
//         {
//             count++;
//         }
//     }
//     return count;
// }

// int main()
// {
//     int num = 0;
//     scanf(" %d", &num);
//     int n = count_num_of_1(num);
//     printf("%d\n",n);

//     return 0;
// }