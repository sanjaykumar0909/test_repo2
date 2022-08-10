#include<stdio.h>
#include<math.h>
void main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c;
	scanf("%c", &c);
	switch c{
		case 1:
		power(a,b);
		break;
		case 2:
		exponential(a,b);
		break;
		default:
		printf("invalid input");
	}
}
void power(float n1, float n2){
	float c=pow(n1, n2);
	printf("%f",c);
}
void exponential(float n1){
	float b=exp(n1);
	printf("%f",b);
}
void fun(){
  printf("power, exponential");
}
