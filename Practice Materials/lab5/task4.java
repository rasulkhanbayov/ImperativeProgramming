import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;

public class task4 {
    public static void main(String[] args) {
        if(args.length != 2){
            throw new IllegalArgumentException();
        }
        String inputFile = args[0]; 
        String outputFile = args[1]; 
        
        summarize(inputFile,outputFile);
    }
    
    private static void summarize(String inputFile, String outputFile) {
        File in = new File(inputFile);
        File out = new File(outputFile);

        try(BufferedReader br = new BufferedReader(new FileReader(in));
            PrintWriter pw = new PrintWriter(out)){
                String line;
                while((line =  br.readLine()) != null){
                    String[] parts = line.split(",");
                    int sum =0;
                    for(String n : parts){
                        int i = Integer.parseInt(n);
                        sum += i ;
                    }
                    pw.println(sum);
                }

            }catch(IOException e){
                System.err.println(e.getMessage());
            }
    }
}