public class task3 {
    public static void main( String[] args ){
		Line e = new Line(), f = new Line();
		e.a = Double.parseDouble(args[0]);
		e.b = Double.parseDouble(args[1]);
		e.c = Double.parseDouble(args[2]);
		f.a = Double.parseDouble(args[3]);
		f.b = Double.parseDouble(args[4]);
		f.c = Double.parseDouble(args[5]);
		System.out.println( e.isParallelWith(f) );
		System.out.println( e.isOrthogonalTo(f) );
	}

}