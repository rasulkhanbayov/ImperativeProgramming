class Line{
    double a,b,c;
    boolean contains(Point p){
        return p.x * a + b * p.y == c;
    }

    boolean isParallelWith( Line that ){
		return (this.a * that.b == that.a * this.b);
	}

	boolean isOrthogonalTo( Line that ){
		return (this.a * that.a + this.b * that.b == 0);
	}

}