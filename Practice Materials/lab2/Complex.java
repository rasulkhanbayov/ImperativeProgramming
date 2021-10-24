public class Complex {
    double re,im;
    double abs(){
        return Math.sqrt(re*re + im*im);
    }
    void add(Complex c){
        re += c.re;
        im += c.im;
    }
    void sub(Complex c){
        re -= c.re;
        im -= c.im;
    }
    void mul(Complex that){
        double new_re = this.re*that.re - this.im*that.im;
	    double new_im = this.re*that.im + this.im*that.re;
        re = new_re;
        im = new_im;
    }
}