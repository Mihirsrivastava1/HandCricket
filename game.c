#include<stdio.h>
    #include<stdlib.h>
    #include<time.h>
    void main()
    {int number1,m=0,toss,add1=0,number2,add2=0,play,sum=0,number3=0,ball,run,add3=0,dball,j,number4,yrun,yball,add4=0,add6=0,add8=0;
    printf("Time for toss\n");
    printf("Choose 1 for head and 2 for tail: ");
    scanf("%d",&toss);
    srand(time(0));
    number2=rand()%2+1;
    
    if(number2==toss)
    {   int over,balls=0,overs,i,a=0;
        printf("you won the toss");
        printf("\n Enter number of overs: ");
        scanf("%d",&over);
        overs=over*6;
        printf("\n Choose 1 for bat and 2 for ball: ");
        scanf("%d",&play);
          if(play==1)
        { printf("you choosed to bat\n");
         for(i=1;i<=overs;i++)
         {srand(time(0));
         number3=rand()%25+1;
         if(number3<5)
         {
          ball=1;
         }
         else if(number3>=5&&number3<10)
         {
             ball=2;
         }
         else if(number3>=10&&number3<15)
         {
             ball=3;
         }
         else if(number3>=15&&number3<20)
         {
             ball=4;
         }
         else
         {
             ball=6;
         }
    
        printf("Select run(1,2,3,4,6): " );
         scanf("%d",&run);
         printf("computer choosed %d as ball\n",ball);
         if(run==ball)
         {   printf("You are out so last run not counted in total score\n");
             goto A;
         }
         if(overs==i)
         {
             printf("Over completed\n");
         }
        sum=a+run;
        a=sum;
    
        }printf("Total score by you=%d",sum);
        A:{ printf("Total run scored by you= %d",sum);}
    printf("\n Now computer will bat and you will ball\n");
    int j,number4,sum1=0,crun,yball,b=0;
    for(j=1;j<=overs;j++)
         {srand(time(0));
         number4=rand()%25+1;
         //printf("%d",number4);
         if(number4<5)
         {
          crun=1;
         }
         else if(number4>=5&&number4<10)
         {
             crun=2;
         }
         else if(number4>=10&&number4<15)
         {
             crun=3;
         }
         else if(number4>=15&&number4<20)
         {
             crun=4;
         }
         else
         {
             crun=6;
         }
        printf("Select one number as your ball(1,2,3,4,6): " );
         scanf("%d",&yball);
         printf("Computer choosed %d as run\n",crun);
         if(crun==yball)
         {   printf("\n computer is out \n");
             goto B;
         }
          if(overs==i)
         {
             printf("Over completed\n");
         }
    
         sum1=b+crun;
         b=sum1;
         if(sum1>sum)
         {
             printf("Computer won");
             break;
         }
    
    
        }printf("\nTotal score by computer=%d",sum1);
        B: {printf("\nTotal run scored by computer=%d",sum1);}
        printf("\n *Now result is **");
        printf("\n your score=%d",sum);
        printf(" \n computer score=%d",sum1);
        if(sum>sum1)
        {printf("\n You won the match\n");}
        else if(sum<sum1)
        {printf("\nComputer won the match");}
        else
        {printf("\n Match draw");}
        }
        else
        {printf("You choosed to ball\n");
           for(i=1;i<=overs;i++)
         {srand(time(0));
         number3=rand()%25+1;
         //printf("%d",number3);
         if(number3<5)
         {
          ball=1;
         }
         else if(number3>=5&&number3<10)
         {
             ball=2;
         }
         else if(number3>=10&&number3<15)
         {
             ball=3;
         }
         else if(number3>=15&&number3<20)
         {
             ball=4;
         }
         else
         {
             ball=6;
         }
    
        printf("Select one as your ball(1,2,3,4,6): " );
         scanf("%d",&run);
         printf("Computer choosed %d as run\n",ball);
         if(run==ball)
         {   printf("Computer is out so last run not counted in total score\n");
             goto M;
         }
          if(overs==i)
         {
             printf("Over completed\n");
         }
        add1=a+ball;
        a=add1;
    
        }printf("Total score by computer=%d",add1);
        M: {printf("Total run scored by computer= %d",add1);}
    printf("\n Now computer will ball and you will bat\n");
    int j,number4,sum5=0,crun,yball,b=0;
    for(j=1;j<=overs;j++)
         {srand(time(0));
         number4=rand()%25+1;
         //printf("%d",number4);
         if(number4<5)
         {
          crun=1;
         }
         else if(number4>=5&&number4<10)
         {
             crun=2;
         }
         else if(number4>=10&&number4<15)
         {
             crun=3;
         }
         else if(number4>=15&&number4<20)
         {
             crun=4;
         }
         else
         {
             crun=6;
         }
        printf("Select run(1,2,3,4,6): " );
         scanf("%d",&yball);
         printf("Computer choosed %d as ball\n",crun);
         if(crun==yball)
         {   printf("\n you are out \n");
             goto N;
         }
          if(overs==i)
         {
             printf("Over completed\n");
         }
         add3=b+yball;
         b=add3;
         if(add3>add1)
         {
             printf("\n You won");
             break;
         }
    
    
        }printf("\nTotal score by you=%d",add3);
        N: {printf("\nTotal run scored by you=%d",add3);}
        printf("\n *Now result is **");
        printf("\n your score=%d",add3);
        printf(" \n computer score=%d",add1);
        if(add1<add3)
        {printf("\n You won the match\n");}
        else if(add1>add3)
        {printf("\nComputer won the match");}
        else
        {printf("\n Match draw");}
        }
    
    }
    else
    { int number6,k,number8;
    int ove,cballs=0,overy,i,c=0,sum3,crun;
    printf("computer won the toss\n");
        srand(time(0));
        number8=rand()%2+1;
        //printf("%d",&number8);
        if(number8==2)
        {
            printf("\n computer choose to ball ");
            printf("\n Enter number of overs: ");
        scanf("%d",&ove);
        overy=ove*6;
            for(i=1;i<=overy;i++)
         {srand(time(0));
         number6=rand()%25+1;
         if(number6<5)
         {
          cballs=1;
         }
         else if(number6>=5&&number6<10)
         {
             cballs=2;
         }
         else if(number6>=10&&number6<15)
         {
             cballs=3;
         }
         else if(number6>=15&&number6<20)
         {
             cballs=4;
         }
         else
         {
             cballs=6;
         }
    
        printf("Select run(1,2,3,4,6): " );
         scanf("%d",&crun);
         printf("Computer choosed %d as ball\n",cballs);
         if(crun==cballs)
         {   printf("You are out so last run not counted in total score\n");
             goto C;
         }
          if(overy==i)
         {
             printf("Over completed\n");
         }
        add6=c+crun;
        c=add6;
    
        }printf("Total score by you=%d",add6);
        C:{printf("Total run scored by you=%d",add6);}
    printf("\n Now computer will bat and you will ball\n");
    int j,number4,sum1=0,yrun,yball,b=0;
    for(j=1;j<=overy;j++)
         {srand(time(0));
         number4=rand()%25+1;
         //printf("%d",number4);
         if(number4<5)
         {
          yrun=1;
         }
         else if(number4>=5&&number4<10)
         {
             yrun=2;
         }
         else if(number4>=10&&number4<15)
         {
             yrun=3;
         }
         else if(number4>=15&&number4<20)
         {
             yrun=4;
         }
         else
         {
             yrun=6;
         }
        printf("Select one number as your ball(1,2,3,4,6): " );
         scanf("%d",&yball);
         printf("Computer choosed %d as run\n",yrun);
         if(yrun==yball)
         {   printf("\n computer is out \n");
             goto D;
         }
          if(overy==i)
         {
             printf("Over completed\n");
         }
         add8=b+yrun;
         b=add8;
         if(add8>add6)
         {
             printf("\nComputer won\n");
             break;
         }
    
    
        }printf("Total score by computer=%d",add8);
        D: {printf("Total run scored by computer=%d",add8);}
        printf("\n *Now result is **");
        printf("\n your score=%d",add6);
        printf(" \n computer score=%d",add8);
        if(add6>add8)
        {printf("\n You won the match\n");}
        else if(add6<add8)
        {printf("\nComputer won the match\n");}
        else
        {printf("\n Match draw");}
        }
        else
        {
            printf("computer choose to bat");
            int number6,k,number8;
    int ove,cballs=0,overy,i,c=0,sum3,crun,sum4,sum5;
    printf("\n Enter number of overs: ");
        scanf("%d",&ove);
        overy=ove*6;
        int j,number4,sum7=0,yrun,yball,b=0,frun=0;
    for(j=1;j<=overy;j++)
         {srand(time(0));
         number4=rand()%25+1;
         //printf("%d",number4);
         if(number4<5)
         {
          yrun=1;
         }
         else if(number4>=5&&number4<10)
         {
             yrun=2;
         }
         else if(number4>=10&&number4<15)
         {
             yrun=3;
         }
         else if(number4>=15&&number4<20)
         {
             yrun=4;
         }
         else
         {
             yrun=6;
         }
        printf("Select one number as your ball(1,2,3,4,6): " );
         scanf("%d",&yball);
         printf("Computer choosed %d as run\n",yrun);
    
         if(yrun==yball)
         {   printf("Computer is  out so last run not counted in total score\n");
             goto Z;}
              if(overy==i)
         {
             printf("Over completed\n");
         }
    
         add2=b+yrun;
         b=add2;}
             printf("Total score by computer=%d",add2);
        Z:{printf("Total run scored by computer=%d",add2);}
    printf("\n Now you will bat and computer will ball\n");
    for(j=1;j<=overy;j++)
         {srand(time(0));
         number4=rand()%25+1;
         //printf("%d",number4);
         if(number4<5)
         {
          frun=1;
         }
         else if(number4>=5&&number4<10)
         {
             frun=2;
         }
         else if(number4>=10&&number4<15)
         {
             frun=3;
         }
         else if(number4>=15&&number4<20)
         {
             frun=4;
         }
         else
         {
             frun=6;
         }
        printf("Select one number as your run(1,2,3,4,6): " );
         scanf("%d",&dball);
         printf("Computer choosed %d as ball\n",frun);
    
         if(frun==dball)
         {   printf("\you are out so last run not counted in total\n");
             goto G;
         }
          if(overy==i)
         {
             printf("Over completed\n");
         }
         add4=m+dball;
         m=add4;
    
          if(add2<add4)
         {
             printf("\n you won\n");
             break;
         }
    
    
        }printf("Total score by you=%d\n",add4);
        G: {printf("Total run scored by you=%d\n",add4);}
        printf("\n *Now result is **");
        printf("\n your score=%d",add4);
        printf(" \n computer score=%d",add2);
        if(add4>add2)
        {printf("\n You won the match\n");}
        else if(add4<add2)
        {printf("\nComputer won the match\n");}
        else
        {printf("\n Match draw");}
        }
        }
        }