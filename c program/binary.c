#include <stdio.h>
#include <math.h>

int number_of_binary_digits_required(int n){

//int digits = 0;

//while(n) {n=n/2; digits++;}

//return digits;

return floor(log2(n))+1;

}

void print_array(int * a, int n){

    int i = 0;
    for (;i<n;i++){
        printf("%d\t", a[i]);
    }

}


int main(){

int num = 256;
int binary[100];
int n = number_of_binary_digits_required(num);
int bin_digits = n-1;

while (num){

   int temp = num%2;
   num = num / 2;
   binary[bin_digits] = temp;
   //printf("%d\n", bin_digits);
   bin_digits--;

}

print_array(binary, n);

//printf("%d", number_of_binary_digits_required(num));
//for(bin_digits = 0;bin_digits < number_of_binary_digits_required(num);bin_digits++)
//printf("%d",binary[bin_digits]);


}
