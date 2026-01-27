// #include <stdio.h>

// int main(){
    // int a = 5*2 - 3*2;
    // int b = 5*2 / 2*3;
    // int c = 5*(2/2)*3;
    // int d = 5+2 / 2*3;
    // printf("%d", d);

    // Q.2
    // int num;
    // printf("Enter anumber: ");
    // scanf("%d", &num);
    // printf("%d", num % 2 == 0);


    // Q.3
    //odd -> 0
    //even -> 1
    // int num;
    // printf("Enter anumber: ");
    // scanf("%d", &num);
    // printf("%d", num % 2 == 0);


    // int n,i,fact,final=0;
    // printf("Enter a number: ");
    // scanf("%d",&n);

    // for(i=1;i<n;i++){
    //     if(n%i==0){
    //         fact = i;
    //     }
    //     if(fact>final){
    //         final = fact;
    //     }
    // }
    // printf("%d",final);
    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter size of array: ");
//     scanf("%d",&n);
//     int i,j ,k,a[50][50],b[50][50],c[50][50];
//     printf("enter the first matrix: ");
//     for(i=0;i<n;i++)
//     {
//     for(j=0;j<n;j++)
//     {
//     scanf("%d",&a[i][j]);
//     }
//     }
//     printf("enter the second matrix: ");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     // muiltiplication
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             c[i][j]=0;
//             for(k=0;k<n;k++){
//                 c[i][j]+= a[i][j]*b[i][j];
//             }
//         }
//     }
//     printf("result matrix:\n");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             printf("%d\t", c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct test{
//     int x=0;
//     char y='A';
// };

// int main(){

//     struct test t;
//     printf("%d,%c",t.x,t.y);
    
//     return 0;
// }


// Pratice Qs 51

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char password[100];
//     char salt[10] = "123";
//     char newpass[200];
//     printf("Enter your password: ");
//     scanf("%s",&password);
//     strcpy(newpass,password);
//     strcat(newpass,salt);
//     printf("The New Password is: %s",newpass);
//     return 0;
// }

// Practice Qs 52

// #include <stdio.h>
// #include <string.h>

// void slice(char str[100]);

// int main(){
//     char str[100];
//     printf("Enter the str: ");
//     gets(str);
//     slice(str);
//     return 0;
// }

// void slice(char str[100]){
//     int i,n,m,k=0;
//     char newstr[100];
//     printf("Pls tell the range of slice: ");
//     scanf("%d,%d",&n,&m);
//     for(i=n;i<=m;i++,k++){
//         newstr[k] = str[i];
//     }
//     newstr[k] = '\0';
//     printf("%s",newstr);
// }

// Practice Qs 53

// void findchar(char str[],char ch);

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char str[100];
//     char ch;
//     printf("Enter the string: ");
//     gets(str);
//     printf("Enter the character: ");
//     scanf("%c",&ch);
//     findchar(str,ch);
//     return 0;
// }

// void findchar(char str[],char ch){
//     int i;
//     for(i=0;str[i] != '\0';i++){
//         if(str[i] == ch){
//             printf("Yes");
//             return;
//         }
//     }
//     printf("No");
// }
// #include <stdio.h>

// int main(){
//     int count=1,i,j;
//     for(i=0;i<5;i++){
//         for(j=0;j<i;j++){
//             printf("%d ",(count*count));
//             count++;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int a=12;
//     int *ptr = (int *)&a;
//     printf("%d",*ptr);
//     getchar();
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int i,j;
//     for(i=5;i>1;i--){
//         for(j=5;j>1;j--){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }