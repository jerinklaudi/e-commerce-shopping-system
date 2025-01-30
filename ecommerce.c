#include&lt;stdio.h&gt;
#include&lt;string.h&gt;
int main()
{
static int totalCost;
int i,j,choice,c=1,a[9],cost[9];
for(i=0;i&lt;9;i++)
a[i]=0;

char str[100];
char items[9][100]={&quot;Sandisk 16 GB&quot;,
&quot;Logitech Mouse&quot;,
&quot;Pendrve 16 GB&quot;,
&quot;Adidas&quot;,
&quot;Nike&quot;,
&quot;Leecooper&quot;,
&quot;Mi Note 3&quot;,
3

&quot;Nokia 3&quot;,
&quot;Samsung&quot;
};
printf(&quot;Please Enter Your Name\n&quot;);
gets(str);
printf(&quot;Hello %s, Welcome to our Online Shopping.\n&quot;,str);
do{
//C is 1 by default
if(c==1){
printf(&quot;Enter\n1 - Computer Accessories\n2 - Shoes\n3 - Mobiles\nAny other number to
exit\n&quot;);
scanf(&quot;%d&quot;,&amp;choice);
switch(choice)
{
case 1:
{
int accessoriesChoice;
printf(&quot;Enter\n1 - Sandisk 16 GB - Rs.355\n2 - Logitech Mouse- Rs.500\n3 - Pendrive 16 GB -
Rs.550\nAny other number to exit\n&quot;);
scanf(&quot;%d&quot;,&amp;accessoriesChoice);
cost[0]=355;
cost[1]=500;
cost[2]=550;
switch(accessoriesChoice)
4

{

case 1:
{
int num;
printf(&quot;You chose Sandisk 16GB with Rs.355.Are you sure to buy.If &#39;Yes&#39; Enter 1 else any
number\n&quot;);
scanf(&quot;%d&quot;,&amp;num);
if(num==1)
{
a[0]++;
totalCost+=355;
}
printf(&quot;Your Cost in Cart is %d\n&quot;,totalCost);
break;
}
case 2:
{
int num;
printf(&quot;You chose Logitech Mouse with Rs.500.Are you sure to buy.If &#39;Yes&#39; Enter 1 else any
number\n&quot;);
scanf(&quot;%d&quot;,&amp;num);
if(num==1)
5

{
a[1]++;
totalCost+=500;
}
printf(&quot;Your Cost in Cart is %d\n&quot;,totalCost);
break;
}
case 3:
{
int num;
printf(&quot;You chose Pendrive 16GB with Rs.550.Are you sure to buy.If &#39;Yes&#39; Enter 1 else any
number\n&quot;);
scanf(&quot;%d&quot;,&amp;num);
if(num==1)
{
a[2]++;
totalCost+=550;
}
printf(&quot;Your Cost in Cart is %d\n&quot;,totalCost);
break;
}
default:{
printf(&quot;Exit from Computer Accesories\n&quot;);
6

break;
}
}
break;
}
case 2:
{
int shoesChoice;
printf(&quot;Enter\n1 - Adidas - Rs.3550\n2 - Nike - Rs.5000\n3 - Leecooper - Rs.2800\nAny other
number to exit\n&quot;);
scanf(&quot;%d&quot;,&amp;shoesChoice);
cost[3]=3550;
cost[4]=5000;
cost[5]=2800;
switch(shoesChoice)
{
case 1:
{
int num;
printf(&quot;You chose Adidas Shoes for Rs.3550.Are you sure to buy.If &#39;Yes&#39; Enter 1 else any
number\n&quot;);
scanf(&quot;%d&quot;,&amp;num);
if(num==1)
{
7

a[3]++;
totalCost+=3550;
}
printf(&quot;Your Cost in Cart is %d\n&quot;,totalCost);
break;
}
case 2:
{
int num;
printf(&quot;You chose Nike Shoes for Rs.5000.Are you sure to buy.If &#39;Yes&#39; Enter 1 else any
number\n&quot;);
scanf(&quot;%d&quot;,&amp;num);
if(num==1)
{
a[4]++;
totalCost+=5000;
}
printf(&quot;Your Cost in Cart is %d\n&quot;,totalCost);
break;
}
case 3:
{
int num;
8

printf(&quot;You chose Leecooper Shoes for Rs.2800.Are you sure to buy.If &#39;Yes&#39; Enter 1 else any
number\n&quot;);
scanf(&quot;%d&quot;,&amp;num);
if(num==1)
{
a[5]++;
totalCost+=2800;
}
printf(&quot;Your Cost in Cart is %d\n&quot;,totalCost);
break;
}
default:{
printf(&quot;Exit from Shoes Category\n&quot;);
break;
}
}
break;
}
case 3:
{
int mobileChoice;
printf(&quot;Enter\n1 - Mi Note 3 - Rs.11000\n2 - Nokia 3 - Rs.9866\n3 - Samsung - Rs.12800\nAny
other number to exit\n&quot;);
scanf(&quot;%d&quot;,&amp;mobileChoice);
9

cost[6]=11000;
cost[7]=9866;
cost[8]=12800;
switch(mobileChoice)
{
case 1:
{
int num;
printf(&quot;You chose to buy Mi Note 3 for Rs.11000.Are you sure to buy.If &#39;Yes&#39; Enter 1 else any
number\n&quot;);
scanf(&quot;%d&quot;,&amp;num);
if(num==1)
{
a[6]++;
totalCost+=11000;
}
printf(&quot;Your Cost in Cart is %d\n&quot;,totalCost);
break;
}
case 2:
{
int num;
printf(&quot;You chose to buy Nokia 3 for Rs.9866.Are you sure to buy.If &#39;Yes&#39; Enter 1 else any
number\n&quot;);
10

scanf(&quot;%d&quot;,&amp;num);
if(num==1)
{
a[7]++;
totalCost+=9866;
}
printf(&quot;Your Cost in Cart is %d\n&quot;,totalCost);
break;
}
case 3:
{
int num;
printf(&quot;You chose to buy Samsung for Rs.12800.Are you sure to buy.If &#39;Yes&#39; Enter 1 else any
number\n&quot;);
scanf(&quot;%d&quot;,&amp;num);
if(num==1)
{
a[8]++;
totalCost+=12800;
}
printf(&quot;Your Cost in Cart is %d\n&quot;,totalCost);
break;
}
11

default:{
printf(&quot;Exit from Mobile Category\n&quot;);
break;
}
}
break;
}
default:
{
printf(&quot;Enter Valid Categories Choice\n&quot;);
break;
}
}
printf(&quot;%s&#39;s cart\n&quot;,str);
printf(&quot;Id\tItems\t\tQuantity\tCost\n&quot;);
for(i=0;i&lt;9;i++)
{
if(a[i]!=0)
{
printf(&quot;%d\t%s\t\t%d\t\t\t%d\n&quot;,i,items[i],a[i],(cost[i]*a[i]));
}
}
printf(&quot;Total Cost\t\t\t\t\t%d\n&quot;,totalCost);
12

printf(&quot;If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to
Change Quantity \nAny other number to Exit\n&quot;);
scanf(&quot;%d&quot;,&amp;c);
}
if(c==2)
{
int id;
printf(&quot;Enter id to delete item\n&quot;);
scanf(&quot;%d&quot;,&amp;id);
if(id&lt;9&amp;&amp;id&gt;0){
totalCost=totalCost-(cost[id]*a[id]);
a[id]=0;
}
else{
printf(&quot;Enter Valid id\n&quot;);
}
printf(&quot;Revised Items \n&quot;);
printf(&quot;Id\tItems\t\tQuantity\tCost\n&quot;);
for(i=0;i&lt;9;i++)
{
if(a[i]!=0)
{
printf(&quot;%d\t%s\t%d\t\t%d\n&quot;,i,items[i],a[i],(cost[i]*a[i]));
13

}
}
printf(&quot;Total Cost\t\t\t\t\t%d\n&quot;,totalCost);
printf(&quot;If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to
Change Quantity \nAny other number to Exit\n&quot;);
scanf(&quot;%d&quot;,&amp;c);
}
if(c==3)
{
int id,quantity;
printf(&quot;Enter id to Change quantity of an item\n&quot;);
scanf(&quot;%d&quot;,&amp;id);
printf(&quot;Enter quantity to be changed of an item\n&quot;);
scanf(&quot;%d&quot;,&amp;quantity);
if(id&lt;9&amp;&amp;id&gt;0){
if(quantity&gt;0 &amp;&amp; a[id]&gt;0){
if(quantity&lt;a[id])
{
int dec=a[id]-quantity;
a[id]=quantity;
totalCost=totalCost-(cost[id]*dec);
}
if(quantity&gt;a[id])
14

{
int inc=quantity-a[id];
a[id]=quantity;
totalCost=totalCost+(cost[id]*inc);
}
if(quantity==a[id])
{
a[id]=quantity;
totalCost=totalCost+0;
}

}
else{
printf(&quot;Item has no Quantity.Please Try again\n&quot;);
}
}
else{
printf(&quot;Enter Valid id\n&quot;);
}
printf(&quot;Revised Items \n&quot;);
printf(&quot;Id\tItems\t\tQuantity\tCost\n&quot;);
for(i=0;i&lt;9;i++)
{
15

if(a[i]!=0)
{
printf(&quot;%d\t%s\t%d\t\t%d\n&quot;,i,items[i],a[i],(cost[i]*a[i]));
}
}
printf(&quot;Total Cost\t\t\t\t\t%d\n&quot;,totalCost);
printf(&quot;If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to
Change Quantity \nAny other number to Exit\n&quot;);
scanf(&quot;%d&quot;,&amp;c);
}
}while(c==1 || c==2 ||c==3);
printf(&quot;Your Final Cost is %d\n&quot;,totalCost);
printf(&quot;Thanks %s for Choosing Us and Visit us again.\n&quot;,str);

}