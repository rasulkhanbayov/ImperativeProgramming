import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class task5 {
    public static void main(String[] args) {
        if(args.length != 1){
            System.err.println("Invalliddi");
        }
        String inputFile = args[0];
        String textToFind = System.console().readLine("Enter the text you want to find: ");

        countAppearances(inputFile,textToFind);
    }

    public static void countAppearances(String inputFile, String textToFind){
        File in = new File(inputFile);
        try (Scanner sc = new Scanner(in)){
            int count = 0;
            while(sc.hasNextLine()){
                String Line = sc.nextLine();
                if(Line.contains(textToFind)){
                    count++;
                }
            }
            System.out.println("'" + textToFind + "' appeared in " +
            count + " lines.");

        }catch (FileNotFoundException e) {
            System.err.println("The file cannot be opened.");
        }

    }
}