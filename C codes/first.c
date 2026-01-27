// #include <stdio.h>
// #include <math.h>

//Function Prototype/declaration
// void printhello();

// int sum(int a,int b);

// void namaste();
// void bonjour();
// void areasquare(int side);
// void areacircle(int radius);
// void arearectangle(int b,int l);
// float convertTemp(int celsius);

// int sum(int n);
// int fact(int n);
// int fib(int n);

// pointer function
// void square(int n);
// void _square(int *n);
// void swap(int a, int b);
// void _swap(int *a, int *b);
// void doWork(int a,int b,int *sum,int *prod,int *avg);
// void maxoftwo(int *a,int *b);
// void alpha(char (*a));

// array function
// void printNumbers(int arr[],int n);
// int countOdd(int arr[],int n);
// void revarr(int arr[],int n);
// void printArr(int arr[],int n);

// String
// int countLength(char arr[]);

// int main() {
    // My first code
    // int number = 25;
    // char star = '*';
    // int age = 22;
    // float pi = 3.14;

    /*Hello
    everyone*/

    // int a = 30;
    // int A = 40;

    // int _age = 22;
    //  printf("Hello");
    //  printf("\tHello");
    //  printf("\nHello");

     // for input
    //  int ask;
    //  printf("enter age");
    //  scanf("%d", &ask);
    //  printf("age is : %d", ask);


    // Question
    
    // int a,b;
    // printf("Enter a: ");
    // printf("Enter b: ");
    // scanf("%d,%d", &a , &b);
    // int c = a + b;
    // printf("The sum of Two numbers: %d",c);
    // printf("The sum of Two numbers: %d",a*b);

    // Take marks of five subjects as input and print the sum and percentage.

    // double m1,m2,m3,m4,m5;
    // printf("Enter the Marks of 5 subjects: ");
    // scanf("%lf,%lf,%lf,%lf,%lf", &m1,&m2,&m3,&m4,&m5);
    // printf("The sum of all the marks is: %.0lf", m1+m2+m3+m4+m5);
    // printf("\nThe percentage of 5 subject marks is: %.2lf", ((m1+m2+m3+m4+m5)/5));
    // printf("%%");


    // printf("%f \n", 3/2);

    // int a = 1.99999;
    // printf("%d", a);

    // int x = 4*3/6*2;
    // printf("%d",x);

    // Relational Operators
    
    // printf("%d \n", 4==4);
    // printf("%d \n", 4<3);
    // printf("%d", 4!=3);

    // Logical Operator
    // printf("%d", !(4>6 || 5>6));

    // Assignment Operators
    // int a = 2;
    // int b = 4;
    // a+=1;
    // a+=b;
    // a-=b;
    // printf("%d", a);

    // char stars = "**";

    // int isSunday = 0;
    // int isSnowing = 1;

    // printf("%d", isSunday && isSnowing);

    // printhello();

    // int a,b;
    // scanf("%d,%d",&a,&b);
    // printf("%d",sum(a,b));

    // int n;
    // do{
    //     printf("Enter a number: ");
    //     scanf("%d",&n);
    //     printf("%d\n",n);
    //     if(n%2!=0){
    //         break;
    //     }
    // }while(1);
    // printf("Thank you");

    // int n;
    // do{
    //     printf("Enter a number: ");
    //     scanf("%d",&n);
    //     printf("%d\n",n);
    //     if(n%7==0){
    //         break;
    //     }
    // }while(1);
    // printf("Thank you");

    // print all odd numbers from 5 to 50.

    // for(int i=5; i<=50; i++){
    //     if(i%2==0){
    //         continue;
    //     }
    //     printf("%d\n",i);
    // }

    // Print reverse of the table for a number n.

    // for(int i = 10; i>=1; i--){
    //     int product = 2 * i;
    //     printf("2 x %d = %d\n",i,product);
    // }

    // Calc the sum of all numbers between 5 and 50 (including 5 and 50).

    // int sum = 0;
    // for (int i = 5;i<=50;i++){
    //     sum+=i;
    // }
    // printf("%d",sum);

    // Write a function that prints Namaste if user is Indian and Bonjour if the user is French.

    // char ch;
    // printf("Enter f for french and i for indian: ");
    // scanf("%c",&ch);

    // if(ch == 'i'){
    //     namaste();
    // }else{
    //     bonjour();
    // }

    // print square of given number.
    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    // double sqr = pow(n,2);
    // printf("%f",sqr);

    // int n;
    // int b;
    // int l;
    // int side;
    // int radius;
    // printf("Whose area you want to find: 1.Rectangle 2.Square 3.Circle");
    // scanf("%d",&n);

    // if(n==1){
    //     printf("Enter breadth: ");
    //     scanf("%d",&b);
    //     printf("Enter length: ");
    //     scanf("%d",&l);
    //     arearectangle(b,l);
    // }else if(n==2){
    //     printf("Enter side of square: ");
    //     scanf("%d",&side);
    //     areasquare(side);
    // }else if(n==3){
    //     printf("Enter radius of circle: ");
    //     scanf("%d",&radius);
    //     areacircle(radius);
    // }else{
    //     printf("Invalid entry");
    // }

    // recursion
    // printf("Sum is: %d",sum(5));

    // printf("Factorial is:%d",fact(10));
    // printf("%d",fib(6));

    // int celsius;
    // scanf("%f",&celsius);
    // printf("The temp in fahrenheit is:%f",convertTemp(celsius));

    // int num, sum = 0, digit;

    // printf("Enter an integer: ");
    // scanf("%d", &num);

    // // Make the number positive if it's negative
    // if (num < 0) {
    //     num = -num;
    // }

    // // Loop to extract and add each digit
    // while (num > 0) {
    //     digit = num % 10;     // Get the last digit
    //     printf("%d",digit);
    //     sum += digit;         // Add it to sum
    //     printf("\t%d",sum);
    //     num /= 10;            // Remove the last digit
    //     printf("\t%d\n",num);
    // }

    // printf("Sum of digits: %d\n", sum);

    // Pointer

    // int age = 23;
    // int *ptr = &age;
    // int _age = *ptr;// value at address of - *
    // printf("%d",age);
    // printf("\n%p",ptr);// for hexadecimal output of pointer address - %p
    // printf("\n%u",ptr);
    // printf("\n%p",&age);// address of - & 
    // printf("\n%u",&age);// %u for unsigned output
    // printf("\n%u",&ptr);
    // printf("\n%d",_age);

    // Pointer to pointer

    // int num = 73;
    // int *ptr = &num;
    // int **pptr = &ptr;
    // printf("%u\n",ptr);
    // printf("%u",pptr);

    // Question

    // int i = 5;
    // int *ptr = &i;
    // int **pptr = &ptr;
    // printf("%d",**pptr);

    // Pointer in Function Call
    // int number = 4;
    // square(number);
    // printf("The number:%d\n",number);
    // _square(&number);
    // printf("The number:%d\n",number);

    // int a = 5;
    // int b = 3;
    // swap(a,b);
    // printf("\nThe original number: %d,%d",a,b);
    // _swap(&a,&b);
    // printf("\nThe original number: %d,%d",a,b);

    // int a = 3,b=5;
    // int sum = 0;
    // int prod = 0;
    // int avg = 0;
    // doWork(a,b,&sum,&prod,&avg);
    // printf("The sum: %d",sum);
    // printf("\nThe product: %d",prod);
    // printf("\nThe avg:%d",avg);

    // int a=10;
    // int b=5;
    // maxoftwo(&a,&b);

    // char a[26];
    // alpha((&a));

    // Array
    // int marks[] = {97,98,89};
    // scanf("%d",&marks[0]);
    // printf("%d",marks[0]);
    // printf("%d",marks);
    // int marks[3];
    // printf("enter phy: ");
    // scanf("%d",&marks[0]);
    // printf("enter chem: ");
    // scanf("%d",&marks[1]);
    // printf("enter maths: ");
    // scanf("%d",&marks[2]);

    // printf("phy = %d, chem = %d, maths = %d",marks[0],marks[1],marks[2]);


    // float price[3];
    // printf("Enter first price: ");
    // scanf("%f",&price[0]);
    // printf("Enter second price: ");
    // scanf("%f",&price[1]);
    // printf("Enter third price: ");
    // scanf("%f",&price[2]);

    // printf("%f,%f,%f",price[0]+(0.18*price[0]),price[1]+(0.18*price[1]),price[2]+(0.18*price[2]));

    //Pointer Arithmatics

    // int age = 22;
    // int *ptr = &age;
    // printf("ptr = %u\n",ptr);
    // ptr++;
    // printf("ptr = %u\n",ptr);
    // ptr--;
    // printf("ptr = %u\n",ptr);

    // char star = '*';
    // char *ptr = &star;
    // printf("ptr = %u\n",ptr);
    // ptr++;
    // printf("ptr = %u\n",ptr);
    // ptr--;
    // printf("ptr = %u\n",ptr);

    // int num = 22;
    // int _num = 23;
    // int *ptr1 = &num;
    // int *ptr2 = &_num;
    // printf("%u\n",ptr1);
    // printf("%u\n",ptr2);
    // printf("diff = %u\n",ptr1-ptr2);
    // ptr2 = &num;
    // printf("comparision = %u\n",ptr1==ptr2);

    // int adhaar[5];
    // int *ptr = &adhaar[0];
    // //input
    // for(int i=0;i<5;i++){
    //     printf("%d index: ",i);
    //     scanf("%d",(ptr+i));
    // }
    // //output
    // for(int i=0;i<5;i++){
    //     printf("%d index = %d\n",i,*(ptr+i));
    // }

    // int arr[]={1,2,3,4,5,6,7,8,9,10};
    // printNumbers(arr,6);

    // 2 x 3
    // int marks[2][3];
    // marks[0][0] = 90;
    // marks[0][1] = 89;
    // marks[0][2] = 78;

    // marks[1][0] = 90;
    // marks[1][1] = 89;
    // marks[1][2] = 78;

    // printf("%d",marks[0][0]);

    // int arr[] = {1,2,3,4,5,6,7,8,9,10};
    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    // printf("The no.of odd numbers: %d",countOdd(arr,n));

    // int arr[]={1,2,3,4,5};
    // printf("%d\n",*(arr+2));
    // printf("%d",*(arr+5));

    // int arr[] = {1,2,3,4,5};
    // revarr(arr,5);
    // printArr(arr,5);

    // int n,i;
    // printf("Enter a number(n>2): ");
    // scanf("%d",&n);
    // int fib[n];
    // fib[0] = 0;
    // fib[1] = 1;
    // for(i=2;i<n;i++){
    //     fib[i] = fib[i-1]+fib[i-2];
    //     printf("%d\t",fib[i]);
    // }
    // printf("\n");

    // Strings

    // char name[] = {'H','I','T','E','E','N','\0'};
    // char name[] = "HITEN";

    // char class[] = "apna college";

    // char firstName[10];
    // char lastName[10];
    // int n=5,i,m=6;

    // scanf("%s",firstName);
    // scanf("%s",lastName);

    // printf("%s\n",firstName);
    // printf("%s\n",lastName);

    // for(i=0;firstName[i]!='\0';i++){
    //     printf("%c\n",firstName[i]);
    // }

    // for(i=0;lastName[i]!='\0';i++){
    //     printf("%c\n",lastName[i]);
    // }

    // char firstName[10];
    // scanf("%s",firstName);
    // printf("%s",firstName);

    // int fullName[100];
    // gets(fullName); //outdated and dangerous

    // fgets(fullName,10,stdin);

    // puts(fullName);

    // char *str = "Hello World";
    // puts(str);
    // str = "Hello";
    // puts(str);

    // char str[] = "Hello World";
    // str = "Hello";
    //cannot be redeclared

    // char name[100];
    // fgets(name,100,stdin);
    // printf("The length of array is: %d",countLength(name));

    

//     return 0;
// }

//Function Definition
// void printhello(){
//     printf("Hello");
// }

// int sum(int a, int b){
//     return a+b;
// }

// void namaste(){
//     printf("Namaste!");
// }
// void bonjour(){
//     printf("Bonjour!");
// }

// void areasquare(int side){
//     double area = pow(side,2);
//     printf("%.0f",area);
// }
// void areacircle(int radius){
//     float area = 22/7*pow(radius,2);
//     printf("%.2f",area);
// }
// void arearectangle(int b,int l){
//     printf("%d",b*l);
// } 

// float convertTemp(int celsius){
//     float fahrenheit = (celsius*0.018)+32;
//     return fahrenheit;
// }

// recursion
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     int sumNm1 = sum(n-1); //sum of 1 to n
//     int sumN = sumNm1 + n;
//     return sumN;
// }

// int fact(int n){
//     if(n==1 || n==0){
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int factN = factNm1 * n;
//     return factN;
// }

// Fibonacci sequence using recurssion

// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n-2);
//     int fibN = fibNm1 + fibNm2;
//     return fibN;
// }

// Pointer function definition

// void square(int n){
//     n =  n * n;
//     printf("The square: %d\n",n);
// }

// void _square(int *n){
//     *n = (*n) * (*n);
//     printf("square = %d\n",*n);
// }

// void swap(int a,int b){
//     printf("\nThe numbers before swapping: %d,%d\n",a,b);
//     int temp;
//     temp = a;
//     a=b;
//     b=temp;
//     printf("\nThe numbers after swapping: %d,%d",a,b);
// }

// void _swap(int *a,int *b){
//     printf("\nThe numbers before swapping: %d,%d\n",*a,*b);
//     int temp;
//     temp = *a;
//     *a=*b;
//     *b=temp;
//     printf("\nThe numbers after swapping: %d,%d",*a,*b);
// }

// void doWork(int a,int b,int *sum,int *prod,int *avg){
//     *sum = a + b;
//     *prod = a*b;
//     *avg = (a+b)/2;
// }

// void maxoftwo(int *a ,int *b){
//     if(*a>*b){
//         printf("%d is greater",*a);
//     }else{
//         printf("%d is greater",*b);
//     }
// }

// void alpha(char (*a)){
//     // char alph[] = "abcdefghijklmnopqrstuvwxyz";
//     char c;
//     for(c = 'A'; c <= 'Z'; c++){
//         *a = c;
//         printf("%c\n",*a);
//     }
// }

// Array 

// void printNumbers(int arr[],int n){
// void printNumbers(int *arr,int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }

// int countOdd(int arr[],int n){
//     int count = 0,i;
//     for(i=0;i<n;i++){
//         if(arr[i]%2!=0){
//             count++;
//         }
//     }
//     return count;
// }

// void revarr(int arr[],int n){
//     int i,temp;
//     for(i=0;i<(n/2);i++){
//         temp = arr[i];
//         arr[i] = arr[n-1-i];
//         arr[n-1-i] = temp;
//     }
// }

// void printArr(int arr[],int n){
//     int i;
//     for(i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }

// int countLength(char arr[]){
//     int i,count = 0;
//     for(i=0;arr[i]!='\0';i++){
//         count++;
//     }
//     return count-1;
// }


// #include <stdio.h>
// #include <string.h>

// int main(){
//     // char str1[] = "Apple";
//     // char str2[] = "Banana";
//     // printf("%d",strcmp(str1,str2));
//     char str3[] = "HHHA";
//     char str4[] = "HHHB";
//     printf("%d",strcmp(str3,str4));
//     return 0;
// }

// fgets() logic
// #include <stdio.h>

// int main(){
//     char str[100];
//     char ch;
//     int i=0;

//     while(ch != '\n'){
//         scanf("%c",&ch);
//         str[i] = ch;
//         i++;
//     }
//     printf("%s",str);
//     return 0;
// }

// void countvow(char str[]);

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char str[100];
//     printf("Enter the string: ");
//     gets(str);
//     countvow(str);
//     return 0;
// }

// void countvow(char str[]){
//     int i,count=0;
//     for(i=0;i<strlen(str);i++){
//         if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
//             count++;
//         }
//     }
//     printf("The total occurrence of vowel is: %d",count);
// }


// Structure

// #include <stdio.h>
// #include <string.h>

// int main(){
//     struct student{
//         char name[100];
//         int roll;
//         float cgpa;
//     };

//     struct student s1;
//     // s1.name = "Hiten Ranjan";  ( wrong way )
//     s1.roll = 30;
//     s1.cgpa = 7.5;
//     strcpy(s1.name,"Hiten Ranjan");
//     return 0;
// }   

// #include <stdio.h>
// #include <string.h>

// struct student{
//     int roll;
//     float cgpa;
//     char name[200];
// };

// int main(){
//     struct student ece[100];
//     ece[0].roll = 1664;
//     ece[0].cgpa = 7.5;
//     strcpy(ece[0].name,"Hiten");
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// struct student{
//     int roll;
//     float cgpa;
//     char name[200];
// };

// int main(){
//     struct student s1 = {1664,7.5,"Hiten"};
//     printf("Student Roll: %d\n",s1.roll);

//     struct student *ptr = &s1;

//     printf("Student roll = %d",(*ptr).roll);
//     return 0;
// }

// #include <stdio.h>

// struct student{
//     int roll;
//     float cgpa;
//     char name[200];
// };

// int main(){
//     struct student s1 = {30,7.5,"Hiten"};
//     struct student *ptr = &s1;

//     printf("The student roll no: %d\n",ptr->roll);
//     printf("The student roll no: %f\n",ptr->cgpa);
//     printf("The student roll no: %s\n",ptr->name);
//     return 0;
// }

// #include <stdio.h>

// struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// };

// void printfInfo(struct student s1);


// int main(){
//     struct student s1 = {30,7.5,"Hiten"};
//     printfInfo(s1);
//     return 0;
// }

// void printfInfo(struct student s1){
//     printf("\n--- Student Info ---\n");
//     printf("Student Roll No: %d\n",s1.roll);
//     printf("Student CGPA: %f\n",s1.cgpa);
//     printf("Student Name: %s\n",s1.name);
// }

// #include <stdio.h>

// typedef struct computersciencestudent{
//     int roll;
//     float cgpa;
//     char name[100];
// }cse;

// int main(){
//     cse s1;
//     s1.roll = 21;
//     s1.cgpa = 7.5;
//     strcpy(s1.name,"Hiten");

//     printf("Student name: %s",s1.name);
//     return 0;
// }

// #include <stdio.h>

// struct vector{
//     int x;
//     int y;
// };

// void calcSum(struct vector v1, struct vector v2, struct vector sum);

// struct complx{
//     int real;
//     int img;
// };



// int main(){
//     // struct vector v1 = {5,10};
//     // struct vector v2 = {3,7};
//     // struct vector sum = {0};

//     // calcSum(v1,v2,sum);
    
//     struct complx num1 = {5,8};
//     struct complx *ptr = &num1;

//     printf("The real part of complex number: %d\n",ptr->real);
//     printf("The imagenary part of complex number: %d\n",ptr->img);
//     return 0;
// }

// void calcSum(struct vector v1, struct vector v2, struct vector sum){
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;

//     printf("The sum of x is: %d\n",sum.x);
//     printf("The sum of y is: %d",sum.y);

// }

// #include <stdio.h>

// typedef struct BankAccount{
//     char name[100];
//     int AccNo;
// }BA;

// int main(){
//     BA b1 = {"Hiten",263};
//     BA b2 = {"Ranjan",253};
//     BA b3 = {"Keshari",733};

//     printf("Acc No: %d\n",b1.AccNo);
//     printf("Name of Acc Holder: %s\n",b1.name);

//     return 0;
// }



// File I/O

// #include <stdio.h>

// int main(){
//     FILE *fptr;
    // fptr = fopen("a.txt","r");
    // if(fptr == NULL){
    //     printf("File does not exists\n");
    // }else{
    //     fclose(fptr);
    // }

    // For Reading

    // char ch;
    // fscanf(fptr,"%c",&ch);
    // printf("Character: %c",ch);
    // int num;
    // fscanf(fptr,"%d",&num);
    // printf("Character: %d",num);
    // fclose(fptr);

    // For  Writing

    // fptr = fopen("a.txt","w");
    // char ch = 'A';
    // fprintf(fptr,"%c",ch);
    // fprintf(fptr,"%c",'P');
    // fprintf(fptr,"%c",'P');
    // fprintf(fptr,"%c",'L');
    // fprintf(fptr,"%c",'E');
    // fclose(fptr);

    // For Appending

    // fptr = fopen("a.txt","a");
    // char ch = 'A';
    // fprintf(fptr,"%c",ch);
    // fprintf(fptr,"%c",'P');
    // fprintf(fptr,"%c",'P');
    // fprintf(fptr,"%c",'L');
    // fprintf(fptr,"%c",'E');
    // fclose(fptr);

    // For Reading

    // fptr = fopen("a.txt","r");
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));

    // For Writing

    // fptr = fopen("a.txt","w");
    // fputc('M',fptr);    
    // fputc('A',fptr);    
    // fputc('N',fptr);    
    // fputc('G',fptr);    
    // fputc('O',fptr);
    // fclose(fptr);


    // fptr = fopen("a.txt","r");
    // char ch;
    // ch = fgetc(fptr);
    // while(ch != EOF){
    //     printf("%c",ch);
    //     ch = fgetc(fptr);
    // }
    // printf("\n");

    // fptr = fopen("a.txt","w");
    // char name[100];
    // int age;
    // float cgpa;

    // printf("\n--- Student Information ---\n");

    // printf("Enter Your Name: ");
    // scanf("%s",name);
    // printf("Enter your age: ");
    // scanf("%d",&age);
    // printf("Enter your CGPA: ");
    // scanf("%f",&cgpa);

    // fprintf(fptr,"student name: %s\n",name);
    // fprintf(fptr,"student age: %d\n",age);
    // fprintf(fptr,"student CGPA: %.2f\n",cgpa);
    
    // fclose(fptr);

//     return 0;
// }

// Dynamic Memory Allocation

// malloc Function

// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *ptr;
//     int i;
//     ptr = (int *) malloc(5 * sizeof(int));

//     for(i=0;i<5;i++){
//         ptr[i] = 2*i + 1;
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     float *ptr;
//     int i;
//     ptr =(float *) malloc(5 * sizeof(float));

//     for(i=0;i<5;i++){
//         printf("Enter price %d: ",i+1);
//         scanf("%f",&ptr[i]);
//     }

//     printf("The 5 prices are: \n");
//     for(i=0;i<5;i++){
//         printf("%.2f\n",ptr[i]);
//     }
//     return 0;
// }

// calloc function

// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     float *ptr;
//     int i;
//     ptr = (float *) calloc(5 , sizeof(float));

//     for(i=0;i<5;i++){
//         printf("%f\n",ptr[i]);
//     }
//     return 0;
// }   

// free(ptr) function

// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     float *ptr;
//     int i;
//     ptr = (float *) calloc(5 ,sizeof(float));

//     for(i=0;i<5;i++){
//         printf("%f\n",ptr[i]);
//     }

//     free(ptr);

//     ptr = (float *) calloc(2 ,sizeof(float));

//     for(i=0;i<2;i++){
//         printf("%f\n",ptr[i]);
//     }

//     return 0;
// }   

// realloc() function

// can increase or decrease the memory 

// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     float *ptr;
//     int i;
//     ptr = (float *) calloc(5,sizeof(float));

//     for(i=0;i<5;i++){
//         printf("Enter the %d number: ",i+1);
//         scanf("%f\n",&ptr[i]);
//     }
//     printf("\n");
//     for(i=0;i<5;i++){
//         printf("%f\n",ptr[i]);
//     }
//     ptr = (float *) realloc(ptr,8);
//     for(i=0;i<8;i++){
//         printf("Enter the %d number: ",i+1);
//         scanf("%f\n",&ptr[i]);
//     }

//     return 0;
// }

