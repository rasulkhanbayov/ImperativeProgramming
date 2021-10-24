public class task1 {
    public static void main(String[] args) {
        Point[] arr = new Point[3];

        for (int i = 0; i < 3; ++i) {
            System.out.print("Enter x = " );
            double x = Double.parseDouble(System.console().readLine());
            System.out.print("Enter y = " );
            double y = Double.parseDouble(System.console().readLine());

            arr[i] = new Point(x, y);
        }

        Point center = Point.centerOfMass(arr);
        System.out.println("center of mass: " + center);
    }
}