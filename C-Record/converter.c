#include <stdio.h>

void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];
  
    // counter for binary array
    int i = 0;
    while (n > 0) {
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
  
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}
 
void decToOctal(int n)
{
  
    // array to store octal number
    int octalNum[100];
  
    // counter for octal number array
    int i = 0;
    while (n != 0) {
  
        // storing remainder in octal array
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
  
    // printing octal number array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octalNum[j]);
}
int main()
{
   int n;
   printf("Enter the number:");
   scanf("%d",&n);
   if(n<0){
       printf("Error");
       return 0;
   }
   decToBinary(n);
   printf("\n");
   decToOctal(n);
   printf("\n");
   printf("%X",n);
   
}
