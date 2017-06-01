Welcome to timelib
===================


Time library provides you a simple interface to measure the time taken by your code in milli-seconds. It lets you to initialize and use as many counters as you need across your code by using just 4 APIs.

1)``` tl_init(uint32_t count);```
>- Total number of counters you need in your code: _**count**_

2) tl_start(uint32_t count);
>- Start counter number: _**count**_

3)``` tl_stop(uint32_t count);```
>- Stop counter number: _**count**_

4) ```tl_show(uinte32_t);```
>- Displays all counters at once.

----------

Example
-------------

```
int main(int argc, char *argv[])
{
	tl_init(2);	/*Initializes 2 counters*/
	
	tl_start(1);
	/*Routine 1*/
	tl_stop(1);
	
	tl_start(2);
	/*Routine 2*/
	tl_stop(2);
	
	tl_show();	/*Displays both counters' values in mSec*/
	
	return 0;
}
```

---
**PS:** I was practising some common algorithms the other day. To analyse the time taken by each of them, I felt the need to have a simple, hassle-free yet efficient interface that can measure time in milli seconds. So I developed this tiny library that can achieve the purpose.

I hope it helps you out as well. :)