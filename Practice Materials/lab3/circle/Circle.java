package circle;

import circle.utils.Point;

public class Circle {
    private Point center;
    private double radius;

    public Circle(Point center, double radius) {
        this.center = center;
        this.radius = radius;
    }

    public Circle(double x, double y, double radius) {
        this.center = new Point(x, y);
        this.radius = radius;
    }

    public void enlarge(double f) {
        radius *= f;
    }

    public double getArea() {
        return Math.PI * radius * radius;
    }

    public double getRadius() {
        return radius;
    }

    public String toString() {
        return "(" + center.getX() + "," + center.getY() + "), r = " + radius;
    }
}
