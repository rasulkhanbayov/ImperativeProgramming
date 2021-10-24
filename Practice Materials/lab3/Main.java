import stringutils.Iterletter;

public class Main {
    public static void main(String[] args) {
        Iterletter it = new Iterletter("hello");
        it.printNext();
        it.printNext();
        it.restart();
        while (it.hasNext()) {
            it.printNext();
        }
    }
}