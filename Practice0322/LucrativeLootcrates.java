import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class LucrativeLootcrates {
    public static void main(String[] args)throws IOException{
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer line = new StringTokenizer(input.readLine(), " ");
        int days = Integer.parseInt(line.nextToken());
        double min = Double.parseDouble(line.nextToken());
        double[] prices = new double[days];
        StringTokenizer line1 = new StringTokenizer(input.readLine());
        for(int i = 0; i < days; i++){
            prices[i] = Double.parseDouble(line1.nextToken());
        }
        Arrays.sort(prices);
        for(int i = 0; i < prices.length/2; i++){
            min -= (prices[prices.length - 1 - i] - prices[i]);
            if(min <= 0){
                System.out.println((i+1)*2);
                return;
            }
        }
    }
}
