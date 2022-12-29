#include &lt;stdio.h&gt;
int main()
{
int a[10], b[10], flag = 0, n1, n2, i, j;
printf(&quot;Enter set1 size : &quot;);
scanf(&quot;%d&quot;,&amp;n1);
printf(&quot;\nEnter set2 size : &quot;);
scanf(&quot;%d&quot;,&amp;n2);
printf(&quot;\nEnter set1 element : &quot;);
for(i = 0;i &lt; n1;i++)
scanf(&quot;%d&quot;,&amp;a[i]);
printf(&quot;\nEnter set2 element : &quot;);
for(i = 0;i &lt; n2;i++)
scanf(&quot;%d&quot;,&amp;b[i]);
printf(&quot;Intersection: &quot;);
for(i = 0;i &lt; n1;i++)
{
for(j = 0;j &lt; n2;j++)
{
if(b[i] == a[j])
{
flag = 1;
}
}
if(flag == 1)
{
printf(&quot;%d &quot;, b[i]);
}
flag = 0;
}
return 0;
}
