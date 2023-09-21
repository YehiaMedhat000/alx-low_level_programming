# Really beautiful weird insights about the 102-magic.c task

I tried somethings whose results where very interesting, the following code shows the first thing I have tried:

```c
#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  printf("p: %d, a[2]: %d\n", p, &a[2]);
  return (0);
}
```

The output:

```powershell
p: 6422036, a[2]: 6422024
```

Note that the difference between the address of p and `a[2]` is 12 which is 3 integers, so we could visualize the memory as follows:

```bash
&a[0]: 6422016
&a[1]: 6422020
&a[2]: 6422024
&a[3]: 6422028
&a[4]: 6422032
&n: 6422036
```

The weird thing, as I mentioned earlier, is why the array a is adjacent in memory to n , and why n is after a in memory?

The first question seems to be because of some paradigm of distributing and allocating variables in the memory by the cpu, so, let's just take it for granted.

For the second question I thought that because of the precedence of putting values to the variables, as `a[2]` was set to `1024` before `n` was set to anything, so, I made the following changes to the last code to check if my guess is right or not:

```c
#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  n = 7; /* arbitrary value set to the var n */
  p = &n;
  a[2] = 1024;
  printf("p: %d, a[2]: %d\n", p, &a[2]);
  return (0);
}
```

The output:

```bash
p: 6422036, a[2]: 6422024
```

Still weird, isn't it? let's think of the size of each var, so the bigger variables have the precedence of in memory, so I changed the code to the following:

```c
#include <stdio.h>

int main(void)
{
  int n;
  int a[1];
  int *p;

  a[0] = 1024;
  n = 7;
  p = &n;
  printf("p: %d, a[0]: %d\n", p, &a[0]);
  return (0);
}
```

The output:

```bash
p: 6422036, a[2]: 6422040
```

Now the address of `n` precedes the address of `a` by one integer size, which makes sense, if all variables are the same size,  the precedence of allocation is based on the precedence of declaration, and to make sure that this is the case, I have changed the code to the following:

```c
#include <stdio.h>

int main(void)
{
  int a[1];
  int n;
  int *p;

  a[0] = 1024;
  n = 7;
  p = &n;
  printf("p: %d, a[0]: %d\n", p, &a[0]);
  return (0);
}
```

The output:

```bash
p: 6422032, a[0]: 6422036
```
