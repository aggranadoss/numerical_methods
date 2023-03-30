/*  
    Approximation of the function of sin(x) for n terms.
    Author: Angel Granados

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0

double fact(double k){
  if(k==1){
    return (1);
  }else{
    return (k*fact(k-1));
  }
}

int main(void){

  double a,e,i,f,x,err;
  int n, dc;

 MENU:

  system("clear");

  printf("\n\n Approximation of the function of sin(x) for n terms with relative approximation error. \n\n");
  
  printf("\n\n Insert an x value into the reals field to find \"sin(x)\"  = ");
  scanf("%lf",&x);

  printf("\n\n Insert a value n in the field of natural or positive integers to determine the approximation of \"sin(x)\" = ");
  scanf("%d",&n);

  system("clear");

 CONDITIONAL:
  a=0;
  for(i=0;i<=n;i++)
    {
      f=(pow(-1,i)*pow(x,2*i+1))/fact(2*i+1);
      a+=f;
    }
  err=((sin(x)-a)/(sin(x)))*100;
  if(err>=0){
    printf("\n\n The approximation for %d terms of sin(%.2lf) is: \n\n sin(%.2lf)= %lf + (%lf) \n\n with an excess relative error of %lf \n\n",n,x,x,a,err,err);
    printf("\n\n MENU - 1 or EXIT - 0 \n Value = ");
    scanf("%d",&dc);
    if(dc==1){
      goto MENU;
    }else{
      goto EXIT;
    }
  }else if(err<0){
    printf("\n\n The approximation for %d terms of sin(%.2lf) is: \n\n sin(%.2lf)= %lf + (%lf) \n\n with an default relative error of %lf \n\n",n,x,x,a,err,err);
     printf("\n\n MENU - 1 or EXIT - 0 \n Value = ");
     scanf("%d",&dc);
     if(dc==1){
       goto MENU;
     }else{
       goto EXIT;
     }
  }
  
 EXIT:
  system("clear");
  return(EXIT_SUCCESS);

}
