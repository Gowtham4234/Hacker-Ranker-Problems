package Java;

import java.util.*;
public class Loop {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the Number:");
        int N = scanner.nextInt();  
        for(int i=1;i<=20;i++){
            System.out.println(N+" x "+i+" = "+i*N);
        }

        scanner.close();
    }
}