class task1{
    public static int factorial(int n){
        if (n==0) return 1;
        return n * factorial(n-1);
    }
    public static int factorial2(int n){
        int prod=1;
        for(int i =1;i<=n;i++){
            prod *= i;
        }
        return prod;
    }
    public static void main(String[] args) {
        // String x = System.console().readLine("Enter you name: ");
        // String x = args[0];
        // System.out.println("Hello " + x + "!");
        // int i;
        // for( i = 1; i <= 4; i++ ) {
        //     System.out.println(i/   2.0);
        // }
        // i = 4;
        // System.out.println("Altogether " + i + " numbers are printed!");
        
        // int from = Integer.parseInt(System.console().readLine("Enter first number: "));
        // int to = Integer.parseInt(System.console().readLine("Enter second number: "));
        
        // for(int i =from;i<=to;i++){
        //     System.out.println(i/2.0);
        // }
        
        // if(args.length != 2){
        //     System.err.println("Error");
        //     System.exit(-1);
        // }
        // else{
        //     int a = Integer.parseInt(args[0]);
        //     int b = Integer.parseInt(args[1]);
        //     System.out.println("a+b= " + (a+b));
        //     System.out.println("a-b= " + (a-b));
        //     System.out.println("a*b= " + (a*b));
        //     if(b!=0){
        //         System.out.println("a/b= " + (a/b));
        //         System.out.println("a%b= " + (a%b));
        //     }
        // }
        System.out.println(factorial(5));
        System.out.println(factorial2(5));
    }
}