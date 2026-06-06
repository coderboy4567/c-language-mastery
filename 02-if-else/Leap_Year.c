/* Any year is input through the keyboard. Write a program to determine wheather the year
   is a leap year or not.(Considering leap year occurs after every 4 years) */
   #include<stdio.h>
   int main()
   {
    int n;
    printf("Enter Year : ");
    scanf("%d",&n);
    if(n%4==0){
        printf("This is a leap Year");
    }
    else{
        printf("This is not leap Year");
    }
    return 0;
   }