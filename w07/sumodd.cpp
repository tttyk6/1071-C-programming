#include<stdio.h>

int sum(int n){
if(n==1)return 1;
else
    return sum(n-1)+n;
}

int sumodd1(int n){
if(n==1)return 1;
else
    return sumodd1(n-1)+(2*n-1);
}

int sumodd2(int n){
if(n==1) return 1;
else
    return sumodd2(n-2)+n;
}


int main(){
         int n=9;
         printf("sumodd1(%d) = %d\n", n, sumodd1(n));
         printf("sumodd2(%d) = %d\n", n, sumodd2(n));

         }




         /*
         Fibanacci series

         0 1 1 2 3 5 8 13 21 34 55 ...


         fib(0) = 0
         fib(1) = 1
         fib(n) = fib(n-1) + fib(n-2), n>=2
         */
