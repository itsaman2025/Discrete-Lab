#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
void main(){
int s[20],r[20][2],i,j,k,n,m,f=0,g=0,x,y,z=99;
clrscr();
printf(&quot;enter the no. of elements in a set:&quot;);
scanf(&quot;%d&quot;,&amp;n);
printf(&quot;enter the elements of set:&quot;);
for(i=1;i&lt;=n;i++)
scanf(&quot;%d&quot;,&amp;s[i]);
printf(&quot;enter the no. of relation set:&quot;);
scanf(&quot;%d&quot;,&amp;m);
printf(&quot;enter the pairs of relation set:&quot;);
for(i=1;i&lt;=m;i++)
scanf(&quot;%d%d&quot;,&amp;r[i][1],&amp;r[i][2]);
printf(&quot;The entered relation is:&quot;);
printf(&quot;{&quot;);
for(i=1;i&lt;=m;i++)
printf(&quot;(%d,%d),&quot;,r[i][1],r[i][2]);
printf(&quot;\b}&quot;);
//to check currect relation set elements look below
for(i=1;i&lt;=m;i++){ //m is no of relation elemets
for(j=1;j&lt;=n;j++){ //n is no of set elemets
if(r[i][1]==s[j])
f++;
if(r[i][2]==s[j]) // r[80][2] is metrix to store relation set elements
g++;
} //end of for loop of j
if(f==0||g==0){
printf(&quot;\nYou entered wrong relation set.&quot;);
getch();
exit(0);
}
f=0;
g=0;
} //end of for loop of i
//intially f=0 and g=0;
//to check either it is refelexive or not
f=0;
for(i=1;i&lt;=m;i++){
if(r[i][1]==r[i][2])
f++;
}
if(f==n)
printf(&quot;\nThe enter set relation is refelexive.&quot;);
//to check either it is symmetric or not
f=0;g=0;
for(i=1;i&lt;=m;i++){
x=r[i][1];
y=r[i][2];
g++;
for(j=1;j&lt;=m;j++){
if(x==r[j][2]&amp;&amp;y==r[j][1])
f++;
}
if(f==0)
goto d;
f=0;
}
if(g==m)
printf(&quot;\nThe relation is symmetric.&quot;);
//to check either it is transitive or not
d:
f=0;g=0;
for(i=1;i&lt;=m;i++){
for(j=1;j&lt;=m;j++){
for(k=1;k&lt;=m;k++){
x=r[i][1];y=r[i][2];
if(y==r[j][1])
z=r[j][2];
if(x==r[k][1]&amp;&amp;z==r[k][2])
f++;
}}
if(f==0)
goto h;
f=0;
}
printf(&quot;\nThe relation is transitive.&quot;);
h:
getch();
}
