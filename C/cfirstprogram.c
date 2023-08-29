#include <stdio.h>

// int main()
// {
//     int n;
//     printf("enter your number: ");
//     scanf("%d",n);
//     int m;
//     printf("enter your 2nd number: ");
//     scanf("%d",m);

//     for (int i = 0; i <=n; i++){
//         for(int j=0;j<=m;j++){
//             if(j==i){
//                 printf(" ");
//             }
//             else{
//                 printf('i');
//             }
//         }
//     }

//     return 0;
// }
// ___________________________________________________
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *top = 0;
// struct node *top, *temp, *newnode;
// void push(int x)
// {
//     newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->data = x;
//     newnode->next = top;
//     top = newnode;
// }
// void display()
// {
//     temp = top;
//     if (temp == 0)
//     {
//         printf("stack is empty");
//     }
//     else
//     {
//         while (temp != 0)
//         {
//             printf("%d", temp->data);
//             temp = temp->next;
//         }
//     }
// }
// void main()
// {
//     push(5);
//     push(7);
//     push(9);
//     display();
// }
// ___________________________________________________________________
// int main()
// {
//     char word[] = "sujal";
//     int length = (sizeof(word)-1);
//     for (int i = 0; i < length; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("%c",word[j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int isPrime(int num)
// {
//     if (num <= 1)
//         return 0;

//     for (int i = 2; i * i <= num; i++)
//     {
//         if (num % i == 0)
//             return 0;
//     }

//     return 1;
// }

// int main()
// {
//     int number;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     if (isPrime(number))
//         printf("%d is a prime number.\n", number);
//     else
//         printf("%d is not a prime number.\n", number);

//     return 0;
// }
// ___________________________________________________________________________________
int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
for(int i=0;i<=n;i--){
        for (int j = i; j <= m; j++)
        {
            printf(i);
        }
}
printf("\n");
return 0;
}