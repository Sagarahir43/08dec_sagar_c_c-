#include<stdio.h>
int main()
{
    char ch;
	float length,width,radius,pi,base,hight,areaoftriangle,areaofrectangle,areaofcircle;
	printf("press a for area of triangle \n");
	printf("press b for area of rectangle\n");
	printf("press c for area of circle\n");
	scanf("%c",&ch);
	pi=3.14;
	
	

	
	switch(ch)
	{
		case 'a':
			printf("enter base of triangle\n");
			scanf("%f",&base);
			printf("enter hight of triangle\n");
			scanf("%f",&hight);
			areaoftriangle = base*hight/2;
			printf("area of triangle is :%f\n ",areaoftriangle);
							break;
		case 'b':
		    printf("enter length of rectangle: ");
			scanf("%f",&length);
			printf("enter width of rectangle : ");
			scanf("%f",&width);
			areaofrectangle = width*length;
			printf("area of rectangle : %f",areaofrectangle);
							break;
		case 'c':
		    printf("enter radius of circle: ");
			scanf("%f",&radius);
			areaofcircle = pi*radius*radius;
			printf("area of circle is:%f",areaofcircle);
							break;
			default:{printf("invalid input");
				
			}											
	}
}
