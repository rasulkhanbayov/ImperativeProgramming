public class Point {
    private double x, y;

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public Point(Point that) {
        this.x = that.x;
        this.y = that.y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public void move(double dx, double dy) {
        x += dx;
        y += dy;
    }

    public void mirror(double cx, double cy) {
        x = 2 * cx - x;
        y = 2 * cy - y;
    }

    public void mirror(Point that) {
        x = 2 * that.x - x;
        y = 2 * that.y - y;
    }

    public double distance(Point that) {
        double dx = x - that.x;
        double dy = y - that.y;
        return Math.sqrt(dx*dx + dy*dy);
    }

    public String toString() {
        return "(" + x + "," + y + ")";
    }

    public static Point centerOfMass(Point[] arr) {
        double center_x = 0, center_y = 0;
        for (int i = 0; i < arr.length; ++i) {
            center_x += arr[i].getX();
            center_y += arr[i].getY();
        }
        center_x /= arr.length;
        center_y /= arr.length;

        return new Point(center_x, center_y);
    }

}
