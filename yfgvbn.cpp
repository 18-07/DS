struct student
{
 int sno;
 char sname[20];
float per;
}s1[100];
int main()
{
 int i,n,ch;
printf("enter limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("enter roll no sname per");
 scanf("%d%s%f",&s1[i].sno,&s1[i].sname,&s1[i].per);
}
 do
{
printf("\n 1-display all\n2-disp hvaing per>70");
printf("enter choice");
scanf("%d",&ch);
switch(ch)
{
case 1:for(i=0;i<n;i++)
     {
     printf("\n roll no=%d",s1[i].sno);
   printf("\n name=%d",s1[i].sname);
   printf("\n per=%d",s1[i].per);
   
break;

case 2:for(i=0;i<n;i++)
        {
        if(s1[i].per>70)
   {
     printf("\n roll no=%d",s1[i].sno);
   printf("\n name=%d",s1[i].sname);
   printf("\n per=%d",s1[i].per)
}
}break;
default:printf("invalid choice");
}
}while(ch>3);
}












