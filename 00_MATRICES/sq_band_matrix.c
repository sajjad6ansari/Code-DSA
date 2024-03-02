#include <stdio.h>
#include <stdlib.h>

// struct squareBandMatrix
// {
//   int n;
//   int *A;
// };

// void set(struct squareBandMatrix *d, int i, int j, int x)
// {
//   int index = -1;
//   switch (i - j)
//   {
//   case -3:
//     index = j - 1;
//     break;
//   case -2:
//     index = (d->n) - 3 + j - 1;
//     break;
//   case -1:
//     index = 2 * (d->n) - 5 + j - 1;
//     break;
//   case 0:
//     index = 3 * (d->n) - 6 + j - 1;
//     break;
//   case 1:
//     index = 4 * (d->n) - 6 + i - 1;
//     break;
//   case 2:
//     index = 5 * (d->n) - 7 + i - 1;
//     break;
//   case 3:
//     index = 6 * (d->n) - 9 + i - 1;
//     break;
//   }
//   d->A[index] = x;
// }
// int get(struct squareBandMatrix d, int i, int j)
// {

//   int index = -1;
//   switch (i - j)
//   {
//   case -3:
//     index = j - 1;
//     break;
//   case -2:
//     index = (d.n) - 3 + j - 1;
//     break;
//   case -1:
//     index = 2 * (d.n) - 5 + j - 1;
//     break;
//   case 0:
//     index = 3 * (d.n) - 6 + j - 1;
//     break;
//   case 1:
//     index = 4 * (d.n) - 6 + i - 1;
//     break;
//   case 2:
//     index = 5 * (d.n) - 7 + i - 1;
//     break;
//   case 3:
//     index = 6 * (d.n) - 9 + i - 1;
//     break;
//   }
//   if (index != -1)
//     return d.A[index];
//   else
//     return 0;
// }

// void display(struct squareBandMatrix d)
// {
//   for (int i = 1; i <= (d.n); i++)
//   {
//     for (int j = 1; j <= (d.n); j++)
//     {

//       int index = -1;
//       switch (i - j)
//       {
//       case -3:
//         index = j - 1;
//         break;
//       case -2:
//         index = (d.n) - 3 + j - 1;
//         break;
//       case -1:
//         index = 2 * (d.n) - 5 + j - 1;
//         break;
//       case 0:
//         index = 3 * (d.n) - 6 + j - 1;
//         break;
//       case 1:
//         index = 4 * (d.n) - 6 + i - 1;
//         break;
//       case 2:
//         index = 5 * (d.n) - 7 + i - 1;
//         break;
//       case 3:
//         index = 6 * (d.n) - 9 + i - 1;
//         break;
//       }
//       if (index == -1)
//         printf("0 ");
//       else
//         printf("%d ", d.A[index]);
//     }
//     printf("\n");
//   }
// }

int main()
{
  printf("correct this code\n");
//   struct squareBandMatrix d;
//   printf("enter the dimension of square band matrix\n");
//   scanf("%d", &(d.n));
//   // this proram is only for non zero elements in band of 3consecutive down and up diagonals wrt
//   // the main diagonal
//   int b = 3;

//   int l = (1 + 2 * b) * d.n - b * (b + 1) / 2;
//   d.A = (int *)malloc(sizeof(int) * (l));
//   printf("enter the elements of square band matrix\n");
//   for (int i = 1; i <= d.n; i++)
//   {
//     for (int j = 1; j <= d.n; j++)
//     {
//       int x;
//       scanf("%d", &x);
//       if (i - j >= b && j - i <= b)
//         set(&d, i, j, x);
//     }
//   }
//   display(d);
//   printf("\n");
//   printf("%d\n", get(d, 2, 3));
//   printf("%d\n", get(d, 3, 2));
//   // printing the elements stored in A  d to show that we have stored colm-wise
//   for (int k = 0; k < l; k++)
//   {
//     printf("%d ", d.A[k]);
//   }

//   free(d.A);
}
