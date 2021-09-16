import java.util.*;
public class Innings {
public static void main(String args[]) {
	Activity1_2 s=new Activity1_2();
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the Team name");
	s.setTeamname(sc.next());
	System.out.println("Enter the Innings name");
	s.setInningsname(sc.next());
	System.out.println("Enter the Runs");
	s.setRuns(sc.nextInt());
	System.out.println("Name: "+s.getTeamname());
	System.out.println("Score: "+s.getRuns());
	int p=s.getRuns();
	String q= s.getInningsname();
	String First="First";
	if(q.length()==First.length()) { 
		p++;
		System.out.println("Need "+p+" to win");
}else 
			System.out.println("Match ended");
		
}
}
