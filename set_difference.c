#include&lt;stdio.h&gt;
#define max 100
int ifexists(int z[], int u, int v)
{
int i;
if (u==0) return 0;
for (i=0; i&lt;=u;i++)
if (z[i]==v) return (1);
return (0);
}
void main()
{
int p[max], q[max], r[max];
int m,n;
int i,j,k;
printf(&quot;Enter length of first array:&quot;);
scanf(&quot;%d&quot;,&amp;m);
printf(&quot;Enter %d elements of first array\n&quot;,m);
for(i=0;i&lt;m;i++ )
scanf(&quot;%d&quot;,&amp;p[i]);
printf(&quot;\nEnter length of second array:&quot;);
scanf(&quot;%d&quot;,&amp;n);
printf(&quot;Enter %d elements of second array\n&quot;,n);
for(i=0;i&lt;n;i++ )
scanf(&quot;%d&quot;,&amp;q[i]);
k=0;
for (i=0;i&lt;m;i++)
{
for (j=0;j&lt;n;j++)
{
if (p[i]==q[j])
{
break;
}
}
if(j==n)
{
if(!ifexists(r,k,p[i]))
{
r[k]=p[i];
k++;
}
}
}
printf(&quot;\nThe difference of the two array is:\n&quot;);
for(i = 0;i&lt;k;i++)
printf(&quot;%d\n&quot;,r[i]);
}
