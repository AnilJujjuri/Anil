abstract class Match {
    int currentscore;
    float currentover;
    int target;
    abstract float calculateRunRate();
    abstract int CalculateBalls();
    abstract void display(double reqRunrate, int balls);
    public int getCurrentscore() {
		return currentscore;
	}
	public void setCurrentscore(int currentscore) {
		this.currentscore = currentscore;
	}
	public float getCurrentover() {
		return currentover;
	}
	public void setCurrentover(float currentover) {
		this.currentover = currentover;
	}
	public int getTarget() {
		return target;
	}
	public void setTarget(int target) {
		this.target = target;
	}
	
    
}
class ODI extends Match{

@Override
float calculateRunRate() {
	double Runrate=(target-currentscore);
	return 0;
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