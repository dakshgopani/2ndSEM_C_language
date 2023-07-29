 #include<stdio.h>
 void main()
 {
     int a[100],i,n,f=0;
     for(int i=0;i<5;i++) {
        printf("Enter the number in the cell : ");
        scanf("%d",&a[i]);
     }
     printf("Enter a number to be searched : ");
     scanf("%d",&n);
     for(i=0;i<5;i++) {
        if(a[i]==n)
            f=1;
     }
     if(f==1)
        printf("Number is found");
     else
        printf("Number is not found");
 }
