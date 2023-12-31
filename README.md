<p align="center"><img src=".github/libftbanner.png" alt="Profile banner"/></p>

<p align="justify">The <code>libft</code> project is the first one of my journey as a 42 student and is going to play a crucial role in upcoming assignments, since the library created here is going to be used in future C projects. Here, I created my very first C library from scratch.<br><br>This project pushed me to dig deep into how the original replicated functions work, helping me develop a comprehensive understanding of their inner workings and how to enhance them. It's not just about meeting project requirements; it's about aiming for excellence and crafting a library that I will use in future projects.</p>

- **Reminder:** ❗️ You can check all my 42 projects at <a href="https://github.com/jandrana/42-Cursus">42 Cursus</a>

## Table of Contents

<table>
    <thead>
        <tr>
            <th colspan="4" id="original-functions" margin="30"><h3>Makefile and Header File</h3></th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td width="10%"><a href="./Makefile"><code>Makefile</code></a></td>
            <td width="40%">The Makefile for building the <code>libft</code> library.</td>
            <td width="10%"><a href="./libft.h"><code>libft.h</code></a></td>
            <td width="40%">The header file containing function prototypes and necessary definitions.</td>
        </tr>
    </tbody>
</table>

<table>
    <thead>
        <tr>
            <th colspan="4" id="original-functions" margin="30"><h3>Original Functions</h3></th>
        </tr>
    </thead>
<tbody>
        <tr>
            <td colspan="4" align="center">Character Classification</td>
        </tr>
        <tr>
            <td width="10%"><a href="./original_functions/character_classification/ft_isalnum.c"><code>ft_isalnum.c</code></a></td>
            <td width="40%">Check if a character is alphanumeric.</td>
            <td width="10%"><a href="./original_functions/character_classification/ft_isalpha.c"><code>ft_isalpha.c</code></a></td>
            <td width="40%">Check if a character is alphabetic.</td>
        </tr>
        <tr>
            <td><a href="./original_functions/character_classification/ft_isascii.c"><code>ft_isascii.c</code></a></td>
            <td>Check if a character is an ASCII character.</td>
            <td><a href="./original_functions/character_classification/ft_isdigit.c"><code>ft_isdigit.c</code></a></td>
            <td>Check if a character is a digit.</td>
        </tr>
        <tr>
            <td colspan="1"><a href="./original_functions/character_classification/ft_isprint.c"><code>ft_isprint.c</code></a></td>
            <td colspan="1">Check if a character is a printable character.</td>
            <td colspan="2"></td>
        </tr>
        <tr>
            <td colspan="4" align="center">Case conversion</td>
        </tr>
        <tr>
            <td><a href="./original_functions/case_conversion/ft_tolower.c"><code>ft_tolower.c</code></a></td>
            <td>Convert a character to lowercase.</td>
            <td><a href="./original_functions/case_conversion/ft_toupper.c"><code>ft_toupper.c</code></a></td>
            <td>Convert a character to uppercase.</td>
        </tr>
        <tr>
            <td colspan="4" align="center">String Manipulation</td>
        </tr>
        <tr>
            <td><a href="./original_functions/string_manipulation/ft_strlen.c"><code>ft_strlen.c</code></a></td>
            <td>Calculate the length of a string.</td>
            <td><a href="./original_functions/string_manipulation/ft_strlcpy.c"><code>ft_strlcpy.c</code></a></td>
            <td>Safely copy a string.</td>
        </tr>
        <tr>
            <td><a href="./original_functions/string_manipulation/ft_strlcat.c"><code>ft_strlcat.c</code></a></td>
            <td>Safely concatenate strings</td>
            <td><a href="./original_functions/string_manipulation/ft_atoi.c"><code>ft_atoi.c</code></a></td>
            <td>Convert a string to an integer.</td>
        </tr>
        <tr>
            <td colspan="4" align="center">String Search</td>
        </tr>
        <tr>
            <td><a href="./original_functions/string_search/ft_strnstr.c"><code>ft_strnstr.c</code></a></td>
            <td>Locate a substring in a string.</td>
            <td><a href="./original_functions/string_search/ft_strchr.c"><code>ft_strchr.c</code></a></td>
            <td>Locate the first occurrence of a character in a string.</td>
        </tr>
        <tr>
            <td><a href="./original_functions/string_search/ft_strncmp.c"><code>ft_strncmp.c</code></a></td>
            <td>Compare two strings up to a specified number of characters.</td>
            <td><a href="./original_functions/string_search/ft_strrchr.c"><code>ft_strrchr.c</code></a></td>
            <td>Locate the last occurrence of a character in a string.</td>
        </tr>
        <tr>
            <td colspan="4" align="center">Memory Manipulation</td>
        </tr>
        <tr>
            <td><a href="./original_functions/memory_manipulation/ft_memset.c"><code>ft_memset.c</code></a></td>
            <td>Fill memory with a constant byte.</td>
            <td><a href="./original_functions/memory_manipulation/ft_bzero.c"><code>ft_bzero.c</code></a></td>
            <td>Set the first `n` bytes of memory to zero.</td>
        </tr>
        <tr>
            <td><a href="./original_functions/memory_manipulation/ft_memcpy.c"><code>ft_memcpy.c</code></a></td>
            <td>Copy memory area.</td>
            <td><a href="./original_functions/memory_manipulation/ft_memmove.c"><code>ft_memmove.c</code></a></td>
            <td>Copy memory area taking overlapping into account.</td>
        </tr>
        <tr>
            <td><a href="./original_functions/memory_manipulation/ft_memchr.c"><code>ft_memchr.c</code></a></td>
            <td>Locate the first occurrence of a byte in memory.</td>
            <td><a href="./original_functions/memory_manipulation/ft_memcmp.c"><code>ft_memcmp.c</code></a></td>
            <td>Compare memory areas.</td>
        </tr>
        <tr>
            <td><a href="./original_functions/memory_manipulation/ft_calloc.c"><code>ft_calloc.c</code></a></td>
            <td>Allocate and clear memory for an array.</td>
            <td><a href="./original_functions/memory_manipulation/ft_strdup.c"><code>ft_strdup.c</code></a></td>
            <td>Duplicate a string.</td>
        </tr>
    </tbody>
</table>
<br>
<table>
    <thead>
        <tr>
            <th colspan="4" id="additional-functions"><h3>Additional Functions</h3></th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td width="10%"><a href="./additional_functions/ft_substr.c"><code>ft_substr.c</code></a></td>
            <td width="40%">Extract a substring from a string.</td>
            <td width="10%"><a href="./additional_functions/ft_strjoin.c"><code>ft_strdup.c</code></a></td>
            <td width="40%">Concatenate two strings.</td>
        </tr>
        <tr>
            <td><a href="./additional_functions/ft_strtrim.c"><code>ft_strtrim.c</code></a></td>
            <td>Trim leading and trailing a set of characters from a string.</td>
            <td><a href="./additional_functions/ft_split.c"><code>ft_split.c</code></a></td>
            <td>Split a string into an array of substrings.</td>
        </tr>
        <tr>
            <td><a href="./additional_functions/ft_strjoin.c"><code>ft_strjoin.c</code></a></td>
            <td>Using malloc returns a new string as a result of the concatenation of 2 strings.</td>
            <td><a href="./additional_functions/ft_itoa.c"><code>ft_itoa.c</code></a></td>
            <td>Convert an integer to a string.</td>
        </tr>
        <tr>
            <td><a href="./additional_functions/ft_striteri.c"><code>ft_striteri.c</code></a></td>
            <td>Apply a function to each character of a string with an index.</td>
            <td><a href="./additional_functions/ft_strmapi.c"><code>ft_strmapi.c</code></a></td>
            <td>Returns a string applying a function to each character of a string.</td>
        </tr>
        <tr>
            <td colspan="4" align="center">Output Functions</td>
        </tr>
        <tr>
            <td><a href="./additional_functions/output_functions/ft_putchar_fd.c"><code>ft_putchar_fd.c</code></a></td>
            <td>Output a character to a file descriptor.</td>
            <td><a href="./additional_functions/output_functions/ft_putstr_fd.c"><code>ft_putstr_fd.c</code></a></td>
            <td>Output a string to a file descriptor.</td>
        </tr>
        <tr>
            <td><a href="./additional_functions/output_functions/ft_putendl_fd.c"><code>ft_putendl_fd.c</code></a></td>
            <td>Output a string followed by a newline to a file descriptor.</td>
            <td><a href="./additional_functions/output_functions/ft_putnbr_fd.c"><code>ft_putnbr_fd.c</code></a></td>
            <td>Output an integer to a file descriptor.</td>
        </tr>
    </tbody>
</table>
<br>
<table>
    <thead>
        <tr>
            <th colspan="4" id="bonus-functions"><h3>Bonus Functions</h3></th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td width="10%"><a href="./bonus_functions/ft_lstnew_bonus.c"><code>ft_lstnew_bonus.c</code></a></td>
            <td width="40%">Create a new list element.</td>
            <td width="10%"><a href="./bonus_functions/ft_lstadd_front_bonus.c"><code>ft_lstadd_front_bonus.c</code></a></td>
            <td width="40%">Add a new element to the beginning of a list.</td>
        </tr>
        <tr>
            <td><a href="./bonus_functions/ft_lstsize_bonus.c"><code>ft_lstsize_bonus.c</code></a></td>
            <td>Get the number of elements in a list.</td>
            <td><a href="./bonus_functions/ft_lstlast_bonus.c"><code>ft_lstlast_bonus.c</code></a></td>
            <td>Get the last element of a list.</td>
        </tr>
        <tr>
            <td><a href="./bonus_functions/ft_lstadd_back_bonus.c"><code>ft_lstadd_back_bonus.c</code></a></td>
            <td>Add a new element to the end of a list.</td>
            <td><a href="./bonus_functions/ft_lstdelone_bonus.c"><code>ft_lstdelone_bonus.c</code></a></td>
            <td>Delete a node from a list without deleting its content.</td>
        </tr>
        <tr>
            <td><a href="./bonus_functions/ft_lstclear_bonus.c"><code>ft_lstclear_bonus.c</code></a></td>
            <td>Delete and free the memory of a list node and its consecutives.</td>
            <td><a href="./bonus_functions/ft_lstiter_bonus.c"><code>ft_lstiter_bonus.c</code></a></td>
            <td>Apply a function to each element of a list.</td>
        </tr>
        <tr>
            <td><a href="./bonus_functions/ft_lstmap_bonus.c"><code>ft_lstmap_bonus.c</code></a></td>
            <td colspan="3">Creates a list by iterating and applying a function of a existing list.</td>
        </tr>
    </tbody>
</table>

## Usage

### Supported Platforms

- **Linux**
- **macOS**

### Prerequisites

Before using Libft, you need:

- **GCC**: The GNU Compiler Collection.

### Compilation

Make use of the `make` command to build and compile the library

Rules Available in the Makefile

<table>
    <thead>
        <th>Rule</th>
        <th>Description</th>
    </thead>
    <tbody>
        <tr>
            <td>all</td>
            <td>Compiles the library without the bonus files</td>
        </tr>
        <tr>
            <td>bonus</td>
            <td>Compiles the library with bonus files</td>
        </tr>
        <tr>
            <td>clean</td>
            <td>Removes every created object</td>
        </tr>
        <tr>
            <td>fclean</td>
            <td>Runs <code>make clean</code> and removes the libft.a</td>
        </tr>
        <tr>
            <td>re</td>
            <td>Runs <code>make fclean</code> and then <code>make all</code></td>
        </tr>
        <tr>
            <td>rebonus</td>
            <td>Runs <code>make fclean</code> and then <code>make bonus</code></td>
        </tr>
    </tbody>
</table>

### Compilation Examples

- Compile without bonus:
```bash
cd libft
make all
```

- Delete objects and libft.a and compile with bonus:
```bash
make rebonus

```
