package Java;
import java.lang.*;

public class ClassLoaderExample {
    public static void main(String[] args) {
        System.out.println("This is a ClassLoader Example");

        try {
            Class<?> loadedClass = Class.forName("java.lang.String");  
            System.out.println("Class loaded: " + loadedClass.getName());
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }
    }
}
