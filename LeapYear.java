import java.util.Scanner;

public class LeapYear {
    public static void main(String[] args) {
        System.out.print("Enter Year To Check: ");
        Scanner sc = new Scanner(System.in);
        int year = sc.nextInt();
        if(year%4==0 && year%400==0 || year%100!=0){
            System.out.println(year+" is a leap year");
        } else {
            System.out.println(year+" is not a leap year");
        }
    }
}
