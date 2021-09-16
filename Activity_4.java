import java.util.Scanner;

abstract class Shape {
    int width;
    abstract void area();
}
class Square extends Shape {
Square(int x) {
width = x;
}
void area() {
System.out.println("Area of Square is:"+width * width);
}
}
class Circle extends Shape {
Circle(int y){
width = y;
}
public void area(){
System.out.println("Area of Circle is:"+Math.PI*width*width);
}
}


public class Activity_4 {
    public static void main(String[ ] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Square");
        System.out.println("Circle");
        System.out.println("Enter The Shape");
        String shape=sc.next();
        switch(shape) {
        case "Circle":
        	System.out.println("Enter the radius");
        	 int y = sc.nextInt();
        	 Circle b = new Circle(y);
        	 b.area();
        	 break;
        case "Square":
        	System.out.println("Enter the side");
        	 int x = sc.nextInt();
        Square a = new Square(x);
        
        a.area();
       break;
    }
}
}