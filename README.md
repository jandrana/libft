# Libft

The `libft` project is the first one of my journey as a 42 student and is going to play a crucial role in upcoming assignments, since the library created here is going to be used in future C projects. Here, I created my very first C library from scratch.

This project pushed me to dig deep into how the original replicated functions work, helping me develop a comprehensive understanding of their inner workings and how to enhance them. It's not just about meeting project requirements; it's about aiming for excellence and crafting a library that I will use in future projects.

## Table of Contents

1. [Original Functions](#original-functions)
    - [Character Classification](#character-classification)
    - [Case Conversion](#case-conversion)
    - [String Manipulation](#string-manipulation)
    - [String Search](#string-search)
    - [Memory Manipulation](#memory-manipulation)
    - [Memory Allocation](#memory-allocation)
2. [Additional Functions](#additional-functions)
3. [Bonus Functions](#bonus-functions)
4. [Makefile and Header File](#makefile-and-header-file)

## Original Functions

### Character Classification

- [`ft_isalnum.c`](./ft_isalnum.c): Check if a character is alphanumeric.
- [`ft_isalpha.c`](./ft_isalpha.c): Check if a character is alphabetic.
- [`ft_isascii.c`](./ft_isascii.c): Check if a character is an ASCII character.
- [`ft_isdigit.c`](./ft_isdigit.c): Check if a character is a digit.
- [`ft_isprint.c`](./ft_isprint.c): Check if a character is a printable character.

### Case Conversion

- [`ft_tolower.c`](./ft_tolower.c): Convert a character to lowercase.
- [`ft_toupper.c`](./ft_toupper.c): Convert a character to uppercase.

### String Manipulation

- [`ft_strlen.c`](./ft_strlen.c): Calculate the length of a string.
- [`ft_strlcpy.c`](./ft_strlcpy.c): Safely copy a string.
- [`ft_strlcat.c`](./ft_strlcat.c): Safely concatenate strings.
- [`ft_atoi.c`](./ft_atoi.c): Convert a string to an integer.

### String Search

- [`ft_strchr.c`](./ft_strchr.c): Locate the first occurrence of a character in a string.
- [`ft_strrchr.c`](./ft_strrchr.c): Locate the last occurrence of a character in a string.
- [`ft_strncmp.c`](./ft_strncmp.c): Compare two strings up to a specified number of characters.
- [`ft_strnstr.c`](./ft_strnstr.c): Locate a substring in a string.

### Memory Manipulation

- [`ft_memset.c`](./ft_memset.c): Fill memory with a constant byte.
- [`ft_bzero.c`](./ft_bzero.c): Set the first `n` bytes of memory to zero.
- [`ft_memcpy.c`](./ft_memcpy.c): Copy memory area.
- [`ft_memmove.c`](./ft_memmove.c): Copy memory area taking overlapping into account.
- [`ft_memchr.c`](./ft_memchr.c): Locate the first occurrence of a byte in memory.
- [`ft_memcmp.c`](./ft_memcmp.c): Compare memory areas.

### Memory Allocation

- [`ft_calloc.c`](./ft_calloc.c): Allocate and clear memory for an array.
- [`ft_strdup.c`](./ft_strdup.c): Duplicate a string.

## Additional Functions

- [`ft_substr.c`](./ft_substr.c): Extract a substring from a string.
- [`ft_strjoin.c`](./ft_strjoin.c): Concatenate two strings.
- [`ft_strtrim.c`](./ft_strtrim.c): Trim leading and trailing a set of characters from a string.
- [`ft_split.c`](./ft_split.c): Split a string into an array of substrings.
- [`ft_itoa.c`](./ft_itoa.c): Convert an integer to a string.
- [`ft_strmapi.c`](./ft_strmapi.c): Returns a string applying a function to each character of a string.
- [`ft_striteri.c`](./ft_striteri.c): Apply a function to each character of a string with an index.

### Output Functions

- [`ft_putchar_fd.c`](./ft_putchar_fd.c): Output a character to a file descriptor.
- [`ft_putstr_fd.c`](./ft_putstr_fd.c): Output a string to a file descriptor.
- [`ft_putendl_fd.c`](./ft_putendl_fd.c): Output a string followed by a newline to a file descriptor.
- [`ft_putnbr_fd.c`](./ft_putnbr_fd.c): Output an integer to a file descriptor.

## Bonus Functions

- [`ft_lstnew_bonus.c`](./ft_lstnew_bonus.c): Create a new list element.
- [`ft_lstadd_front_bonus.c`](./ft_lstadd_front_bonus.c): Add a new element to the beginning of a list.
- [`ft_lstsize_bonus.c`](./ft_lstsize_bonus.c): Get the number of elements in a list.
- [`ft_lstlast_bonus.c`](./ft_lstlast_bonus.c): Get the last element of a list.
- [`ft_lstadd_back_bonus.c`](./ft_lstadd_back_bonus.c): Add a new element to the end of a list.
- [`ft_lstdelone_bonus.c`](./ft_lstdelone_bonus.c): Delete a node from a list without deleting its content.
- [`ft_lstclear_bonus.c`](./ft_lstclear_bonus.c): Delete and free the memory of a list node and its consecutives.
- [`ft_lstiter_bonus.c`](./ft_lstiter_bonus.c): Apply a function to each element of a list.
- [`ft_lstmap_bonus.c`](./ft_lstmap_bonus.c): Creates a list by iterating and applying a function of a existing list.

## Makefile and Header File

- [`Makefile`](./Makefile): The Makefile for building the `libft` library.
- [`libft.h`](./libft.h): The header file containing function prototypes and necessary definitions.
