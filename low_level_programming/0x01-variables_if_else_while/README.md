# Variables, if, else, while

## 1. Arithmetic Operators in C

Arithmetic operators perform mathematical operations on numeric values.

| Operators | Description | Examples |
| :-- | :-- | :- |
| `+` | Addition |`a+b` |
| `-` | Subtraction |`a-b` |
| `*` | Multiplication |`a*b`|
| `/` | Division | `a/b`(integer division if both operands are integers) |
| `%` | Modulos (Reminder) | `a%b` (returns reminder of `a/b`) |

Example Usage
```c
#include <stdio.h>

int main(void)
{
	int a = 10, b = 3;
	printf("Addition: %d\n", a+b);
	printf("Subtraction: %d\n", a-b);
	printf("Multiplication: %d\n", a*b);
	printf("Division: %d\n", a/b);
	printf("Modulus: %d\n", a%b);
	return (0);
}
```

---

## 2. Logical (Boolean) Operators in C

Logical operators are used to evaluate **true(1)** or **false(0)** conditions.

| Operator | Description | Function |
| :--| :--| :--|
| `&&` | Logical AND | Returns true only if both operands are true; otherwise, it returns false |
|`\|\|` | Logical OR | Returns true if at least one of the opreands is true; otherwise, it returns false |
|`!` | Logical NOT | Negates the boolean value of an expression. It returns true if the expression is false, and false if the expression is true |
|`^` | Logical XOR | it returns true if the operands are different, and false if they are the same |

---

## Relational Operators in C
Used for comparisons, returning **1 (true)** or **0 (false)**.
| Operator | Description | Examples |
| :--      | :--         | :--      |
| `==` | Equal to | `a == b` |
| `!=` | Not equal to | `a != b` |
| `>`  | Greater than | `a > b`  |
| '<'  | Less than    | `a < b`  |
| `>=' | Greater than or equal to | `a >= b` |
| `<=` | Less than or equal to | `a <= b` |

**Example of Usage**
```c
#include <stdio.h>
int main()
{
	int x = 10
	int y = 20
	
	printf("x == y: %d\n", x == y);
	printf("x != y: %d\n", x != y);
	printf("x > y: %d\n", x > y);
	printf("x < y: %d\n", x < y);
	return (0);

}
```

---

## 4. True and False Values in C
  - **Any nonzero value** is considered **TRUE (1)**.
  - **Zero (`0`)** is considered **FALSE(0)**.

---

## 5. Boolean Operators in C
C does **not** have a built-in `bool` type (before C99). Instead
  - Use `#include <stdbool.h> (C99+).
  - Use `int` type (`0` is false, nonzero is true).
  ```c
  #include <stdio.h>
  #include <stdbool.h>
  
  int main()
  {
	bool isTrue = 1;
	bool isFalse = 0;
	
	printf("isTrue: %d\n", isTrue);
	printf("isFalse: %d\n", isFalse);
	return (0);
  }
```

---

## Using `if` and `if... else` Statements.

**Syntax**
``` c
if (condition)
   {
	// Code runs if condition is true
   }
   else {
   // Code runs if condition is false
   }
```

**Example**
``` c
#include <stdio.h>

int main(void)
{
	int num = 10;
	if (num > 5)
	{
		printf("Number is greater than 5\n");
	}
	else
	{
		printf("Number is 5 or less\n");
	}
	return (0);
}
```

---

## 7. Comments in C
  - **Single-line comment:** `// This is a comment`
  - **Multi-line comment:**
  ```
  /**
   * This is a multi-line comment.
   */
   ```

---

## Declaring Variables

| Type | Description | Example |
| :-- | :-- | :-- |
| `char` | Stores a single character | `char c = \`A\`;` |
| `int` | Stores whole numbers | `int age = 25;` |
| `unsigned int | Stores only positive integers | `unsigned int count = 10;` |

---

## Using the `while` Loop
**Syntax**
```c
while (condition)
{
// Code inside loop
}
```

**EXAMPLE**
```c
#include <stdio.h>

int main(void)
{
  int i = 1;
  while (i <= 5)
  {
	printf("Count: %d\n", i);
	i++; // Increment i
  }
  return (0);

}
```

---

## Using Variables with `while` Loop
```c

int x = 10;
while (x > 0)
{
	printf("%d\n", x);
 	x--;
 }
```

---

## ASCII Character Set

ASCII (American Standard Code for Information Interchange) assigns values to characters.

---

## Purpose of `gcc` Flags `-m32` and `-m64`
  - `-m32` - Compile for **32-bit** architecture.
  - `-m64` - Compile fofr **64-bit** architecture.
```bash

gcc -m32 myprogram.c -o myprogram32
gcc -m64 myprogram.c -o myprogram64
```
