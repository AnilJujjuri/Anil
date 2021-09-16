import java.util.Scanner;
public class EmployeeMain {
public static void main(String args[]) {
	Activity1_3 s=new Activity1_3();
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the name:");
String p=s.setName(sc.next());
System.out.println("Enter Address:");
String q=s.setAddress(sc.next());	
System.out.println("Enter Mobile:");
String r=s.setMobile(sc.next());
System.out.println("Verify and Update the details: ");
System.out.println("Menu");
System.out.println("1.Update Employee name\n2.Update Employee Address\n3.Update Employee mobile\n4.All information correct/Exit ");
int n=sc.nextInt();
switch(n) {
case 1:
	System.out.println("Existing name: "+p);
	System.out.println("Enter New name: ");
	String t=sc.next();
	p=t;
	
case 2:
	System.out.println("Current Address: "+q);
	System.out.println("Enter New Address: ");
	String u=sc.next();
	q=u;
case 3:
	System.out.println("Mobile: "+r);
	System.out.println("Update Mobile: ");
	String v=sc.next();
	r=v;
case 4:
	System.out.println("Employee Details");
	System.out.println("Name: "+p);
	System.out.println("Address: "+q);
	System.out.println("Mobile: "+r);
	break;
}
}
}
