package stringutils;

public class Iterletter{
    private String str;
    private int counter;

    public Iterletter(String str){
        if(str == null){
            throw new IllegalArgumentException();
        }
        this.str = str;
        this.counter = 0;
    }

    public void restart(){
        counter=0;
    }

    public void printNext(){
        if(hasNext()){
            System.out.println(str.charAt(counter++));
        }
    }
    public boolean hasNext(){
        return this.counter < str.length();
    }

}