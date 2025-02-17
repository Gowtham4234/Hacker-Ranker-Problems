package Java;
import java.lang.*;

class Car {
    String model;

    // Constructor to initialize the object
    public Car(String model) {
        this.model = model;
        System.out.println("Car created: " + model);
    }

    // Method to display the model of the car
    public void display() {
        System.out.println("Car model: " + model);
    }

    // Override finalize() method to indicate when object is being garbage collected
    @SuppressWarnings("removal")
    @Override
    protected void finalize() throws Throwable {
        System.out.println("Cleaning up Car object: " + model);
        super.finalize();  // Call parent class finalize
    }
}

public class ObjectLifecycleExampl {
    public static void main(String[] args) {
        // Step 1: Object creation
        Car car1 = new Car(null);
        car1.display();  // Using the car object

      
        System.out.println("car1 is dereferenced and made eligible for garbage collection.");

        // Step 3: Request garbage collection
        System.gc();  // Request the JVM to perform garbage collection (this is just a request)
        
        // Wait for garbage collection to happen before finishing the program
        try {
            Thread.sleep(1000);  // Give time for GC to potentially run
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        // Step 4: End of program
        System.out.println("End of the main method.");
    }
}
