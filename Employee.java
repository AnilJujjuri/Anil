import java.util.*;
public class Employee {
	public static void main(String[] args) {
		Activity1_1 s=new Activity1_1();
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the name:");
	s.setName(sc.next());
	System.out.println("Enter Address:");
	s.setAddress(sc.next());	
	System.out.println("Enter Mobile:");
	s.setMobile(sc.next());
	System.out.println("Employee Details");
	System.out.println("Name: "+s.getName());
	System.out.println("Adress: "+s.getAddress());
	System.out.println("Mobile: "+s.getMobile());
	}
}
