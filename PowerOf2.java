import java.util.*;
public class Main
{
    public static boolean powerOf2(int n){
        return ((n!=0)&&(n&-n)==n);
    }
	public static void main(String[] args) {
	 Main obj=new Main();
	 int x=9;
	 boolean num=obj.powerOf2(x);
	 System.out.print(num);
	}
}
