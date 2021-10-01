#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float BMI(float weight, float height) {
    height=height/100;
   return weight/pow(height,2);
}
float bMI(float weight, float height) {
    height=height*12;
   return 703*weight/pow(height,2);
}
int main()

{
    printf("1.Metric 2.Standard\n");
    int n;
    scanf("%d",&n);
    switch(n){
        case 1:
   printf("The parameters are pounds and feets\n");
   float weight,height;
   printf("Enter weight in pounds: ");
   scanf("%f",&weight);
   printf("Enter height in feets: ");
    scanf("%f",&height);
   float bmi = bMI(weight,height);
   printf("The current BMI is: ");
   printf("%2.f\n",bmi);
   if(bmi < 15)
    {

        printf("Your BMI category is: Starvation\n\n");
        printf("Starvation Prevention:\n");
        printf("Engage on regular aerobic activity\n");
        printf("Eat more Nutrition Food\n");
        printf("Get family involved in your journey\n");
    }
    else if(bmi >= 15.1 && bmi <= 17.5)
    {
        printf("Your BMI category is: Anorexic\n\n");
        printf("Anorexic Prevention:\n");
        printf("Eat more Nutrition Food");
        printf("Engage on regular aerobic activity\n");
         printf("Get family involved in your journey\n");
    }
    else if(bmi >= 17.6 && bmi <= 18.5)
    {
        printf("Your BMI category is: Underweight\n\n");
        printf("Underweight Prevention:\n");
        printf("Engage on regular aerobic activity\n");
        printf("Eat plenty of protein food");
         printf("Get family involved in your journey\n");
    }
    else if(bmi >= 18.6 && bmi <= 24.9)
    {
        printf("Your BMI category is: Ideal\n");
    }
    else if(bmi >= 25 && bmi <= 29.9)
    {
        printf("Your BMI category is: Overweight\n\n");
        printf("OverWeight prevention: \n");
        printf("Focusing on reducing daily stress");
        printf("Eat plenty of dietary fiber \n");
        printf("Consume less bad fat and more good fat\n");
        printf("Engage on regular aerobic activity intesively\n");
        printf("Consume less processed and sugary foods \n");
         printf("Get family involved in your journey\n");
    }
    else if(bmi >= 30 && bmi <= 39.9)
    {
        printf("Your BMI category is: Obese\n\n");
        printf("Obesity prevention: \n");
        printf("Consume less bad fat and more good fat\n");
        printf("Consume less processed and sugary foods \n");
        printf("Eat more servings of vegetables and fruits \n");
        printf("Eat plenty of dietary fiber \n");
        printf("Focus on eating low–glycemic index foods \n");
        printf("Engage in regular aerobic activity very intensively\n");
        printf("Focus on reducing daily stress");
         printf("Get family involved in your journey\n");

    }
    else if(bmi >= 40)
    {
        printf("Your BMI category is: Morbidly Obese\n");
   }
 getch();
 break;
    case 2:
   printf("The parameters are kilograms and centimeters\n");

   printf("Enter weight in Kilograms: ");
   scanf("%f",&weight);
   printf("Enter height in centimeters: ");
    scanf("%f",&height);
    bmi = BMI(weight,height);
   printf("The current BMI is: ");
   printf("%2.f\n",bmi);
   if(bmi < 15)
    {
        printf("Your BMI category is: Starvation\n\n");
        printf("Starvation Prevention:\n");
        printf("Engage in regular aerobic activity\n");
        printf("Eat more Nutrition Food");
         printf("Get family involved in your journey\n");
    }
    else if(bmi >= 15.1 && bmi <= 17.5)
    {
        printf("Your BMI category is: Anorexic\n\n");
        printf("Anorexic Prevention:\n");
         printf("Engage in regular aerobic activity\n");
        printf("Eat more Nutrition Food");
         printf("Get family involved in your journey\n");
    }
    else if(bmi >= 17.6 && bmi <= 18.5)
    {
        printf("Your BMI category is: Underweight\n\n");
        printf("Underweight Prevention:\n");
        printf("Engage in regular aerobic activity\n");
        printf("Eat plenty of protein food");
         printf("Get family involved in your journey\n");
    }
    else if(bmi >= 18.6 && bmi <= 24.9)
    {
        printf("Your BMI category is: Ideal\n");
    }
    else if(bmi >= 25 && bmi <= 29.9)
    {
        printf("Your BMI category is: Overweight\n\n");
        printf("OverWeight prevention: \n");
        printf("Focus on reducing daily stress");
        printf("Eat plenty of dietary fiber \n");
        printf("Consume less bad fat and more good fat\n");
        printf("Engage in regular aerobic activity intensive\n");
        printf("Consume less processed and sugary foods \n");
         printf("Get family involved in your journey\n");
    }
    else if(bmi >= 30 && bmi <= 39.9)
    {
        printf("Your BMI category is: Obese\n\n");
        printf("Obesity prevention: \n");
        printf("Consume less bad fat and more good fat\n");
        printf("Consume less processed and sugary foods \n");
        printf("Eat more servings of vegetables and fruits \n");
        printf("Eat plenty of dietary fiber \n");
        printf("Focus on eating low–glycemic index foods \n");
        printf("Engage in regular aerobic activity very intensive\n");
        printf("Focus on reducing daily stress");
         printf("Get family involved in your journey\n");
    }
    else if(bmi >= 40)
    {
        printf("Your BMI category is: Morbidly Obese\n");
   }
 getch();
break;
 return 0;

}
}
