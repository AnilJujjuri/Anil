import java.util.*;
public class Company {
public static void main(String args[]) {
	Activity1_4 s=new Activity1_4();
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the Company Name:");
	s.setName(sc.next());
	System.out.println("Enter the Employees:");
	String p= s.setEmployees(sc.next());
	String[] arrOfp = p.split(",");
	System.out.println("Enter the TeamLead:");
	String q= s.setTeamlead(sc.next());
	
	int c=0;
	for(int i=0;i<arrOfp.length;i++) {
	   if(arrOfp[i].equals(q))
	   c++;
	   else
		  c+=0;
	}
	if (c==1) {
		System.out.println("Name: "+s.getName());
		System.out.println("Employees: "+s.getEmployees());
		System.out.println("Lead: "+q);
	}
	else
		System.out.print("Invalid input");
}
}