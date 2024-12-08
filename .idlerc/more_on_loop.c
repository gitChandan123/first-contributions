// #include <stdio.h>
// int main()
// {
//     int i, n;
//     // scanf("%d", &n);
//     for (i = 100; i <= 200; i++)
//     {
//         if (i % 7 == 0)
//         
//             printf("%d ", i);
//         
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int i, m, n, j,k;
//     scanf("%d%d", &n, &m);
//     k = m > n ? m : n;
//     for (j = m > n ? n : m; j <= k; j++)
//     {
//         for (i = 2; i < j; i++)
//             if (j % i == 0)
//                 break;
//         if (i == j)
//             printf("%d ", i);
//     }
// }
////check strong number
// #include <stdio.h>
// int fact(int n)
// {
//     int i, sum = 1;
//     for (i = 1; i <= n; i++)
//     {
//         sum *= i;
//     }
//     return sum;
// }
// int main()
// {
//     int k, num1, original_num, sum = 0;
//     printf("enter your number :");
//     scanf("%d", &original_num);
//     num1 = original_num;
//     while(num1)
//     {
//         k = num1 % 10;
//         sum = sum + fact(k);
//         num1 = num1 / 10;
//     }
//     if (sum == original_num)
//     {
//         printf("yes, %d is a strong number ",original_num);
//     }
//     else
//     {
//         printf("No, %d is not a strong number ",original_num);
//     }
// }
////check Armstrong number
// #include<stdio.h>
// int main()
// {
//     int num1, original_num, sum = 0, k;
//     printf("enter your number :");
//     scanf("%d",&original_num);
//     num1 = original_num;
//     while(num1)
//     {
//         k = num1 % 10;
//         sum = sum + k * k * k;
//         num1 = num1 / 10;
//     }
//     if(sum==original_num)
//     {
//         printf(" yes, %d is an Armstrong number ", original_num);
//     }
//     else
//     {
//         printf("No, %d is not an Armstrong number ", original_num);
//     }
// }
////factors of a given number
// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("enter your number :");
//     scanf("%d", &n);
//     for (i = 1; i <= n;i++)
//     {
//         if(n%i==0)
//             printf("%d ", i);
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int i, a = 0, n;
//     printf("enter a number :");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         a += i;
//         printf("%d ", a);
//     }
//     return 0;
// }
// check perfect number
// #include<stdio.h>
// int main()
// {
//     int i, n, real_n,sum=0;
//     printf("enter your number :");
//     scanf("%d", &real_n);
//     n = real_n;
//     for (i = 1; i < n;i++)
//     {
//         if(n%i==0)
//         {
//             sum += i;
//         }
//     }
//     if(sum==real_n)
//     {
//         printf("Yes, %d is a Perfect number :", real_n);
//     }
//     else
//     {
//         printf("No,%d is not a Perfect number :",real_n);
//     }
// }
// //Niven number or Hrashad number
// #include<stdio.h>
// int main()
// {
//     int n, real_n, k, sum = 0;
//     printf("enter your number :");
//     scanf("%d", &real_n);
//     n = real_n;
//     while (n)
//     {
//         k = n % 10;
//         sum += k;
//         n /= 10;
//     }
//     if(real_n%sum==0)
//     {
//         printf("Yes,%d is a Niven number :", real_n);
//     }
//     else
//     {
//         printf("No,%d is not a Niven number :", real_n);
//     }
// }
//Neon number
// #include <stdio.h>
// int main()
// {
//     int n, real_n, sq, k, sum = 0;
//     printf("enter your number :");
//     scanf("%d", &real_n);
//     n = real_n;
//     sq = n * n;
//     while (sq)
//     {
//         k = sq % 10;
//         sum += k;
//         sq /= 10;
//     }
//     if (real_n == sum)
//     {
//         printf("yes,%d is Neon number :", real_n);
//     }
//     else
//     {
//         printf("No,%d is not a Neon number :", real_n);
//     }
// }
