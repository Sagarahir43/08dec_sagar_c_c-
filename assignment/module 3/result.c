#include<stdio.h>
int main()
{
	float guj,eng,ss,com,math,total,per;
	printf("enter mark of guj:);
	scanf("%f",&guj);
	
	printf("enter mark of eng:");
	scanf("%f",&eng);
	
	printf("enter mark of com:");
	scanf("%d",&com);
	
	printf("enter mark of ss:");
	scanf("%f",&ss);
	
	printf("entre mark of math:");
	scanf("%f",&math);
	
	if(guj>35&&eng>35&&com>35&&ss>35&&math>35){
		printf("student is pass\n");
		
		total=guj+eng+com+ss+math;
		printf("total of the student is:%f\n",total);
		
		per=total/5;
		printf("per of the student is:%f\n",per);
		
		if(per>75){
			printf("distinction\n";)
		}else if(per>60&&per<=75){
			printf("first class"\n);
		}else if(per>50&&per<=60){
			printf("second class\n");
		}else if(per>35&&per<=50){
			printf("pass class\n");
		}
	}
	else{
		printf("fail\n");
		
		
	}
}
