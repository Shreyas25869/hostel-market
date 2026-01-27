// import java.util.Scanner;
// import java.lang.Math;

// public class Questions {

    // public static float avg(int a,int b,int c){
    //     float avg = (a+b+c)/3;
    //     return avg;
    // }

    // public static void sumOdd(int n){
    //     int sum=0;
    //     for(int i = 1; i<=n; i++){
    //         if(i % 2 != 0){
    //             sum = sum + i;
    //         }
    //     }
    //     System.out.print(sum);
    // }

    // public static void greater(int a ,int b){
    //     if(a>b){
    //         System.out.println(a);
    //     }else if(b>a){
    //         System.out.println(b);
    //     }
    // }

    // public static double circum(float r){
    //     return 2*22.7*r ;
    // }

    // public static void voter(int age){
    //     if(age>18){
    //         System.out.println("Eligible to vote");
    //     }else{
    //         System.out.println("Note eligible to vote");
    //     }
    // }

    // public static void power(int x,int n){
    //      double result = Math.pow(x,n);
    //      System.out.println(result);
    // }

    // public static void gcd(int a, int b){
    //     while(a != b){
    //          if(a>b) {
    //            a = a - b;
    //        } else {
    //             b = b - a;
    //        }
    //     }
    //     System.out.println("GCD is: " + b);
    // }


    // public static void main(String args[]){
    //     Scanner sc = new Scanner(System.in);

        //average
        // int a = sc.nextInt();
        // int b = sc.nextInt();
        // int c = sc.nextInt();

        // System.out.println(avg(a,b,c));

        //sum of odd number
        // int n = sc.nextInt();
        // sumOdd(n);

        //greater of two numbers
        // int a = sc.nextInt();
        // int b = sc.nextInt();
        // greater(a, b);

        //circumference of circle
        // float r = sc.nextFloat();
        // System.out.println(circum(r));

        //eligible to vote
        // int age = sc.nextInt();
        // voter(age);

        //Infinite Loop

        // int num = 1;
        // do{
        //     System.out.println("Hello World");
        // }while(num > 0);

        //no.of zero,positive,negative entered

        // System.out.print("how many number you want: ");
        // int num = sc.nextInt();
        // int countc = 0;
        // int countz = 0;
        // int countp = 0;
        // int countn = 0;
        // do{
        //     int nums = sc.nextInt();
        //     if(nums==0){
        //         countz++;
        //     }else if(nums>0){
        //         countp++;
        //     }else{
        //         countn++;
        //     }
        //     countc++;
        // }while(countc <= num-1);

        // System.out.println(countz);
        // System.out.println(countp);
        // System.out.println(countn);

        //two numbers one raised to another

        // int x = sc.nextInt();
        // int n = sc.nextInt();
        // power(x,n);

        //Greatest Common Factor

        // int a = sc.nextInt();
        // int b = sc.nextInt();
        // gcd(a, b);


        //Fabonacci Series

        // int n = sc.nextInt();
        // int sum = 0;
        // int num = 1;
        // int num2 = 1;
        // System.out.print(sum + " ");
        // for(int i = 2; i<=n; i++){
        //     num2 = sum;
        //     sum = sum + num;
        //     num = num2;

        //     System.out.print(sum + " ");
        // }
//     }
// }
