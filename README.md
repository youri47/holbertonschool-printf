# Project C - printf

The goal of this project is to recreate a simplified version of the standard C library `_printf` function.

**Description :**

Our goal is to create our own `_printf` function as a team, replicating the behavior of C’s standard `printf`. This function formats and prints output to `stdout` using format specifiers like `%d`, `%s`, `%c`, etc.

In this project, we aim to:
- Handle various format specifiers,
- Manage variable arguments,
- Match the original function’s behavior as closely as possible.

This will deepen our understanding of formatting, memory management, and how standard library functions work.

**Flowchart :**

<img width="2816" height="1536" alt="Flowchart G" src="https://github.com/user-attachments/assets/31f36821-1a6a-42ac-986a-e2c2ec06a8ba" />

**Command Compilation** :

`$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

**Exemples :** 

Input :

`_printf("Hello %s!\n", "Holberton");`

`_printf("Character: %c\n", 'A');`

`_printf("Number: %d\n", 98);`

Output :

`Hello Holberton!`

`Character: A`

`Number: 98`

**Man page :**

`man ./man_3_printf`

**Details :** 

The files have been witten in the Betty coding style.

**By :**

Yonnhi Marcellus (GitHub : youri47)

& 

Dylan Serigba (GitHub : d-serigba)

