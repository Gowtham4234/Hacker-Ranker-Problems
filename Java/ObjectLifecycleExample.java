package Java;
import java.lang.*;
class Car {
    String model;

    public Car(String model) {
        this.model = model;

        System.out.println("Model"+model);
    }

    @SuppressWarnings("removal")
    @Override
    protected void finalize() throws Throwable {
        System.out.println("Cleaning up Car object: " + model);
        super.finalize();
    }
}

public class ObjectLifecycleExample {
    public static void main(String[] args) {
        Car car1 = new Car("Toyota");
        Car car2 = new Car("Honda");

        // Dereferencing the first object
    

        // Manually request garbage collection (JVM may not honor this immediately)
        System.gc();

        // car2 is still referenced, so it won't be garbage collected yet.
        System.out.println("Main method completed.");
    }
}
