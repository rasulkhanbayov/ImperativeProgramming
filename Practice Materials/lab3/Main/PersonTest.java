package Main;

// import person.*;
import person.Gender;
import person.Person;

public class PersonTest {
    public static void main(String[] args) {
        Person a = new Person("Smith", "Joe", "doctor", Gender.MALE, 1945);
        Person b = new Person("Taylor", "Ann", "hairdresser", Gender.FEMALE, 1964);
        System.out.println(a);
        System.out.println(b);
        if (a.equals(b)) {
            System.out.println("Same person");
        } else {
            System.out.println("Not the same person");
        }
    }
}
