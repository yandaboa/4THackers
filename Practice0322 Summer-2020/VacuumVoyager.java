import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class VacuumVoyager{
    private static int[][] Array2d;
    public static void main(String[] args)throws IOException{
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer line = new StringTokenizer(input.readLine(), " ");
        int n = Integer.parseInt(line.nextToken());
        int given = Integer.parseInt(line.nextToken());
        Array2d = new int[n][n];
        for(int i = 0; i < n; i++){
            StringTokenizer line1 = new StringTokenizer(input.readLine(), " ");
            for(int j = 0; j < n; j++){
                Array2d[i][j] = Integer.parseInt(line1.nextToken());
            }
        }
        System.out.println(recursiveTraverse(0, 0, given));
    }

    private static int recursiveTraverse(int x, int y, int soFar){
        if(x >= Array2d.length || y >= Array2d.length || soFar <= 0){
            return -1;
        } else if (x == Array2d.length - 1 && y == Array2d.length - 1){
            return soFar;
        } else {
            soFar += Array2d[x][y];
            return Math.max(recursiveTraverse(x + 1, y, soFar), recursiveTraverse(x, y + 1, soFar));
        }
    }
}