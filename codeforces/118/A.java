import java.util.*;
public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        char[] ch = new char[300];
        int k =0;
        
        for(int i = 0; i < str.length() ; ++i)
        {
            if((str.charAt(i)=='a')||(str.charAt(i)=='A')||(str.charAt(i)=='e')||(str.charAt(i)=='E')||(str.charAt(i)=='i')||(str.charAt(i)=='I')||(str.charAt(i)=='o')||
            (str.charAt(i)=='O')||(str.charAt(i)=='u')||(str.charAt(i)=='U')||(str.charAt(i)=='y')||(str.charAt(i)=='Y'))
            continue;
            
            else
            {
                ch[k++] = '.';
                ch[k++] = str.charAt(i);
            }
            
        }
        //System.out.println(k);
        for(int i = 0 ; i < k ; ++i)
        {
            if(Character.isUpperCase(ch[i]))
            {
                ch[i] = Character.toLowerCase(ch[i]);
            }
        }
        for(int i = 0; i < k; ++i)
        System.out.print(ch[i]);
    }
}