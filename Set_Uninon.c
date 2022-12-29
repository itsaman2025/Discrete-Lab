#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
int main()
{
 int a[10],b[10],m,n,i,j;
 int c[20],k=0,flag=0;
 int ch;
 printf(&quot;Enter the number of elements in first set:\n&quot;);
 scanf(&quot;%d&quot;,&amp;m);
 printf(&quot;Enter the elements:\n&quot;);
 for(i=0;i&lt;m;i++)
 {
 scanf(&quot;%d&quot;,&amp;a[i]);
 }
 printf(&quot;\nElement of First set:\n&quot;);
 for(i=0;i&lt;m;i++)
 {
 printf(&quot;%d\t&quot;,a[i]);
 }
 printf(&quot;\nEnter the number of elements in second set:\n&quot;);
 scanf(&quot;%d&quot;,&amp;n);
 printf(&quot;Enter the elements:\n&quot;);
 for(i=0;i&lt;n;i++)
 {
 scanf(&quot;%d&quot;,&amp;b[i]);
 }
 printf(&quot;\nElement of Second set:\n&quot;);
 for(i=0;i&lt;n;i++)
 {
 printf(&quot;%d\t&quot;,b[i]);
 }
 for(i=0;i&lt;m;i++)
 {
 c[k]=a[i];
 k++;
 }
 for(i=0;i&lt;n;i++)
 {
 flag=0;
 for(j=0;j&lt;m;j++)
 {
 if(b[i]==c[j])
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 {
 c[k]=b[i];
 k++;
 }
 }
 printf(&quot;\nElement of resultant set\n&quot;);
 for(i=0;i&lt;k;i++)
 {
 printf(&quot;%d\t&quot;,c[i]);
 }
} 
