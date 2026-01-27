//For loop
// public class Loops {
//     public static void main(String args[]){
//         // for(int counter = 0; ; counter = counter + 1){
//         //     System.out.println("Hello World");
//         // }
//         for(int i = 0; i < 11; i++){
//             System.out.println(i);
//         }
//     }
// }


//While loop

// public class Loops{
//     public static void main(String args[]){
//         int i = 0;
//         while(i < 11){
//             System.out.println(i);
//             i = i + 1; // i++;
//         }
//     }
// }

// import java.util.*;

// public class Loops{
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         int m = sc.nextInt();



        // // for(int i = 0; i <= n; i++){
        // //     sum = sum + i;
        // // }
        // // System.out.println(sum);

        
        // for(int i = 1; i < 11; i++){
        //     System.out.println(i*n);
        // }
            

        //Solid Rectangle

        // for(int i = 1; i <= 4; i++){
        //     for(int j = 1; j <= 5; j++){
        //         System.out.print("*");
        //     }
        //     System.out.println();
        // }

        //Hollow Rectangle

        //outer loop
        // for(int i = 1; i <= n; i++){
        //     //inner loop
        //     for(int j = 1; j <= m; j++){

        //         if(i == 1 || i == n || j == 1 || j == m){
        //             System.out.print("*");
        //         }else{
        //             System.out.print(" ");
        //         }
        //     }
        //     System.out.println();
        // }


        //Half Pyramid

        // for(int i = 1; i <= n; i++){
        //     for(int j = 1; j <= i; j++){
        //         System.out.print("*");
        //     }
        //     System.out.println();
        // }

        //Inverted Half Pyramid

        // for(int i = 1; i <= n; i++){
        //     for(int j = n; j >= i; j--){
        //         System.out.print("*");
        //     }
        //     System.out.println();
        // }

        //Inverted Half Pyramid (rotated by 180deg)

        // for(int i = 1; i <= n; i++){
        //     for(int j = 1; j <= n-i; j++){
        //         System.out.print(" ");
        //     }
        //     for(int j = 1; j <= i; j++){
        //         System.out.print("*");
        //     }
        //     System.out.println();
        // }

        //Half Pyramid With Numbers

        // for(int i = 1; i <= n; i++){
        //     for(int j = 1; j <= i; j++){
        //         System.out.print(j + " ");
        //     }
        //     System.out.println();
        // }

        //Inverted Half Pyramid with Numbers

        // for(int i = 0; i <= n; i++){
        //     for(int j = 1; j <= n-i; j++){
        //         System.out.print(j);
        //     }
        //     System.out.println();
        // }

        //Floyd's Triangle

        // int number = 1;
        // for(int i = 1; i <= n; i++){
        //     for(int j = 1; j <= i; j++){
        //         System.out.print(number + " ");
        //         number++;
        //     }
        //     System.out.println();
        // }

        //0-1 Triangle

        // for(int i=1; i<=n; i++){
        //     for(int j=1; j<=i; j++){
        //         if((i+j) % 2 == 0){
        //             System.out.print("1 ");
        //         }else{
        //             System.out.print("0 ");
        //         }
        //     }
        //     System.out.println();
        // }

        //Butterfly Pattern

        // //upper half
        // for(int i=1; i<=n; i++){
        //     //first part
        //     for(int j=1; j<=i; j++){
        //         System.out.print("*");
        //     }
        //     //spaces
        //     for(int j = 1; j<=2*(n-i); j++){
        //         System.out.print(" ");
        //     }
        //     //second part
        //     for(int j=1; j<=i; j++){
        //         System.out.print("*");
        //     }
        //     System.out.println();
        // }
        // //lower half
        // for(int i=n; i>=1; i--){
        //     //first part
        //     for(int j=i; j>=1; j--){
        //         System.out.print("*");
        //     }
        //     //spaces
        //     for(int j = 2*(n-i); j>=1; j--){
        //         System.out.print(" ");
        //     }
        //     //second part
        //     for(int j=i; j>=1; j--){
        //         System.out.print("*");
        //     }
        //     System.out.println();
        // }

        //Solid Rhombus

        // for(int i=1; i<=n; i++){

        //     //first space
        //     for(int j=n-i; j>=0; j--){
        //         System.out.print(" ");
        //     }

        //     //star region
        //     for(int j=1; j<=n; j++){
        //         System.out.print("*");
        //     }

        //     //second space
        //     for(int j=0; j<=n-i; j++){
        //         System.out.print(" ");
        //     }
        //     System.out.println();
        // }


        //Number Pyramid

        // for(int i=1; i<=n; i++){
        //     for(int j=n-i; j>=0; j--){
        //         System.out.print(" ");
        //     }

        //     for(int j=1; j<=i; j++){
        //         System.out.print(i+" ");
        //     }
        //     System.out.println();
        // }

        //Palindromic Pattern

        // for(int i=1; i<=5; i++){
        //     for(int j=n-i; j>=0; j--){
        //         System.out.print(" ");
        //     }

        //     for(int j=i; j>=1; j--){
        //         System.out.print(j);
        //     }

        //     for(int j=2; j<=i; j++){
        //         System.out.print(j);
        //     }
        //     System.out.println();
        // }

        //Diamond Pattern
        
        // for(int i=1; i<=4; i++){
        //     for(int j=n-i; j>=0; j--){
        //         System.out.print(" ");
        //     }
        //     for(int j=1; j<=i; j++){
        //         System.out.print("*");
        //     }

        //     for(int j=2; j<=i; j++){
        //         System.out.print("*");
        //     }
        //     System.out.println();
        // }
        // for(int i=4; i>=1; i--){
        //     for(int j=n-i; j>=0; j--){
        //         System.out.print(" ");
        //     }
        //     for(int j=1; j<=i; j++){
        //         System.out.print("*");
        //     }

        //     for(int j=2; j<=i; j++){
        //         System.out.print("*");
        //     }
        //     System.out.println();
        // }
//     }
// }