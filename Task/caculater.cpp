#include<stdio.h>
int main()
{
	int n,a,b,d,e,f,g,h,c,add,sub,mul,ans,ans1,ans2,add1,sub1,mul1,add2,sub2,mul2;
	float div,div1,div2;
	printf("enter the number A :");
	scanf("%d",&a);
	printf("enter number B :");
	scanf("%d",&b);
	printf("\n\n");
	printf("1. For ADDITION\n2. For SUBTRACTION\n3. For MULTIPLICATION\n4. For DIVISION\n\n");
	printf("enter your choice :");
	scanf("%d",&n);
	printf("\n");
	switch (n)
	{
		case 1:
			    add = a + b;
			    printf("addition of A and B is :%d\n\n",add);
			    
			    break ;
		case 2:
				sub = a - b;
				printf("Subtraction of A and B is :%d\n\n",sub);
				
				break;
		case 3:
				mul = a * b;
				printf("Multiplication of A and B is :%d\n\n",mul);
				   
				break;
		case 4:
		 		 div = a / b;
				 printf("Division of A and B is :%f\n\n",div);
				 					    
    }
	ans = add,sub,mul,div;
	
	printf("1. for your next oppration if you want to take 2 new number.\n\n2. if you want to performe your next opration with your answer \n\n");
	printf("enter your choice :");
	scanf("%d",&d);
	printf("\n");
	switch (d)
	{
		case 1: 
		         printf("Enter your value of first number :");
		         scanf("%d",&e);
		         printf("Enter your value of second number :");
			     scanf("%d",&f);
			     printf("1. For ADDITION\n2. For SUBTRACTION\n3. For MULTIPLICATION\n4. For DIVISION\n\n");
			      printf("enter your choice :\n");
			     scanf("%d",&c);   
			switch (c)
			{
		        	case 1:
						 add1 = e + f;
			             printf("addition of First number  and Second Number is :%d\n",add1);
			    
			                     break ;         
			    
			        case 2:
					      sub2 = e - f;
			           	  printf("Subtraction of First Number and Second Number is :%d\n",sub1);
				
			                   	break;
			        case 3:
			              mul1 = e * f;
				          printf("Multiplication of A and B is :%d\n",mul1);
				   
			                 	break;
			        case 4:
					     div1 = e / f;
				          printf("Division of A and B is :%f\n",div1); 
				          
					   	
			}
			ans1 = add1,sub1,mul1,div1;
			              
			              break;
			              
		case 2:	
		       printf("enter your number for do oppration with recent answer :");
		       scanf("%d",&g);
		       printf("1. For ADDITION\n2. For SUBTRACTION\n3. For MULTIPLICATION\n4. for DIVISION\n\n");
		       printf("enter your choice :");
		       scanf("%d",&h);
		       switch (h)
		       {
		       	    case 1:
		       	  	    add2 = ans + g;
		       	  	    printf("Addition is :%d",add2);
		       	  	    break;
		       	    case 2:
					    sub2 = ans - g;
						printf("Subtraction  is :%d",sub);
						
						break;
					case 3:	
					     mul = ans * g;
					     printf("multiplication is :%d",mul2);
					     
					     break;
					case 4:
					   div2 = ans / g;
						printf("division is :%f",div2);  
					     
							    
					
		       	  	      
			   }
			   ans2 = 	add2,sub2,mul2,div2;	  
			   	   
			   		 
		        
		printf("\n................history.............\n");
    }
    if(n==1)
    {
    	printf("\n%d + %d =%d",a,b,ans);
	}
	else if(n==2)
	{
		printf("\n%d - %d =%d",a,b,ans);
	}
    else if(n == 3)
	{
		printf("\n%d * %d =%d",a,b,ans);
		
	}
	else if(n==4)
	{
		printf("\n%d / %d=%d",a,b,ans);
	}

	if (c==1)
	{
		printf("\n%d + %d =%d",e,f,ans1);
	}
	else if(c==2)
	{
		printf("\n%d - %d =%d",e,f,ans1);
	}
	else if (c==3)
	{
		printf("\n%d * %d =%d",e,f,ans1);
	}
	else if(c==4)
	{
		printf("\n%d / %d =%d",e,f,ans1);
	}
    if(h==1)
    {
    	printf("\n%d + %d =%d",ans,g,ans2);
	}
	else if(h==2)
	{
		printf("\n%d - %d =%d",ans,g,ans2);
	}
	else if(h==3)
	{
		printf("%\nd * %d =%d",ans,g,ans2);
	}
	else if(h==4)
	{
		printf("\n%d / %d =%d",ans,g,ans2);
	}
	
	
	
      
      
	
	
	
	
	
	
	
	
	
	
	
	
}
