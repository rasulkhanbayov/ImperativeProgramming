package circle;

import java.io.FileNotFoundException;

import circle.utils.Point;


public class Main {
    public static void main(String[] args) {
        Point center = new Point();
        Circle c1 = new Circle(center, 10, null);
        System.out.println(c1);

        c1.enlarge(3);
        //center.setX(5); // Circle konstruktorĂĄban this.center = new //  //Point(center); vs this.center = center;
        System.out.println(c1);
        c1.enlarge(2);
        System.out.println("circle's radius is " + c1.getRadius());

        try {
            //c1.saveToFile("");
            c1.saveToFile("copy1.txt");
            c1.saveToFile("copy2.txt");
            c1.saveToFile("copy3.txt");
        }
        catch (FileNotFoundException e) {
            System.err.println("Error: Unable to write file, " + e);
        }

        Circle c2 = Circle.readFromFile("in.txt");
        System.out.println(c2);
    }
}
