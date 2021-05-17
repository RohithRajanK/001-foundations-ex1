#include<stdio.h>
#include<math.h>
#include<cs50.h>
int main(void)
{
string name;
name=get_string("Enter your name ");
float h,w;
h=get_float("Enter your height (in m) ");
w=get_float("Enter your weight (in kg) ");
float bmi=(w/pow(h,2));
printf("%s %.2f ",name,bmi);
if(bmi<18.5)
{
printf("Underweight");
}
else if(18.5<=bmi&&bmi<=24.9)
{
printf("Normal");
}
else if(25<=bmi&&bmi<=29.9)
{
printf("Overweight");
}
else if(bmi>30)
{
printf("Obese");
}

}