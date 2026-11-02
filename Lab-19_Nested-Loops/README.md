# Lab 19: Nested Loops

## Question 56

Write a C program to print a right-angled star pattern.

**Flowchart**

```mermaid
flowchart TD
    Start([Start]) --> Input[/Read number of rows N/]
    Input --> OuterInit[i = 1]
    OuterInit --> OuterCond{"i <= N?"}
    OuterCond -- Yes --> InnerInit[j = 1]
    InnerInit --> InnerCond{"j <= i?"}
    InnerCond -- Yes --> PrintStar[/Print "* "/]
    PrintStar --> IncJ[j = j + 1] --> InnerCond
    InnerCond -- No --> NewLine[/Print Newline/]
    NewLine --> IncI[i = i + 1] --> OuterCond
    OuterCond -- No --> End([End])
```

**Program** ([`solution.c`](Q56_right_triangle_pattern/solution.c))

```c
#include <stdio.h>
int main()
{
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
```

**Input**

```text
5
```

**Output**

```text
Enter the number of rows: 5
* 
* * 
* * * 
* * * * 
* * * * * 
```

---

## Question 57

Write a C program to print a square star pattern.

**Flowchart**

```mermaid
flowchart TD
    Start([Start]) --> Input[/Set size N = 5/]
    Input --> OuterInit[i = 1]
    OuterInit --> OuterCond{"i <= N?"}
    OuterCond -- Yes --> InnerInit[j = 1]
    InnerInit --> InnerCond{"j <= N?"}
    InnerCond -- Yes --> PrintStar[/Print "* "/]
    PrintStar --> IncJ[j = j + 1] --> InnerCond
    InnerCond -- No --> NewLine[/Print Newline/]
    NewLine --> IncI[i = i + 1] --> OuterCond
    OuterCond -- No --> End([End])
```

**Program** ([`solution.c`](Q57_square_pattern/solution.c))

```c
#include <stdio.h>
int main()
{
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
```

**Input**

```text
5
```

**Output**

```text
Enter the number of rows: 5
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
```

---
