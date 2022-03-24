import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class SleepySpider {
    public static void main(String[] args)throws IOException{
        BufferedReader input = new  BufferedReader(new InputStreamReader(System.in));
        int days = Integer.parseInt(input.readLine());
        int[] surfaces = new int[6];
        int[] delayedSurfaces = new int[6];
        StringTokenizer line = new StringTokenizer(input.readLine(), " ");
        for(int i = 0 ; i < 6; i++){
            int a = Integer.parseInt(line.nextToken());
            surfaces[i] = a;
            delayedSurfaces[i] = a;
        }
        for(int i = 0; i < days; i++){
            for(int j = 0; j < 5; j++){
                if(delayedSurfaces[j] > delayedSurfaces[j + 1]){
                    surfaces[j + 1] += surfaces[j]/2;
                    surfaces[j] -= surfaces[j]/2;
                }
            }
            if(delayedSurfaces[5] > delayedSurfaces[0]){
                surfaces[0] += surfaces[5]/2;
                surfaces[5] -= surfaces[5]/2;
            }
            for(int j = 0; j < 6; j++){
                delayedSurfaces[j] = surfaces[j];
            }
        }
        for(int i = 0; i < 6; i++){
            System.out.println(surfaces[i]);
        }
    }
}