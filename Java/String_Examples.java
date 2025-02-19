package Java;

public class String_Examples {
    public static void main(String[] args) {
        String s ="Hello World";
        System.out.println(s);
        System.out.println("--------------------------");
    
        StringBuilder s1 = new StringBuilder("Gowtham");
        System.out.println(s1);

        s1.append(" Hello");
        System.out.println(s1);

        s1.insert(7, "###");
        System.out.println(s1);

        s1.replace(10, 11, "***");
        System.out.println(s1);

        System.out.println(s1.capacity());

        System.out.println(s1.length());

        System.out.println(s1.isEmpty());

        s1.repeat("-",5);
        System.out.println(s1);
        
        s1.reverse();
        System.out.println(s1);

        s1.delete(0,5);
        System.out.println(s1);


    }

}
