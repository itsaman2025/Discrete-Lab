#include&lt;stdio.h&gt;
void main()
{
int a[2][2],b[2][2],c[2];
int i,j;
for(i=0;i&lt;=1;i++)
{
for(j=0;j&lt;=1;j++)
 {
 a[i][j]=(i&amp;&amp;j);
 b[i][j]=(i||j);
 }
}
for(i=0;i&lt;=1;i++)
{
c[i]=(!i);
}
printf(&quot;\nThe Truth Table for AND Gate( &amp;&amp; ) is..\n&quot;);
printf(&quot; A B : C=A&amp;&amp;B\n&quot;);
for(i=0;i&lt;=1;i++)
{
 for(j=0;j&lt;=1;j++)
 {
 printf(&quot; %d %d : %d\n&quot;,i,j,a[i][j]);
 }
}
printf(&quot;\nThe Truth Table for OR Gate( || ) is..\n&quot;);
printf(&quot; A B : C=A||B\n&quot;);
for(i=0;i&lt;=1;i++)
{
 for(j=0;j&lt;=1;j++)
 {
 printf(&quot; %d %d : %d\n&quot;,i,j,b[i][j]);
 }
}
printf(&quot;\nThe Truth Table for NOT Gate (!) is..\n&quot;);
printf(&quot; A : B = !A\n&quot;);
for(i=0;i&lt;=1;i++)
{
 printf(&quot; %d : %d\n&quot;,i,c[i]);
}
}
