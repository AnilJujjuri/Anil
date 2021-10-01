
/* implementation of sciettific and mesuration module */

#include<stdio.h>
#define PI =3.14
#include <math.h>


void squarearea(){
    printf("\n enter value of side (a)");
    float areaa;
    scanf("%f",&areaa);
    float area=areaa*areaa;
    printf("\n Area of square is %.2f",area);
}
void squareperimeter(){
    printf("\n enter value of side (a)");
    float areap;
    scanf("%f",&areap);
    float peri=4*areap;
    printf("\n perimeter of square is %.2f",peri);
}
void rectangalearea(){
    printf("\n enter value of l and b");
    float l,b;
    scanf("%f%f",&l,&l);
    float recoeri=l*b;
    printf("\n Area of rectangle is %.2f",recoeri);
}
void rectangleperimeter(){
     printf("\n enter value of l and b");
    float l1,b2;
    scanf("%f%f",&l1,&b2);
    float recperi=l1*b2;
    printf("\n perimeter of rectangle is %.2f",recperi);
}
void circlearea(){
    printf("\n enter value of radius r");
    float circler;
    scanf("%f",&circler);
    float circleareaa=3.14*circler*circler;
    printf("\n circle area is %.2f",circleareaa);
}
void circleperimeter(){
    printf("\n enter value of radius r");
    float circler1;
    scanf("%f",&circler1);
    float circlearea1=3.14*2*circler1;
    printf("\n circle area is %.2f",circlearea1);
}
void  trainglearea(){
    printf("\n enter value of base and height");
    float trib,trih;
    scanf("%f%f",&trib,&trih);
    float triarea=0.5*trib*trih;
    printf("\n circle area is %.2f",triarea);
}
void  traingleperimeter(){
    printf("\n enter value of a b c");
    float trib,trih,tric;
    scanf("%f%f%f",&trib,&trih,&tric);
    float triarea1=trib+tric+trih;
    printf("\n circle area is %.2f",triarea1);
 }
void rhombusarea(){
    printf("\n enter value of d1 and d2");
    float d1,d2;
    scanf("%f%f",&d1,&d2);
    float robarea=0.5*d1*d2;
    printf("\n circle area is %.2f",robarea);
}
void rhombusperimeter(){
    printf("\n enter value of side");
    float d3;
    scanf("%f",&d3);
    float robarea1=4*d3;
    printf("\n circle area is %.2f",robarea1);
}
void Parallelogramarea(){
    printf("\n enter value of b and h");
    float dh1,dh2;
    scanf("%f%f",&dh1,&dh2);
    float paraarea=dh1*dh2;
    printf("\n circle area is %.2f",paraarea);
}
void Parallelogramperimeter(){
    printf("\n enter value of b and h");
    float dh11,dh21;
    scanf("%f%f",&dh11,&dh21);
    float paraarea1=dh11*dh21;
    printf("\n circle area is %.2f",paraarea1);
}
void Trapeziumarea(){
    printf("\n enter value of t ,a , c");
    float tah,taa,tac;
    scanf("%f%f%f",&tac,&tah,&taa);
    float taarea;
    taarea=0.5*tah*(taa+tac);
    printf("\n circle area is %.2f",taarea);
}
void Trapeziumperimeter(){
    printf("\n enter value of t ,a , c");
    float tah1,taa1,tac1,tac2;
    scanf("%f%f%f%f",&tac1,&taa1,&tah1,&tac2);
    float taarea1=tah1+taa1+tac1+tac2;
    printf("\n circle area is %.2f",taarea1);
 }
void cubevolume(){
    printf("\n enter value of side (a)");
    float cubea;
    scanf("%f",&cubea);
    float cubearea=cubea*cubea*cubea;
    printf("\n Area of square is %.2f",cubearea);

}
void cubecsa(){
    printf("\n enter value of side (a)");
    float cubeaa;
    scanf("%f",&cubeaa);
    float cubeareaa=cubeaa*4;
    printf("\n Area of square is %.2f",cubeareaa);
}
void cubetsa(){
    printf("\n enter value of side (a)");
    float cubeaaa;
    scanf("%f",&cubeaaa);
    float cubeareaaa=cubeaaa*6;
    printf("\n Area of square is %.2f",cubeareaaa);
}
void spherearea(){
    printf("\n enter value of side rr");
    float spherer;
    scanf("%f",&spherer);
    float sphereareaa=4/3*(3.14*spherer*spherer*spherer);
    printf("\n Area of square is %.2f",sphereareaa);

}
void spherecsa(){
    printf("\n enter value of side r");
    float sphererr;
    scanf("%f",&sphererr);
    float sphereareaaa=4*(3.14*sphererr*sphererr);
    printf("\n Area of square is %.2f",sphereareaaa);
}
void spheretsa(){
    printf("\n enter value of side r");
    float sphererrr;
    scanf("%f",&sphererrr);
    float sphereareaaaa=4*(3.14*sphererrr*sphererrr);
    printf("\n Area of square is %.2f",sphereareaaaa);
}
void cuboidarea(){
    printf("\n enter value of l b h");
    float cuboidl,cuboidb,cuboihh;
    scanf("%f%f%f",&cuboidl,&cuboidb,&cuboihh);
    float cuboidarea1=cuboidb*cuboidl*cuboihh;
    printf("\n Area of square is %.2f",cuboidarea1);
}
void cuboidcsa(){
    printf("\n enter value of l b h");
    float cuboidl1,cuboidb1,cuboidh1;
    scanf("%f%f%f",&cuboidl1,&cuboidb1,&cuboidh1);
    float cuboidarea11=2*cuboidh1*(cuboidl1+cuboidb1);
    printf("\n csa of cuboid is %.2f",cuboidarea11);
}
void cuboidtsa(){
    printf("\n enter value of l b h");
    float cuboidl11,cuboidb11,cuboidh11;
    scanf("%f%f%f",&cuboidl11,&cuboidb11,&cuboidh11);
    float cuboidarea112=2*((cuboidl11*cuboidb11)+(cuboidb11*cuboidh11)+(cuboidh11*cuboidl11));
    printf("\n tsa of cuboid is %.2f",cuboidarea112);
}
void hemispherearea(){
    printf("\n enter value of radius r");
    float circlerr;
    scanf("%f",&circlerr);
    float circlearear=3.14*circlerr*circlerr*circlerr*0.6;
    printf("\n hemisphere area is %.2f",circlearear);
}
void hemispherecsa(){
    printf("\n enter value of radius r");
    float circlerr1;
    scanf("%f",&circlerr1);
    float circlearear1=3.14*circlerr1*circlerr1*2;
    printf("\n hemisphere csa is %.2f",circlearear1);
}
void hemispheretsa(){
    printf("\n enter value of radius r");
    float circlerr11;
    scanf("%f",&circlerr11);
    float circlearear11=3.14*circlerr11*circlerr11*3;
    printf("\n hemisphere tsa is %.2f",circlearear11);
}
void cylinderarea(){
    printf("\n enter value of r and h");
    float cyr,cyh;
    scanf("%f%f",&cyr,&cyh);
    float cyarea=3.14*cyr*cyr*cyh;
    printf("\n cylinder area is %.2f ",cyarea);
}
void cylindercsa(){
    printf("\n enter value of r and h");
    float cyr1,cyh1;
    scanf("%f%f",&cyr1,&cyh1);
    float cyarea1=2*3.14*cyr1*cyh1;
    printf("\n cylinder csa is %.2f ",cyarea1);
}
void cylindertsa(){
    printf("\n enter value of r and h");
    float cyr11,cyh11;
    scanf("%f%f",&cyr11,&cyh11);
    float cyarea11=(2*3.14*cyr11*cyh11)+(2*3.14*cyr11*cyr11);
    printf("\n cylinder tsa is %.2f ",cyarea11);
}
void conearea(){
    printf("\n enter value of r and h.");
    float coner,coneh;
    scanf("%f%f",&coner,&coneh);
    float conearea1;
    conearea1=0.33*3.14*coner*coner*coneh;
    printf("\n cone area is %.2f ",conearea1);
}

void conecsa(){
    printf("\n enter value of r and l");
    float coner1,coneh1;
    scanf("%f%f",&coner1,&coneh1);
    float conearea11=3.14*coner1*coneh1;
    printf("\n cone csa is %.2f ",conearea11);
}
void conetsa(){
    printf("\n enter value of r and l");
    float coner11,coneh11;
    scanf("%f%f",&coner11,&coneh11);
    float conearea111=3.14*coner11*(coner11+coneh11);
    printf("\n cone tsa is %.2f ",conearea111);
}
void trignomentriccall(){
    printf("\n enter value in degree\n");
    float degree;
    scanf("%f",&degree);
    printf("Sin(%f) = %f\n", degree, sin(degree));  
    printf("Cos(%f) = %f\n", degree, cos(degree));  
    printf("Tan(%f) = %f\n", degree, tan(degree));  
    printf("Cosec(%f) = %f\n", degree, 1/sin(degree));  
    printf("Sec(%f) = %f\n", degree, 1/cos(degree));  
    printf("Cot(%f) = %f\n", degree, 1/tan(degree));  
}
void logcall(){
    printf("\n  log a to any base b (logb a) \n enter value of a and b respectively");
    int loga,logb;
    scanf("%d%d",&loga,&logb);
    float logc=log(loga)/log(logb);
    printf("\n the value of log power %d to base %d is %.2f",loga,logb,logc); 

}
void expocall(){
    double base, exp, result;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &exp);
    result = pow(base, exp);
    printf("%.1lf^%.1lf = %.2lf", base, exp, result);

}

void factorialcall(){
    int faci,fac=1,facnum;
    printf("Input the number : ");
    scanf("%d",&facnum);
    for(faci=1;faci<=facnum;faci++){
    fac=fac*faci;
    }
   printf("The Factorial of %d is: %d\n",facnum,fac);
}


void mesuration(){
    printf("\n In mesuration we have 2d figure and 3d figures\n");
    printf("-------------------------------------------------------");
    printf("\n     1.2d figures              2.3d figures \n");
    printf("\n--------------------------------------------------------\n");
    int a;
    scanf("\n %d",&a);
    switch (a)
    {
    case 1:
        printf("\n In 2d figure we have :\n");
        printf("\n 1.Square");
        printf("\n 2.Rectangle");
        printf("\n 3.Circle");
        printf("\n 4.Triangle");
        printf("\n 5. Rhombus");
        printf("\n 6.Parallelogram");
        printf("\n 7.Trapezium");
        int b;
        scanf("\n %d",&b);
        switch (b)
        {
        case 1:
            printf("\n ur choice is square ");
            printf("\n 1.Area      2.Perimeter");
            printf("\n enter ur choice");
            int c;
            scanf("\n %d",&c);
            switch (c)
            {
            case 1:
                squarearea();
                break;
            case 2:
                squareperimeter();
                break;
            default:
                printf("wrong choice");
                break;
            }
            break;
        case 2:
            printf("\n ur choice is rectangle ");
            printf("\n  1.Area        2.Perimeter");
            printf("\n enter ur choice");
            int d;
            scanf("%d",&d);
            switch (d)
            {
            case 1:
                rectangalearea();
                break;
            case 2:
                rectangleperimeter();
                break;
            default:
                printf("wrong choice try again");
                break;
            }
            break;
            case 3:
            printf("\n entered choice is circle");
            printf("\n  1.Area        2.Perimeter");
            printf("\n enter ur choice");
            int e;
            scanf("%d",&e);
            switch (e)
            {
            case 1:
                circlearea();
                /* code */
                break;
            case 2:
                circleperimeter();
                break;
            default:
                printf("\n wrong choice");
                break;
            }
            break;
            case 4:
            printf("\n entered coice is Traingle");
            printf("\n  1.Area        2.Perimeter");
            printf("\n enter ur choice");
            int f;
            scanf("%d",&f);
            switch (f)
            {
            case 1:
                trainglearea();
                /* code */
                break;
            case 2:
                traingleperimeter();
                break;
            default:
                printf("wrong choice");
                break;
            }
            break;
            case 5:
            printf("\n entered choice is Rhombus");
            printf("\n  1.Area        2.Perimeter");
            printf("\n enter ur choice");
            int g;
            scanf("\n %d",&g);
            switch (g)
            {
            case /* constant-expression */ 1:
                /* code */
                rhombusarea();
                break;
            case 2:
                rhombusperimeter();
                break;
            default:
            printf("wrong choice");
                break;
            }
            break;
            case 6:
            printf("\n entered choice is Parallelogram");
            printf("\n  1.Area        2.Perimeter");
            printf("\n enter ur choice");
            int h;
            scanf("\n %d",&h);
            switch (h)
            {
            case /* constant-expression */ 1:
                /* code */
                Parallelogramarea();
                break;
            case 2:
                Parallelogramperimeter();
                break;
            default:
                printf("\n wrong choice");
                break;
            }
            break;
            case 7:
            printf("entered choice is Trapezium");
            printf("\n  1.Area        2.Perimeter");
            printf("\n enter ur choice");
            int i;
            scanf("\n %d",&i);
            switch (i)
            {
            case /* constant-expression */ 1:
            Trapeziumarea();
                /* code */
                break;
            case 2:
            Trapeziumperimeter();
            break;    
            default:
            printf("wrong choice ");
                break;
            }
            break;
        default:
            printf(" \n wrong choice ");
            break;
        }
        break;
    case 2:
        printf("\n 1.Cube");
        printf("\n 2.Cuboid");
        printf("\n 3.Sphere");
        printf("\n 4.Hemisphere");
        printf("\n 5.Cylinder");
        printf("\n 6.Cone\n");
        int z;
        scanf("\n %d",&z);
        switch (z)
        {
        case 1:
            printf("\n entered choice is cube");
            printf("\n 1.volume  2.Curved Surface Area (CSA)  3.Total Surface Area (TSA) ");
            printf("\n enter ur choice");
            int z1;
            scanf("\n %d",&z1);
            switch (z1)
            {
            case /* constant-expression */ 1:
                /* code */
                cubevolume();
                break;
            case 2:
                cubecsa();
                break;
            case 3:
                cubetsa();
                break;
            default:
                printf("wrong choice");
                break;
            }
            break;
            case 2:
            printf("\n entered choice is Cuboid");
            printf("\n 1.volume  2.Curved Surface Area (CSA)  3.Total Surface Area (TSA) ");
            printf("\n enter ur choice");
            int z2;
            scanf("\n %d",&z2);
            switch (z2)
            {
            case /* constant-expression */ 1:
                /* code */
                cuboidarea();
                break;
            case 2:
                cuboidcsa();
                break;
            case 3:
                cuboidtsa();
                break;
            default:
                printf("wrong choice");
                break;
            }
            break;
            case 3:
            printf("\n entered choice is Sphere");
            printf("\n 1.volume  2.Curved Surface Area (CSA)  3.Total Surface Area (TSA) ");
            printf("\n enter ur choice");
            int z3;
            scanf("\n %d",&z3);
            switch (z3)
            {
            case 1:
                spherearea();
                /* code */
                break;
            case 2:
                spherecsa();
                break;
            case 3:
                spheretsa();
                break;
            default:
                printf("\n wrong choice");
                break;
            }
            break;
            case 4:
            printf("entered choice is Hemisphere");
            printf("\n 1.volume  2.Curved Surface Area (CSA)  3.Total Surface Area (TSA) ");
            printf("\n enter ur choice");
            int z4;
            scanf("\n %d",&z4);
            switch (z4)
            {
            case 1:
                hemispherearea();
                /* code */
                break;
            case 2:
                hemispherecsa();
                break;
            case 3:
                hemispheretsa();
                break;
            default:
                printf("\n wrong choice");
                break;
            }
            break;
            case 5:
            printf("\n entered choice is Cylinder");
            printf("\n 1.volume  2.Curved Surface Area (CSA)  3.Total Surface Area (TSA) ");
            printf("\n enter ur choice");
            int z5;
            scanf("\n %d",&z5);
            switch (z5)
            {
            case 1:
                cylinderarea();
                /* code */
                break;
            case 2:
                cylindercsa();
                break;
            case 3:
                cylindertsa();
                break;
            default:
                printf("\n wrong choice");
                break;
            }
            break;
            case 6:
            printf("\n entered choice is cone");
            printf("\n 1.volume  2.Curved Surface Area (CSA)  3.Total Surface Area (TSA) ");
            printf("\n enter ur choice");
            int z6;
            scanf("\n %d",&z6);
            switch (z6)
            {
            case 1:
                conearea();
                break;
            case 2:
                conecsa();
                break;
            case 3:
                conetsa();
                break;
            default:
                printf("\n wrong choice");
                break;
            }
            break;
        default:
            printf("\n wrong choice");
            break;
        }
        break;
    default:
        printf("worng option has been selected try again");
        break;
    }

}
void scifi(){
    printf("\n-----------------------------------------------------------\n");
    printf(" 1.trignomentric functions   2.log  3.exponential  4.factorial");
    printf("\n                  enter choice\n");
    int inputinput;
    scanf("%d",&inputinput);
    switch (inputinput)
    {
    case 1:
        trignomentriccall();
        break;
    case 2:
        logcall();
        break;
    case 3:
        expocall();
        break;
    case 4:
        factorialcall();
        break;
    default:
        printf("\n wrong choice \n ");
        break;
    }
    
}

int main(){
    printf("------------------------------------------------------------");
    printf("\n    1.mensuration calculations      2.scitenfic calculator\n");
    printf("------------------------------------------------------------");
    printf("\nenter ur choice between 1 and 2\n");
    printf("--------------------------------------------------------------\n");
    int a;
    scanf("%d",&a);
    switch (a)
    {
    case 1 :
        mesuration();
        break;
    case 2:
        scifi();
        break;

    default:
        printf("u have selected wrong option try again");
        break;
    }
}