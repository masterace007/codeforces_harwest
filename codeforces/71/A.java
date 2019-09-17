import java.util.*;
public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-- > 0)
        {
            String str =  sc.next();
            int num = str.length() - 2;
            char ch = str.charAt(0);
            char ch1 = str.charAt(str.length()-1);
            if(str.length() > 10)
            {
            System.out.print(ch);
            System.out.print(num);
            System.out.print(ch1);
            System.out.println();
            }
            else
            System.out.println(str);
        }
    }
}