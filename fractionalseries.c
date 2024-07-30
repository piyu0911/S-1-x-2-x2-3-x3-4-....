//S = 1 + x/2 + x2/3 + x3/4 + .....
main()
{
      float term,sum=0;
      int i=1,x,n,nr = 1,dr = 1;
      clrscr();
      printf("Enter values of x and n");
      scanf("%d %d",&x,&n);
      while(i<=n){
          term = nr/(dr*1.0);
          sum = sum + term;
          nr = nr * x;
          dr = dr + 1;
          i = i + 1;
      }
      printf("S = %f",sum);
      getch();
}
