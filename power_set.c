#include &lt;stdio.h&gt;
#include &lt;math.h&gt;
voidprintPowerSet(char*set, intset_size)
{
 /*set_size of power set of a set with set_size
 n is (2**n -1)*/
 unsigned intpow_set_size = pow(2, set_size);
 intcounter, j;
 /*Run from counter 000..0 to 111..1*/
 for(counter = 0; counter &lt; pow_set_size; counter++)
 {
 for(j = 0; j &lt; set_size; j++)
 {
 /* Check if jth bit in the counter is set
 If set then pront jth element from set */
 if(counter &amp; (1&lt;&lt;j))
 printf(&quot;%c&quot;, set[j]);
 }
 printf(&quot;n&quot;);
 }
}
/*Driver program to test printPowerSet*/
intmain()
{
 charset[] = {&#39;a&#39;,&#39;b&#39;,&#39;c&#39;};
 printPowerSet(set, 3);
 getchar();
 return0;
}
