class task1{
    public static void main( String[] args ){
		Point p = new Point();
		p.x = 2;
		p.y = 3;
		p.move(1,1);
		System.out.println(p.x + " " + p.y);
		p.mirror(0,0);
		System.out.println(p.x + " " + p.y);
		Point origin = new Point();
		origin.x = origin.y = 0;
		p.mirror(origin);
		System.out.println(p.x + " " + p.y);
		System.out.println( p.distance(origin) );
	}
}