import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class QuarantineQualms {
    public static void main(String[] args)throws IOException{
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer line = new StringTokenizer(input.readLine(), " ");
        int out = Integer.parseInt(line.nextToken());
        int in = Integer.parseInt(line.nextToken());
        int people = Integer.parseInt(input.readLine());
        int peopleMet = 0;
        for(int i = 0; i < people; i++){
            StringTokenizer line1 = new StringTokenizer(input.readLine(), " ");
            int hOut = Integer.parseInt(line1.nextToken());
            int hIn = Integer.parseInt(line1.nextToken());
            int diff = Math.min(in, hIn) - Math.max(out, hOut);
            if(diff >= 0){
                peopleMet += diff;
            }
        }
        System.out.println(Math.round((1.0-Math.pow(0.98, peopleMet))*100));
    }
}
