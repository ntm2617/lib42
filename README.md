# Libft

## 📌 About the Project

**Libft** is the very first project in the 42 curriculum. It requires recoding essential standard C library (`libc`) functions.

Building this library helps build a deep understanding of:
- Pointers, memory allocation, and byte manipulation.
- String handling and data structures in C.
- Writing clean code conforming strictly to the **42 Norm**.
- Structuring a modular static library (`libft.a`) with a `Makefile`.

---

## 🛠️ Functions Overview

### 1. Mandatory Part: Standard `libc` Functions

Functions with the `ft_` prefix reimplementing standard `libc` functions:

| Function | Description |
| :--- | :--- |
| [`ft_isalpha`](ft_isalpha.c) | Checks whether a character is alphabetic. |
| [`ft_isdigit`](ft_isdigit.c) | Checks whether a character is a decimal digit (`0-9`). |
| [`ft_isalnum`](ft_isalnum.c) | Checks whether a character is alphanumeric. |
| [`ft_isascii`](ft_isascii.c) | Checks whether a character is a 7-bit ASCII character. |
| [`ft_isprint`](ft_isprint.c) | Checks whether a character is printable. |
| [`ft_strlen`](ft_strlen.c) | Computes the length of a string. |
| [`ft_memset`](ft_memset.c) | Fills a memory area with a constant byte. |
| [`ft_bzero`](ft_bzero.c) | Erases the data in the memory area by writing zeros. |
| [`ft_memcpy`](ft_memcpy.c) | Copies memory from source to destination (non-overlapping). |
| [`ft_memmove`](ft_memmove.c) | Safely copies memory even if memory regions overlap. |
| [`ft_strlcpy`](ft_strlcpy.c) | Size-bounded string copy. |
| [`ft_strlcat`](ft_strlcat.c) | Size-bounded string concatenation. |
| [`ft_toupper`](ft_toupper.c) | Converts lowercase character to uppercase. |
| [`ft_tolower`](ft_tolower.c) | Converts uppercase character to lowercase. |
| [`ft_strchr`](ft_strchr.c) | Locates the first occurrence of a character in a string. |
| [`ft_strrchr`](ft_strrchr.c) | Locates the last occurrence of a character in a string. |
| [`ft_strncmp`](ft_strncmp.c) | Compares up to `n` characters of two strings. |
| [`ft_memchr`](ft_memchr.c) | Locates a byte in a memory buffer. |
| [`ft_memcmp`](ft_memcmp.c) | Compares two memory blocks byte-by-byte. |
| [`ft_strnstr`](ft_strnstr.c) | Locates a substring in a string, bounded by length. |
| [`ft_atoi`](ft_atoi.c) | Converts an ASCII string to an integer. |
| [`ft_calloc`](ft_calloc.c) | Allocates memory for an array and zeroes it out. |
| [`ft_strdup`](ft_strdup.c) | Duplicates a string using allocated memory. |

---

### 2. Mandatory Part: Additional Functions

Functions not in standard `libc` or implemented with specific signatures:

| Function | Description |
| :--- | :--- |
| [`ft_substr`](ft_substr.c) | Extracts a substring from a string. |
| [`ft_strjoin`](ft_strjoin.c) | Concatenates two strings into a newly allocated string. |
| [`ft_strtrim`](ft_strtrim.c) | Trims specified set of characters from beginning and end of string. |
| [`ft_split`](ft_split.c) | Splits a string into an array of substrings using a delimiter char. |
| [`ft_itoa`](ft_itoa.c) | Converts an integer value to a null-terminated string. |
| [`ft_strmapi`](ft_strmapi.c) | Applies a function to each character of a string to create a new string. |
| [`ft_striteri`](ft_striteri.c) | Applies a function to each character of a string in-place. |
| [`ft_putchar_fd`](ft_putchar_fd.c) | Outputs a char to a given file descriptor. |
| [`ft_putstr_fd`](ft_putstr_fd.c) | Outputs a string to a given file descriptor. |
| [`ft_putendl_fd`](ft_putendl_fd.c) | Outputs a string followed by a newline to a given file descriptor. |
| [`ft_putnbr_fd`](ft_putnbr_fd.c) | Outputs an integer to a given file descriptor. |

---

## 🚀 Getting Started

Available `make` rules:

```bash
# Compile mandatory functions and generate libft.a
make

# Remove object files (.o)
make clean

# Remove object files and the libft.a binary
make fclean

# Clean and recompile everything
make re
```

---

## 📖 How to Use

Include the header `libft.h` in your C code:

```c
#include "libft.h"

int main(void)
{
    ft_putendl_fd("Hello, 42!", 1);
    return (0);
}
```

Compile your program linking `libft.a`:

```bash
cc -Wall -Wextra -Werror main.c libft.a -o program
./program
```

---
