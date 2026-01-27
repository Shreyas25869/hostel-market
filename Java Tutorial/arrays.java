public class arrays {
    public static void main(String args[]){
        // two ways to define array.
        // this way is when we don't know the actual size of array
        // int[] marks = new int[10];
        // int marks[] = new int[3]; 
        // marks[0] = 97;
        // marks[1] = 98;
        // marks[2] = 95;
        // System.out.println(marks[0]);
        // System.out.println(marks[1]);
        // System.out.println(marks[2]);
        //we can insert loops for printing this print statement. Like:
        //one int takes 4 bytes in a 64 bit pc

        // for(int i=0; i<=2; i++){
        //     System.out.println(marks[i]);
        // }
        // In this way we know the size of array

        int marks[] = {97, 98, 95};

        for (int i=0; i<=2; i++){
            System.out.println(marks[i]);
        }
    }
}
