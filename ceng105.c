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
      grade = 'A';
   else if(ort>=80)
      grade = 'B';
   else if(ort>=70)
      grade = 'C';
   else if(ort>=60)
      grade = 'D';
   
  
  
  
  
  return 0;
}

