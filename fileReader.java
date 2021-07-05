i   ort java.io.*;
i   ort java.util.Scanner;

public class fileReader{
        public static void main(String ar[]) throws IOException{
        File f = new File("bank.txt");
        FileReader fr = new FileReader(f);
        int c=0;
        String s = "";
        while((c=fr.read())!=-1){
            s+= (char)c;
        }
        String[] lines = s.split("\n");
    }
}