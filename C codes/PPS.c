// #include <math.h>
// #include <stdio.h>
// #include <string.h>

// int fact(int n);
// int fab(int n);

// int fact(int n){
//     if (n==1){
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int result = n * factNm1;
//     return result;
// }

// int fab(int n){
//   if(n==0){
//     return 0;
//   }
//   else if(n==1){
//     return 1;
//   }
//   else{
//     return fab(n-1) + fab(n-2);
//   }
// }

// int main()
// {
/* Write a program that calculates the Simple Interest and
   Compound Interest. The Principal Amount, Rate of
   Interest, and Time are entered through the keyboard. */

// float p,r,t,SI,CI;
// printf("Enter the Principle Amt,Rate,Time:");
// scanf("%f,%f,%f",&p,&r,&t);
// r = r/100;
// SI = (p*r*t)/100;
// CI = p*pow((1+(r/100)),(t))-p;
// printf("The Simple Interest is: %.2f",SI);
// printf("\nThe Compound Interest is: %.2f",CI);

/* Write a program that checks whether the two numbers entered by the user are equal or not.*/
// int a,b;
// printf("Enter the two numbers: ");
// scanf("%d,%d",&a,&b);
// if(a == b){
//     printf("They are equal");
// }else{
//     printf("They are not equal");
// }

/* Write a program that swaps the values of two variables using a third variable/without third variable */

// int a,b,temp;
// printf("Enter two numbers: ");
// scanf("%d%d",&a,&b);
// // with a third variable
// temp = a;
// a = b;
// b = temp;
// printf("The values after swapping: %d,%d",a,b);
// // without a third variable
// a = a + b;
// b = a - b;
// a = a - b;
// printf("\nThe values after swapping: %d,%d",a,b);

/* Write a program to find greatest of the three numbers */

// int a,b,c;
// scanf("%d,%d,%d",&a,&b,&c);
// if(a>b && a>c){
//     printf("%d is the greatest of all",a);
// }
// else if(b>a && b>c){
//     printf("%d is the greatest of all",b);
// }
// else if(c>a && c>b){
//     printf("%d is the greatest of all",c);
// }
// else{
//     printf("All are equal");
// }
// printf("\nthank you");

/* write a program that finds wheather a given no. is even or odd. */

// int a;
// scanf("%d",&a);
// if(a % 2 == 0){
//     printf("It is a even number.");
// }else{
//     printf("It is a odd number");
// }

/* Write a program that tells whether a given year is a leap year */

// int yr;
// scanf("%d",&yr);
// if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0)) {
//     printf("%d is a leap year.\n", yr);
// } else {
//     printf("%d is not a leap year.\n", yr);
// }

/* Write a program that accepts marks of five subjects and finds percentage and prints grades according to the following criteria:
90-100%-----------print 'A'
80-90%------------print 'B'
70-80%------------print 'C'
Below 60%---------print 'D' */

// int m1,m2,m3,m4,m5;
// printf("Enter marks of five subjects: ");
// scanf("%d,%d,%d,%d,%d",&m1,&m2,&m3,&m4,&m5);
// int sum = m1+m2+m3+m4+m5;
// float per = sum/5;

// if(per>=90 && per<=100){
//     printf("A");
// }
// else if (per>=80 && per<90)
// {
//     printf("B");
// }
// else if (per>=60 && per<80)
// {
//     printf("C");
// }
// else if(per<60)
// {
//     printf("D");
// }
// else{
//     printf("Invalid Number");
// }

/* Write a program that takes two operands and one operator from the user and performs the operation and prints the result by using the switch statement */

// int num1,num2;
// char ask;
// printf("Enter the operation you want to perform(+,-,*,/): ");
// scanf("%c",&ask);
// printf("Enter two numbers: ");
// scanf("%d,%d",&num1,&num2);

// switch (ask)
// {
// case '+':
//     printf("%d + %d = %d",num1,num2,(num1+num2));
//     break;

// case '-':
//     printf("%d - %d = %d",num1,num2,(num1-num2));
//     break;

// case '*':
//     printf("%d * %d = %d",num1,num2,(num1*num2));
//     break;

// case '/':
//     printf("%d / %d = %.2f",num1,num2,(float)num1/num2);
//     break;

// default:
//     printf("Invalid Entry");
//     break;
// }

/* Write a program to print the sum of all numbers up to a given number. */

// int num;
// int sum=0;
// printf("Enter a number: ");
// scanf("%d",&num);
// for(int i=0; i<=num; i++){
//     sum=sum+i;
// }
// printf("%d",sum);

// return 0;

/* Write a program to print sum of even and odd numbers from 1 to N numbers. */

// int N;
// int sumeven = 0;
// int sumodd = 0;
// printf("Enter a number: ");
// scanf("%d",&N);
// for(int i=1; i<=N; i++){
//     if(i%2==0){
//         sumeven+=i;
//     }
//     else{
//         sumodd+=i;
//     }
// }
// printf("The sum of even numbers is:%d",sumeven);
// printf("\nThe sum of odd numbers is:%d",sumodd);

/* Write a program to print the Fibonacci series /find factorial using recursion. */

// #include <stdio.h>

// int main(){
//   int n;
//   printf("Enter a number: ");
//   scanf("%d",&n);
//   int sum = 0;
//   int a = 0;
//   int b = 1;
//   printf("%d\t",a);
//   for(int i = 2; i<=n; i++){
//     sum = a+b;
//     printf("%d\t",sum);
//     b = a;
//     a = sum;
//   }
//   return 0;
// }

/* Write a program to find the factorial of a given number. */

// int num;
// int product=1;
// printf("Enter a number: ");
// scanf("%d",&num);
// for(int i=num;i>=1;i--){
//     product = product * i;
// }
// printf("%d",product);

/* Write a program to check whether the entered number is prime or not. */

// int num;
// int count = 0;
// printf("Enter a number: ");
// scanf("%d", &num);
// if(num == 2){
//     printf("Its a prime");
// }
// else{
//     for (int i = 2; i < num; i++){
//         if (num % i == 0){
//             printf("Its not a prime");
//             break;
//         }else{
//             count++;
//             if(count==num-2){
//                 printf("Its prime");
//             }
//         }
//     }
// }

// Write a program to print the fabonacci series / find factorial using recursion.
// int i,n,a=0,b=1,sum;
// printf("Enter a number: ");
// scanf("%d",&n);
// printf("%d",a);

// for(i=0;i<=n;i++){
//     sum=a+b;
//     printf(",%d",sum);
//     b=a;
//     a=sum;
// }

// factorial using recursion
// int n=10;
// printf("%d",fact(10));


// fibonacci using recursion
// int n=5,i;
// for(i=0;i<5;i++){
//   printf("%d\t",fab(i));
// }


// Prime number or not
// int n,i,count=0;
// printf("Enter a number: ");
// scanf("%d",&n);

// for(i = 1; i<=n; i++){
//     if(n%i==0){
//         count++;
//     }
// }
// if(count==2){
//     printf("Its a prime number");
// }else{
//     printf("Its not a prime number");
// }

// int i,n,j;
// printf("Enter a number: ");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
//     for(j=1;j<=i;j++){
//         printf("* ");
//     }
//     printf("\n");
// }

// Write a program to find the sum of digits of the entered number
//  int i,n,sum=0;
//  printf("Enter a number: ");
//  scanf("%d",&n);
//  while(n!=0){
//      i=n%10;
//      sum=sum+i;
//      n=n/10;
//  }
//  printf("Sum of digits: %d",sum);

// Write a program to find the reverse of a number
// int i,n,r;
// printf("Enter a number: ");
// scanf("%d",&n);
// while(n!=0){
//   r=n%10;
//   n=n/10;
//   printf("%d",r);
// }
//   return 0;
// }

// Armstrong Number

// #include <stdio.h>
// #include <math.h>

// int main(){
//   int n = 1000,i,m;
//   double r,sum,count=0;
//   for(i=1;i<=n;i++){
//       if(i>=1 && i<=9){
//           count=1;
//       }else if(i>=10 && i<=99){
//           count=2;
//       }else if(i>=100 && i<=999){
//           count=3;
//       }else{
//           count=4;
//       }
//       m=i;
//       sum=0;
//       while(m!=0){
//           r=m%10;
//           m=m/10;
//           sum=sum+pow(r,count);
//       }
//       if(sum==i){
//           printf("%d\t",i);
//       }
//   }
//   return 0;
// }

// Binary to decimal
// Decimal to binary

// void bintodec(int choice);
// void dectobin(int choice);

// #include <stdio.h>
// #include <math.h>

// int main(){
//     int choice,n,r;
//     double sum=0,count=0;
//     printf("1.Binary to decimal\n");
//     printf("2.Decimal to binary\n");
//     printf("Enter a choice: ");
//     scanf("%d",&choice);
//     switch (choice){
//     case 1:
//         printf("Enter binary number: ");
//         scanf("%d",&n);
//         while(n!=0){
//             r=n%10;
//             n=n/10;
//             sum = sum + (r*pow(2,count));
//             count++;
//         }
//         printf("The decimal number is: %.0lf\n",sum);
//         break;
//     case 2:
//         printf("Enter a decimal value: ");
//         scanf("%d",&n);

//         while(n!=0){
//             r = n % 2;
//             sum = sum + (r *pow(10,count));
//             n = n / 2;
//             count++;
//         }
//         printf("The binary number is: %.0lf",sum);
//         break;

//     default:
//         printf("Invalid Choice");
//         break;
//     }

//     return 0;
// }

// void bintodec(int choice){
//     int n,r;
//     double sum=0,count=0;

//     printf("Enter binary number: ");
//     scanf("%d",&n);
//     while(n!=0){
//         r=n%10;
//         n=n/10;
//         sum = sum + (r*pow(2,count));
//         count++;
//         }
//         printf("The decimal number is: %.0lf\n",sum);
// }
// void dectobin(int choice){
//     int n,r;
//     double sum=0,count=0;
//     printf("Enter a decimal value: ");
//     scanf("%d",&n);

//     while(n!=0){
//         r = n % 2;
//         sum = sum + (r *pow(10,count));
//         n = n / 2;
//         count++;
//     }
//     printf("The binary number is: %.0lf",sum);
// }

// Write a program that simply takes elements of the array from the user and finds the sum of these elements.

// #include <stdio.h>

// int main(){
//     int arr[5],i,n=5,sum=0;
//     printf("Enter elements of array: ");
//     for(i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++){
//         sum=sum+arr[i];
//     }
//     printf("Sum = %d",sum);
//     return 0;
// }

// WAP that inputs two arrays and saves sum of corresponding elements of these arrays in a third array and prints them.

// #include <stdio.h>

// int main(){
//     int arr1[5],arr2[5],arr3[5],i,n=5;
//     printf("Enter numbers in first array(5): ");
//     for(i=0;i<5;i++){
//         scanf("%d",&arr1[i]);
//     }
//     printf("Enter numbers in second array(5): ");
//     for(i=0;i<5;i++){
//         scanf("%d",&arr2[i]);
//     }
//     for(i=0;i<5;i++){
//         arr3[i] = arr1[i] + arr2[i];
//     }
//     printf("The sum of corresponding elements are: ");
//     for(i=0;i<5;i++){
//         printf("%d\t",arr3[i]);
//     }
//     return 0;
// }

// Write a program to find the minimum and maximum elements of the array.

// #include <stdio.h>

// int main(){
//     int arr[] = {5,11,10,8,9};
//     int n=5,i,a=0,b,c=arr[0];

//     for(i=0;i<n;i++){
//         b = arr[i];
//         // Minimum
//         if(c>b){
//             c=b;
//         }
//         // Maximum
//         if(a<b){
//             a=b;
//         }
//     }
//     printf("min: %d\t",c);
//     printf("max: %d\t",a);

//     return 0;
// }
// Factorial function
// int fact(int n){
//     if (n==1){
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int result = n * factNm1;
//     return result;
// }

// Write a program to search an element in an array using Linear Search.

// #include <stdio.h>

// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     int n = 6,i,num;
//     printf("Enter the number to be searched: ");
//     scanf("%d",&num);

//     for(i=0;i<6;i++){
//         if(num == arr[i]){
//             printf("Found the element %d at index %d",num,i);
//             break;
//         }
//     }
//     return 0;
// }

// Write a program to search an element in an array using Binary Search

// #include <stdio.h>

// int main(){
//     int arr[50],n,key,high,low,mid,i;
//     printf("The the size of array: ");
//     scanf("%d",&n);

//     printf("Enter the list item(sorted): ");
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("The List Entered: ");
//     for(i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");

//     printf("Enter the element you want to search: ");
//     scanf("%d",&key);

//     low=0;
//     high = n-1;

//     while(low<=high){
//         mid = (high+low)/2;

//         if(arr[mid] == key){
//             printf("The element %d is found at index %d",key,mid);
//             break;
//         }
//         else if(arr[mid] < key){
//             low = mid + 1;
//         }
//         else{
//             high = mid - 1;
//         }
//     }
//     return 0;
// }

// Write a program to sort the elements of the array in ascending order using the Bubble Sort technique.

// #include <stdio.h>

// int main(){
//     int arr[50],n,i,j,r,temp,count=0;

//     printf("Enter the size of an array: ");
//     scanf("%d",&n);
//     printf("Enter the elements in list: ");
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("The elements entered in the list: ");
//     for(i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");

//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             if(i<j){
//                 if(arr[i]>arr[j]){
//                     temp = arr[j];
//                     arr[j] = arr[i];
//                     arr[i] = temp;
//                 }
//             }
//         }
//     }

//     printf("The sorted array is: ");
//     for(i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

// // Matrix multiplication
// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int i,j,k,n,m,p,q,a[10][10],b[10][10],c[10][10];
//     printf("Enter the rows and column of the first matrix: ");
//     scanf("%d,%d",&n,&m);
//     printf("Enter the rows and column of the second matrix: ");
//     scanf("%d,%d",&p,&q);

//     if(m!=p){
//         printf("The matices are not valid for multiplication");
//         exit(0);
//     }
//     printf("Enter the first matrix: \n");
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Enter the second matrix: \n");
//     for(i=0;i<p;i++){
//         for(j=0;j<q;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     printf("The first matrix: \n");
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             printf("%d\t",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     printf("The second matrix: \n");
//     for(i=0;i<p;i++){
//         for(j=0;j<q;j++){
//             printf("%d\t",b[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     printf("The multiplied matrix: \n");
//     for(i=0;i<n;i++){
//         for(j=0;j<q;j++){
//             c[i][j] = 0;
//             for(k=0;k<m;k++){
//                 c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
//             }
//         }
//     }

//     for(i=0;i<n;i++){
//         for(j=0;j<q;j++){
//             printf("%d\t",c[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\n");
//     return 0;
// }

// Write a program to sort the elements of the array in ascending order using the insertion sort and selection sort with function.

// Selection Sort

// #include <stdio.h>

// int main(){
//     int arr[50],n,i,j,temp,min,count=0;

//     printf("Enter the size of array: ");
//     scanf("%d",&n);

//     printf("Enter the array elements: ");
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Unsorted array: ");
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");

//     for(i=0;i<n-1;i++){
//         min=i;
//         for(j=i+1;j<n;j++){
//             if(arr[j]<arr[min]){
//                 min = j;
//             }
//         }
//         temp = arr[i];
//         arr[i] = arr[min];
//         arr[min] = temp;
//     }
    
//     printf("Sorted array: ");
//     for(i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// Insertion Sort

// #include <stdio.h>

// int main() {
//     int arr[100], n, i,j,key;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("The Unsorted Array: ");
//     for (i = 0; i < n; i++) {
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");

//     for (i = 1; i < n; i++) {
//         key = arr[i];
//         j = i - 1;

//         // Move elements greater than key to one position ahead
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }

//     printf("Sorted array (Insertion Sort): ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


// Pattern 1
/*
1
2 3
4 5 6
7 8 9 10
*/

// #include <stdio.h>

// int main(){
//    int i,j,k=1;;
//    for(i=0;i<5;i++){
//       for(j=0;j<i;j++){
//          printf("%d ",k);
//          k++;
//       }
//       printf("\n");
//    }
   
//    return 0;
// }

// Pattern 2
/*
           A
         A B C
       A B C D E
     A B C D E F G
   A B C D E F G H I
*/

// #include <stdio.h>

// int main(){
//    int i,j,k;
//    for(i=0;i<6;i++){
//       int c=65;
//       for(j=0;j<2*(6-i)-1;j++){
//          printf(" ");
//       }
//       for(j=0;j<2*i - 1;j++){
//          printf("%c ",c);
//          c++;
//       }
//       printf("\n");
//    }
//    return 0;
// }


// Pattern 3
/*
        *           
      * * *         
    * * * * *       
  * * * * * * *     
* * * * * * * * *   
  * * * * * * *     
    * * * * *       
      * * *         
        *           
*/

// #include <stdio.h>

// int main() {
//     int n = 5,i,j,k;
    

//     // Outer loop to iterate through each row
//     for (i = 0; i < 2 * n - 1; i++) {

//         // assigning values to the comparator according to the row number
//         int comp;
//         if (i < n) 
//             comp = 2 * (n - i) - 1;
//         else
//             comp = 2 * (i - n + 1) + 1;

//         // First inner loop to print leading whitespaces
//         for (j = 0; j < comp; j++)
//             printf(" ");

//         // Second inner loop to print stars *
//         for (k = 0; k < 2 * n - comp; k++)
//             printf("* ");
//         printf("\n");
//     }

//     return 0;
// }



