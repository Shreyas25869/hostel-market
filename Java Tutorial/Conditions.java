// import java.util.*;

// public class Conditions {
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
//         int age = sc.nextInt();

//         if(age >= 18){
//             System.out.println("Adult");
//         } else {
//             System.out.println("Not Adult");
//         }
//     }
// }

// public class Conditions{
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
//         int a = sc.nextInt();
//         int b = sc.nextInt();
        
//         if(a == b){
//             System.out.println("Equal");
//         } else if(a > b){
//             System.out.println("a is greater");
//         }else {
//             System.out.println("b is greater");
//         }
//     }
// }

// public class Conditions{
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
//         int button = sc.nextInt();    

//         // if(button == 1){
//         //     System.out.println("Hello");
//         // }else if(button == 2){
//         //     System.out.println("Namaste");
//         // } else if(button == 4){
//         //     System.out.println("Bonjour");
//         // }else {
//         //     System.out.println("Pls print no. between 1 to 3");
//         // }

//         // switch(button){
//         //     case 1: System.out.println("hello");
//         //     break;
//         //     case 2: System.out.println("Namaste");
//         //     break;
//         //     case 3: System.out.println("Bonjour");
//         //     break;
//         //     default: System.out.println("Invalid Number");
//         }
//     }
// }

// import java.util.*;

// public class Conditions{
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
//         System.out.println("Select your process:");
//         System.out.println("1. Addition");
//         System.out.println("2. Substraction");
//         System.out.println("3. Multiply");
//         System.out.println("4. Divide");
//         int num = sc.nextInt();
//         int a = sc.nextInt();
//         int b = sc.nextInt();
//         int sum = 0;
//         if(num == 1){
//             sum = a + b;
//             System.out.println(sum);
//         } else if(num == 2){
//             if(a == b){
//                 sum = a - b;
//                 System.out.println(sum);
//             } else if(a > b){
//                 sum = a - b;
//                 System.out.println(sum);
//             } else {
//                 sum = b - a;
//                 System.out.println(sum);
//             }
//         } else if(num == 3){
//             sum = a * b;
//             System.out.println(sum);
//         } else if(num == 4){
//             if(a == b){
//                 sum = 1;
//                 System.out.println(sum);
//             } else if(a > b){
//                 sum = a / b;
//                 System.out.println(sum);
//             } else if(a < b){
//                 sum = b / a;
//                 System.out.println(sum);
//             }else {
//                 System.out.println("Invalid Number");
//             }
//         }
        
//     }
// }