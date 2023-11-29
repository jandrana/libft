/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:46:09 by ana-cast          #+#    #+#             */
/*   Updated: 2023/11/30 00:03:42 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file libft.h
 * @brief Function prototypes for the libft library
 * 
 * This contains the prototypes fot the libft library
 * and the structure used by the list's functions
 * 
 * @author Ana Alejandra Castillejo Muñoz (github: jandrana)
*/

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/**
 * @brief Checks if the int passed as argument is a letter or not.
 * 
 * @details In ascii, the following characters are considered
 * letters by their int values: 97-122 and 65-90 (included) 
 * @param c integer
 * @return Int: (1) when c is a letter and (0) when it is not
*/
int				ft_isalpha(int c);

/**
 * @brief Checks if the int passed as argument is a digit or not
 * 
 * @details In ascii, the following characters are considered
 * digits by their int values: 48-57 (included)
 * @param c integer
 * @return Int: (1) when c is a digit and (0) when it is not
*/
int				ft_isdigit(int c);

/**
 * @brief Checks if the int passed as argument is a digit or a letter
 * 
 * @details If the character checks for either ft_isalpha(c)
 * or ft_isdigit(c) then it checks for ft_isalnum(c)
 * @param c integer
 * @return Int: (1) when c is a digit or letter
 * and (0) when it is not
*/
int				ft_isalnum(int c);

/**
 * @brief Checks if the int passed as argument is an ASCII character or not
 * 
 * @details The following characters are considered
 * ascii by their int values: 0-127 (included)
 * @param c integer
 * @return Int: (1) when c is an ASCII character
 * and (0) when it is not
*/
int				ft_isascii(int c);

/**
 * @brief Checks if the int passed as argument is a printable character or not
 * 
 * @details In ascii, the following characters are considered
 * printable by their int values: 32-126 (included)
 * @param c integer
 * @return Int: (1) when c is a printable character
 * and (0) when it is not
*/
int				ft_isprint(int c);

/**
 * @brief Finds the length of a string
 * @param str string
 * @return Int: Returns the length of the string str
 * passed as argument
*/
int				ft_strlen(const char *str);

/**
 * @brief It fills the first n bytes of the memory area pointed to by s 
 * with the constant byte c.
 * @param s points to the start of memory area to modify
 * @param c value to asign
 * @param n number of bytes to modify
 * @return returns a pointer to the memory area s
*/
void			*ft_memset(void *s, int c, size_t n);

/**
 * @brief It writes n zeroed ('\0') bytes to the string s. If n is zero, 
 * does nothing.
 * @param s points to the start of memory area to modify
 * @param n number of bytes to modify
 * @return none
*/
void			ft_bzero(void *s, size_t n);

/**
 * @brief Copies n bytes from memory area src to memory area dest. 
 * If dest and src overlap, behaviour is undefined
 * @param dest points to the start of memory area to modify
 * @param src points to the start of memory area to copy
 * @param n number of bytes to modify
 * @return original value of dest
*/
void			*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief Copies n bytes from string src to string dst. The two strings 
 * may overlap; the copy is always done in a non-destructive manner.
 * @param dest points to the start of memory area to modify
 * @param src points to the start of memory area to copy
 * @param n number of bytes to modify
 * @return original value of dest
*/
void			*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief Appends string src to the end of dest. It appends at most 
 * size - strlen(dest) - 1 characters and null terminates it if size != 0.
 * @param dest Destination String
 * @param src Source string to be copied
 * @param size Max characters - 1 to be copied
 * @return lenght of dest
*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

/**
 * @brief Copies up to size - 1 characters from src to dest and null terminates 
 * it if size != 0.
 * @param dest Destination String
 * @param src Source string to be copied
 * @param size Max characters - 1 to be copied
 * @return lenght of dest
*/
unsigned int	ft_strlcpy(char *dest, char *src, size_t size);

/**
 * @brief Checks if the integer passed as argument is a lowercase letter or not 
 * and if it is, it converts it to uppercase.
 * @param c integer
 * @return Returns char c as upper-case when its a lower-case letter. Otherwise 
 * it returns c unchanged
*/
int				ft_toupper(int c);

/**
 * @brief Checks if the integer passed as argument is an uppercase letter or not 
 * and if it is, it converts it to lowercase.
 * @param c integer
 * @return Returns char c as lower-case when its an upper-case letter. Otherwise 
 * it returns c unchanged
*/
int				ft_tolower(int c);

/**
 * @brief It locates the first occurrence of c (as unsigned char) in string 
 * pointed to by s. 
 * @param s points to the start of string to check
 * @param c value to look for
 * @return Returns a pointer to the located character or NULL if the character
 * does not appear in the string
*/
char			*ft_strchr(const char *s, int c);

/**
 * @brief It locates the last occurrence of c (as unsigned char) in string 
 * pointed to by s. 
 * @param s points to the start of string to check
 * @param c value to look for
 * @return Returns a pointer to the located character or NULL if the character
 * does not appear in the string
*/
char			*ft_strrchr(const char *s, int c);

/**
 * @brief It compares s1 and s2 not more than n characters.
 * @param s1 First string to compare
 * @param s2 Second string to compare
 * @param n Max characters to compare
 * @return Returns an int that equals to the result after comparing both strings 
 * using unsigned characters value
*/
int				ft_strncmp(char *s1, char *s2, size_t n);

/**
 * @brief It locates the first occurrence of c (as unsigned char) in string s. 
 * @param s points to the start of string to check
 * @param c value to look for
 * @param n number of bytes to check starting from the one pointed by s.
 * @return returns a pointer to the byte located or NULL if no such byte exits 
 * within n bytes
*/
void			*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief It compares byte string s1 against byte string s2. Both strings are 
 * assumed to be n bytes long.
 * @param s1 First string to compare
 * @param s2 Second string to compare
 * @param n Bytes long assumed to be both s1 and s2
 * @return Returns zero if both strings are identical, otherwise returns the
 * difference between the first two different bytes (as unsigned char).
*/
int				ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief It locates the first occurrence of the string needle in the string 
 * haystack, where not more than l characthers are searched.
 * @param haystack String where the needle string is looked for.
 * @param needle String to look for in haystack string.
 * @param l Max characters searched
 * @return Returns the first occurrence of the string needle in haystack.
*/
char			*ft_strnstr(const char *haystack, const char *needle, size_t l);

/**
 * @brief Converts the initial portion of the string pointed to by str to 
 * int representation
 * @param str string to convert
 * @return returns the int representation of the initial portion of str
*/
int				ft_atoi(const char *str);

/**
 * @brief Allocates enough memory for a copy of the string s1, does the copy, 
 * and returns a pointer to it
 * @param s1 string to copy
 * @return Returns a pointer to the copy created of s1
 * @warning This function uses malloc
*/
char			*ft_strdup(char *s1);

/**
 * @brief Allocates enough space for count objects that are size bytes of memory 
 * each and returns a pointer to the allocated memory which is filled with bytes 
 * of value zero
 * @param count Number of objects
 * @param size Size bytes of memory of each object
 * @return Returns a pointer to the allocated memory or NULL in case of error
 * @warning This function uses malloc
*/
void			*ft_calloc(size_t count, size_t size);

/**
 * @brief Allocates using malloc and returns a substring of the string s. The
 * substring starts from index start and has a maximum length of len
 * @param s String from which create the substring
 * @param start Index of character in s from which to start the substring
 * @param len Maximum length of the substring
 * @warning This function uses malloc
 * @return Returns the substring resultant or NULL if the allocation fails
*/
char			*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Allocates using malloc and returns a new string resultant from the 
 * concatenation of strings s1 and s2.
 * @param s1 First string
 * @param s2 String to concatenate with s1.
 * @return Returns a new string resultant from the concatenation.
 * @warning This function uses malloc
*/
char			*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Deletes every character of the string set from the start and the
 * end of s1 until finding a character that is not part of set
 * @param s1 String to be modified
 * @param set Characters to remove in s1
 * @return Returns the new string having allocated memory for it with malloc
 * @warning This function uses malloc
*/
char			*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Allocates using malloc an array of strings resulting from separating
 * the string s in substrings using the character char c as separator. The array
 * must end with a NULL pointer.
 * @param s String to separate
 * @param c Delimiter character
 * @return Returns an array of the strings resultant from the separation or NULL
 * in case of malloc error.
 * @warning This function uses malloc and free
*/
char			**ft_split(char const *s, char c);

/**
 * @brief Using malloc, generates a string that represents the value received
 * as argument. Negative numbers must be taken into account.
 * @param n Number to convert
 * @return Returns the string that equals to such number or NULL if malloc fails
 * @warning This function uses malloc
*/
char			*ft_itoa(int n);

/**
 * @brief To each char of string s, applies the function f giving as parameters
 * the index of each character inside s y the character itself. It generates a 
 * new string with the result of sucessive use of f.
 * @param s String to iterate on
 * @param f Function to apply over each character
 * @return String created after the right use of f over each character or NULL 
 * if memory fails.
 * @warning This function uses malloc
*/
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief To each char of string s, applies the function f giving as parameters
 * the index of each character inside s and the pointer to such characther,
 * which may be modified if neccessary
 * @param s String to iterate on
 * @param f Function to apply over each character
 * @return None
*/
void			ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Sends the character c to the file descriptor fd specified
 * @param c Character to send
 * @param fd File descriptor to write on
 * @return None
 * @warning This function uses write
*/
void			ft_putchar_fd(char c, int fd);

/**
 * @brief Sends the string s to the file descriptor fd specified.
 * @param s String to send
 * @param fd File descriptor to write on
 * @return None
 * @warning This function uses write
*/
void			ft_putstr_fd(char *s, int fd);

/**
 * @brief Sends the string s to the file descriptor fd specified followed
 * by a newline
 * @param s String to send
 * @param fd File descriptor to write on
 * @return None
 * @warning This function uses write
*/
void			ft_putendl_fd(char *s, int fd);

/**
 * @brief Sends the int n to the file descriptor fd specified
 * @param n Number to send
 * @param fd File descriptor to write on
 * @return None
 * @warning This function uses write
*/
void			ft_putnbr_fd(int n, int fd);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * @brief Creates a new list with the content specified
 * @param content Content to fill the new list with
 * @return Returns the newly created list
 * @warning This function uses malloc
*/
t_list			*ft_lstnew(void *content);

/**
 * @brief Adds a new element at the beginning of the list
 * @param lst Pointer to the first element of the list
 * @param new Element to add to the list
 * @return None
*/
void			ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Get the number of elements of the list
 * @param lst Pointer to the first element of the list
 * @return Returns the number of elements of such list
*/
int				ft_lstsize(t_list *lst);

/**
 * @brief Get the last element of a list
 * @param lst Pointer to the first element of the list
 * @return Returns the last element of such list
*/
t_list			*ft_lstlast(t_list *lst);

/**
 * @brief Adds a new element at the end of the list
 * @param lst Pointer to the first element of the list
 * @param new Element to add to the list
 * @return None
*/
void			ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Delete a node from a list without deleting its content.
 * @param lst Pointer to the first element of the list
 * @param del pointer to the function used to free the node's content
 * @return None
 * @warning This function uses free
*/
void			ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief Delete and free the memory of a list node and its consecutives.
 * @param lst Pointer to the first element of the list
 * @param del pointer to the function used to free the nodes' content
 * @return None
 * @warning This function uses free
*/
void			ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Apply a function to each element of a list.
 * @param lst Pointer to the first element of the list
 * @param f pointer to the function used for each node
 * @return None
*/
void			ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Creates a list by iterating and applying a function of a existing list.
 * @param lst Pointer to the first element of the list
 * @param f pointer to the function used for each node
 * @param del pointer to the function used to free the nodes'content if necessary
 * @return Returns the newly created list
 * @warning This function uses malloc and free
*/
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif /* LIBFT_H */