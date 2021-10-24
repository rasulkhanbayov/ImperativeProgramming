public class Circle {
    double x,y;
    double radius;
    void enlarge(int f){
        radius *= f;
    }
    double getArea(){
        return radius*radius*Math.PI;
    }
}