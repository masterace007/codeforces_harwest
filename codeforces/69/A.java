import java.util.*;
public class Main {
    public static void main(String args[]) {
        
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        int[] x = new int[test];
        int[] y = new int[test];
        int[] z = new int[test];
        int sumx = 0 , sumy = 0 , sumz = 0;
        
        for(int i = 0; i < test ; ++i)
        {
            x[i] = sc.nextInt();
            sumx = sumx + x[i];
            y[i] = sc.nextInt();
            sumy = sumy + x[i];
            z[i] = sc.nextInt();
            sumz = sumz + z[i];
        }
        
        if((sumx == 0) && (sumy == 0) && (sumz == 0))
        System.out.println("YES");
        else
        System.out.println("NO");
        
    }
}