*This project has been created as part of the 42 curriculum by <login1>.*

# Libft

## Description

**Libft** is the first project of the 42 curriculum and consists of building a custom C library that reimplements standard libc functions, along with additional utilities for memory handling, string manipulation, and linked list management.

The main objectives of this project are:

- To deeply understand how fundamental C standard library functions work.
- To gain solid experience with memory management.
- To work extensively with pointers and structures.
- To write clean, modular, and reusable code.
- To create and compile a static library (`.a`).

This library will serve as a foundation for many future projects in the 42 curriculum.

---

## Instructions

### Compile the library

```bash
make
```
This will generate:

```code
libft.a
```
### Compile with bonus functions (linked lists)

```bash
make bonus
```
### Remove object files

```bash
make clean
```

### Remove object files and the library

```bash
make fclean
```

### Recompile everything

```bash
make re
```

## Detailed Library Description

The `libft.a` library includes the following categories of functions:

---

### Character checking functions

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`

Reimplementation of functions from `<ctype.h>` used to validate character types.

---

### Memory manipulation

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

These functions allow modifying, copying, comparing, and allocating memory blocks safely and efficiently.

---

### String manipulation

- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strdup`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_strmapi`
- `ft_striteri`

Functions for searching, copying, comparing, trimming, splitting, and transforming strings.

---

### Type conversion

- `ft_atoi`
- `ft_itoa`

Conversion between strings and integers.

---

### File descriptor output functions

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

These functions allow writing characters, strings, and numbers to any file descriptor (standard output, error output, files, etc.).

---

### Bonus – Linked Lists

Implementation of a singly linked list:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```
#### Included functions

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

These functions allow creating, modifying, iterating, mapping, and safely freeing linked lists.

## Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *str = ft_strdup("Hello 42");
	printf("%s\n", str);
	free(str);
	return (0);
}
```

Compile with:

```bash
cc main.c libft.a
```
## Resources

- Unix manual pages (man calloc, man strdup, man strrchr, ...).
- ISO C standard documentation.
- Project subject.

---

## Use of AI

AI was used only as conceptual support for:

- Clarifying specific behaviors of the C standard.
- Understanding edge cases in memory handling.
- Reviewing theoretical explanations about pointers and memory management.

AI was not used to directly generate the final project code. All functions were manually implemented following 42's coding standards.

---

## Learning Outcomes

- Deep understanding of memory management in C.
- Practical experience with dynamic memory allocation.
- Implementation of basic data structures.
- Creation and usage of static libraries.
- Improved ability to write clean, modular, and reusable C code.

---

## Note

This project serves as the foundation for many future projects in the 42 curriculum. A robust and well-tested implementation is essential for long-term success.
