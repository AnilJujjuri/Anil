import java.util.*;
public class Customer {
public static void main(String args[]) {
	Activity1_3 s=new Activity1_3();
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the Details:");
	String p= s.setName(sc.next());
	 String[] arrOfp = p.split(",");
	 System.out.println("Name: "+arrOfp[0]);
	 System.out.println("Address: "+arrOfp[1]);
	 System.out.println("Moblie: "+arrOfp[2]);
	 

	}


}

