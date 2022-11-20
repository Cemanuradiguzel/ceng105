#include<stdio.h>
int main(void) {
   
  int vize1, vize2, final;
  char grade;
  float ort;
   printf("Vize notlarınızı giriniz:");
   scanf("%d %d", &vize1, &vize2);
   printf("Final notunuzu giriniz:");
   scanf("%d",&final);
   ort=vize1*0.3+vize2*0.3+final*0.4;
   
   if(ort>=90)
      grade = 'AA';
   else if(ort>=85)
      grade = 'BA';
   else if(ort>=75)
      grade = 'CB'
   else if(ort>=70)
      grade = 'C';
   else if(ort>=60)
      grade = 'D';,
   else if(ort>=50)
      grade= 'F';
   
   printf("%c",grade);
   
  
  
  
  
  return 0;
}

