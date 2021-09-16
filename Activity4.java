import java.util.*;
class ODI extends Match{
Match s=Match();
@Override
float calculateRunRate() {
	double Runrate=(target-currentscore);
	return 0;
}

private Match Match() {
	// TODO Auto-generated method stub
	return null;
}

@Override
int CalculateBalls() {
	return 0;
}

@Override
void display(double reqRunrate, int balls) {

	
}
		
	}
	

class Test extends Match{

	@Override
	float calculateRunRate() {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	int CalculateBalls() {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	void display(double reqRunrate, int balls) {
		// TODO Auto-generated method stub
		
	}
	
}
class T20 extends Match{

	@Override
	float calculateRunRate() {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	int CalculateBalls() {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	void display(double reqRunrate, int balls) {
		// TODO Auto-generated method stub
		
	}
	
}
public class Activity4 {
    public static void main(String[ ] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("ODI");
        System.out.println("Test");
        System.out.println("T20");
        
        String format=sc.next();
        sc.close();
        switch(format) {
        case "ODI":
        	System.out.println("Enter the Current score");
        	
        	System.out.println("Enter the Current Over");
        	System.out.println("Enter the Target Score");
        	System.out.println("Required Score");
        	System.out.println("Required Runrate:");
             break;
        case "Test":
        	System.out.println("Enter the Current score");
        	System.out.println("Enter the Current Over");
        	System.out.println("Enter the Target Score");
        	System.out.println("Required Score");
        	System.out.println("Required Runrate:");
        	
       break;
        case "T20":
        	System.out.println("Enter the Current score");
        	System.out.println("Enter the Current Over");
        	System.out.println("Enter the Target Score");
        	System.out.println("Required Score");
        	System.out.println("Required Runrate:");
        
        
       break;
    }
}
}