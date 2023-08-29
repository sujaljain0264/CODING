// #include <stdio.h>

// int main()
// {
    // int n, a = 0, b = 1,c;
    // printf("enter number:");
    // scanf("%d",&n);

    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%d ", a);
    //     c = a + b;
    //     a = b;    b = c;
    // }
    // printf("hello world");
  
    // return 0;
//     #include <stdio.h>
// int main() {

//   int i, n;

//   // initialize first and second terms
//   int t1 = 0, t2 = 1;

//   // initialize the next term (3rd term)
//   int nextTerm = t1 + t2;

//   // get no. of terms from user
//   printf("Enter the number of terms: ");
//   scanf("%d", &n);

//   // print the first two terms t1 and t2
//   printf("Fibonacci Series: %d, %d, ", t1, t2);

//   // print 3rd to nth terms
//   for (i = 3; i <= n; ++i) {
//     printf("%d, ", nextTerm);
//     t1 = t2;
//     t2 = nextTerm;
//     nextTerm = t1 + t2;
//   }

//   return 0;
// }
// ___________________________________________________________
#include<stdio.h>
int main() {
 int i, j, rows;
 printf("Enter the number of rows:" );
 scanf("%d", &rows);
 for (i = 1; i <= rows; i++) {
 for (j = 1; j <= i; j++) {
 printf("%d", j);
 }
 printf("\n");
 }
 return 0;
}
