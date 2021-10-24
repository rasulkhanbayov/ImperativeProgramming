public class task2 {
    public static void main(String[] args) {
        Complex num1 = new Complex();
        num1.re = 3;
        num1.im = -2;

        Complex num2 = new Complex();
        num2.re = 1;
        num2.im = 4;

        System.out.println("abs(3 - 2i) = " + num1.abs());

        System.out.print("("+ num1.re + " + " + num1.im + "i)");
	System.out.print(" + ");
        System.out.print("("+ num2.re + " + " + num2.im + "i)");
	System.out.print(" = ");
        num1.add(num2);
        System.out.println( num1.re + " + " + num1.im + "i" );

        System.out.print("("+ num1.re + " + " + num1.im + "i)");
	System.out.print(" - ");
        System.out.print("("+ num2.re + " + " + num2.im + "i)");
	System.out.print(" = ");
        num1.sub(num2);
        System.out.println( num1.re + " + " + num1.im + "i" );

        System.out.print("("+ num1.re + " + " + num1.im + "i)");
	System.out.print(" * ");
        System.out.print("("+ num2.re + " + " + num2.im + "i)");
	System.out.print(" = ");
        num1.mul(num2);
        System.out.println( num1.re + " + " + num1.im + "i" );

    }

}