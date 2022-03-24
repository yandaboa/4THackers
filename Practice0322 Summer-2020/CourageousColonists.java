import java.io.BufferedReader;
import java.io.IOError;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class CourageousColonists {
    public static void main(String[] args)throws IOException{
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer line = new StringTokenizer(input.readLine(), " ");
        int[] resources = new int[5];

        //sheep = 0, wood = 1, brick = 2, ore = 3, wheat = 4
        resources[0] = Integer.parseInt(line.nextToken());
        resources[1] = Integer.parseInt(line.nextToken());
        resources[2] =Integer.parseInt(line.nextToken());
        resources[3] = Integer.parseInt(line.nextToken());
        resources[4] = Integer.parseInt(line.nextToken());
        int points = 0;
        int settles = 0;
        if(resources[0] >= 1 && resources[1] >= 1 && resources[2] >= 1 && resources[4] >= 1){
            points = 1;
            settles = 1;
            resources[0]--;
            resources[1]--;
            resources[2]--;
            resources[4]--;
        }
        while(resources[0] >= 1 && resources[1] >= 3 && resources[2] >= 3 && resources[4] >= 1){
            points++;
            settles++;
            resources[0] -= 1;
            resources[1] -= 3;
            resources[2] -= 3;
            resources[4] -= 1;
        }
        if(resources[0] >= 3 && resources[3] >= 3 && resources[4] >= 3){
            points += 2;
            resources[0] -= 3;
            resources[3] -= 3;
            resources[4] -= 3;
        }
        while(resources[3] >= 3 && resources[4] >= 2 && settles >= 1){
            points++;
            settles--;
            resources[3] -= 3;
            resources[4] -= 2;
        }
        System.out.println(points);
    }
}
