#include <stdio.h>

int main(){
    int a;
	float b;
	char c;
	a=3.14;  /* a = 3 */
	b=8;     /* b = 8.0 */
	c='0';   /* c = '0' */
	printf("a:%d b:%f c:%c\n",a,b,c);

	b=9.2;   /* b = 9.2 */
	printf("b:%f\n",b);

	a=b;     /* a = 9 */
	printf("a:%d\n",a);

	b=a;     /* b = 9.0 */
	printf("b:%f\n",b);

	a=c;     /* a = 48, since ASCII code of '0' is 48 */
	printf("a:%d\n",a);

	b=c;     /* b = 48.0 */
	printf("b:%f\n",b);

	c=49;    /* c = '1', since ASCII code of '1' is 49 */
	printf("c:%c\n",c);

	c=68;  /* c = '2' */
	printf("c:%c\n",c);

	return 0;
}
