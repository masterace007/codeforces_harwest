import java.util.*;
public class Main {
    public static void main(String args[]) {
        
        Scanner sc = new Scanner(System.in);
       int test = sc.nextInt();
       int buns , patty , chicken;
       int costh , costc;
       while(test-- > 0)
       {
           buns = sc.nextInt();
           patty = sc.nextInt();
           chicken = sc.nextInt();
           
           costh = sc.nextInt();
           costc = sc.nextInt();
           
           int profits = 0;
           
           if(costh > costc)
           {
               int bunsh = 0;
               bunsh = 2*patty;
               if((buns - bunsh)  >= 0)
               {
                   buns = buns - bunsh;
                   profits = patty * costh;
                   if(buns > 1)
                   {
                        int no = buns / 2;
                        no = no < chicken ? no : chicken; 
                        profits = profits+ (no * costc);
                    }
               }
               else
               {
                   int no = buns / 2;
                   profits = profits + (no*costh);
               }
               
           }
           else
           {
               int bunsc = 0;
               bunsc = 2*chicken;
               if((buns - bunsc) >= 0)
               {
                   buns = buns - bunsc;
                   profits = chicken * costc;
                   if(buns > 1)
                    {
                        int no = buns / 2 ;
                        no = no < patty ? no : patty;
                        profits = profits + (no * costh);
                    }
               }
               else
               {
                   int no = buns / 2;
                   profits = profits + (no*costc);
               }
               
           }
           System.out.println(profits);
       }
        
    }
}