/* AUTHOR: Angel Granados  
   
   Generalization of the quadratic equation for values a, b and c in the field of reals and complex.

*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<complex.h>

#define EXIT_SUCCESS 0

int main(void){

  double a,b,c,x,x1,x2,x11,x12,x21,x22;
  int dc;
  
 MENU:
  system("clear");
  
  printf("\n\n Generalization of the quadratic equation for values a, b and c in the field of reals \n\n");

  printf("\n Insert the value a = ");
  scanf("%lf",&a);

  printf("\n Insert the value b = ");
  scanf("%lf",&b);

  printf("\n Insert the value c = ");
  scanf("%lf",&c);

  system("clear");

 CONDITIONAL:
  if((a==0) && (b==0) && (c==0) ){
    printf("\n Trivial solution. \n\n Press 1 to the MENU or 0 to EXIT \n Value = ");
    scanf("%d",&dc);
    if(dc==1){
      goto MENU;
    }else{
      goto EXIT;
    }
  }else if((a==0) && (b==0) && (c!=0)){
      printf("\n There is no congruence, since the equation ax^2+bx +c =0, with c different \n from zero and a=0 and b=0 remains in the form c=0 with c different from zero.\n Which is incongruous. \n\n If you want to log in again, press 1 to the MENU or 0 to EXIT \n Value =  ");
    scanf("%d",&dc);
    if(dc==1){
      goto MENU;
    }else{
      goto EXIT;
    }
  }else if((a==0) && (b!=0) && (c!=0)){
    x=(-c)/(b);
    printf("\n The solution is of the form x=-c/b; the value of x = %lf \n\n If you want to log in again, press 1 to the MENU or 0 to EXIT \n Value =  ",x);
    scanf("%d",&dc);
    if(dc==1){
      goto MENU;
    }else{
      goto EXIT;
    }
  }else if((a!=0) && (b==0) && (c!=0)){
    if( ((c>0)&&(a<0)) || ((c<0)&&(a>0))   ){
      x1=sqrtl(-c/a);
      x2=-sqrtl(-c/a);
      printf("\n The solution is of the form: \n\n  x1=sqrt(-c/a) and x2=-sqrt(-c/a) \n\n The result is within the field of real numbers. The value of x1 = %lf and x2 = %lf \n\n If you want to log in again, press 1 to the MENU or 0 to EXIT \n Value =  ",x1,x2);
      scanf("%d",&dc);
      if(dc==1){
	goto MENU;
      }else{
	goto EXIT;
      }  
    }else if( ((c<0)&&(a<0)) || ((c>0)&&(a>0)) ){
      x1=cimag(csqrtl(-c/a));
      x2=-cimag(csqrtl(-c/a));
      printf("\n The solution is of the form: \n\n x1=sqrt(-c/a) y x2=-sqrt(-c/a) \n\n The result is within the field of complex numbers. The value of x1 =  %lfi and x2 =  %lfi \n\n If you want to log in again, press 1 to the MENU or 0 to EXIT \n Value =  ",x1,x2);
      scanf("%d",&dc);
      if(dc==1){
	goto MENU;
      }else{
	goto EXIT;
      }  
    }
  }else if(((a!=0) && (b!=0) && (c==0)) || ((a!=0) && (b!=0) && (c!=0))){  
    if((b*b)>=(4*a*c) ){
      x1=(-b+(sqrtl(b*b-4*a*c)))/(2*a);
      x2=(-b-(sqrtl(b*b-4*a*c)))/(2*a);
      printf("\n The solution is of the form: \n\n x1=(-b+sqrt(b^2-4ac))/2a and x2=(-b-sqrt(b^2-4ac))/2a \n\n The solution is within the real field x1 = %lf and x2 = %lf \n\n If you want to log in again, press 1 to the MENU or 0 to EXIT \n Value =  ",x1,x2);
      scanf("%d",&dc);
      if(dc==1){
	goto MENU;
      }else{
	goto EXIT;
      }    
    }else if((b*b)<(4*a*c)){
      x11=creal((-b+(csqrtl(b*b-4*a*c)))/(2*a));
      x12=cimag((-b+(csqrtl(b*b-4*a*c)))/(2*a));
      x21=creal((-b-(csqrtl(b*b-4*a*c)))/(2*a));
      x22=cimag((-b-(csqrtl(b*b-4*a*c)))/(2*a));
      printf("\n The solution is of the form: \n\n x1=(-b+sqrt(b^2-4ac))/2a and x2=(-b-sqrt(b^2-4ac))/2a \n\n The solution is within the complex field \n\n x1 = %lf + (%lfi) and x2 = %lf + (%lfi) \n\n If you want to log in again, press 1 to the MENU or 0 to EXIT \n Value = ",x11,x12,x21,x22);
      scanf("%d",&dc);
      if(dc==1){
	goto MENU;
      }else{
	goto EXIT;
      }
    }
  }else{
    printf("\n Solution not found. \n\n If you want to log in again, press 1 to the MENU or 0 to EXIT \n Value = ");
    if(dc==1){
      goto MENU;
    }else{
      goto EXIT;
    }
  }
  
 EXIT:
  exit(EXIT_SUCCESS);
}

