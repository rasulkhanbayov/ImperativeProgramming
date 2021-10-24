package circle;

import circle.utils.Point;


public class Main {
    public static void main(String[] args) {
        Point center = new Point(3, 5);
        Circle c1 = new Circle(center, 10);
        System.out.println(c1);
        c1.enlarge(3);
        System.out.println(c1);
        c1.enlarge(2);
        System.out.println("circle's radius is " + c1.getRadius());
    }
}
