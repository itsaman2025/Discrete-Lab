#include &lt;stdio.h&gt;
int sum(int n);
int main() {
int number, result;
printf(&quot;Enter a positive integer: &quot;);
scanf(&quot;%d&quot;, &amp;number);
result = sum(number);
printf(&quot;sum = %d&quot;, result);
return 0;
}
int sum(int n) {
if (n != 0)
// sum() function calls itself
return n + sum(n-1);
else
return n;
}
