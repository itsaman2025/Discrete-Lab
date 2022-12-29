#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
int main()
{
int a[50],b[50],c[50],i,s1,s2,j,k;
printf(&quot;Enter how many elements in set 1\n&quot;);
scanf(&quot;%d&quot;,&amp;s1);
printf(&quot;Enter how many elements in set 2\n&quot;);
scanf(&quot;%d&quot;,&amp;s2);
printf(&quot;Enter elements of set 1\n&quot;);
for(i=0;i&lt;s1;i++)
{
scanf(&quot;%d&quot;,&amp;a[i]);
}
printf(&quot;Enter elements of set 2\n&quot;);
for(i=0;i&lt;s2;i++)
{
scanf(&quot;%d&quot;,&amp;b[i]);
}
printf(&quot;cartessian product=&quot;);
printf(&quot;{&quot;);
for(i=0;i&lt;s1;i++)
{
for(j=0;j&lt;s2;j++)
{
printf(&quot;(%d,%d)&quot;,a[i],b[j]);
printf(&quot;,&quot;);
}
}
printf(&quot;}&quot;);
}
