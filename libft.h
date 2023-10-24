#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

typedef struct s_list
{
    void *content;
    size_t content_size;
    struct s_list *next;
} t_list;

// Conversion Functions
int ft_atoi(char *str);          // Convert a string to an integer
char *ft_itoa(int n);            // Convert an integer to a string

// Memory Functions
void ft_bzero(void *str, size_t n);                  // Set a block of memory to zero
void *ft_memalloc(size_t size);                       // Allocate memory and initialize it to zero
void *memccpy(void *dst, const void *src, int c, size_t size); // Copy memory with stopping after a specific character
void *ft_memchr(void *str, int c, size_t n);          // Search for a character in memory
int ft_memcmp(const void *str1, const void *str2, size_t n); // Compare two blocks of memory
void *ft_memcpy(void *dst, void *src, size_t size);   // Copy memory from source to destination
void ft_memdel(void **ap);                            // Free and set a pointer to NULL
void *ft_memmove(void *dst, void *src, size_t size); // Copy memory with possible overlap
void *ft_memset(void *s, int c, size_t n);            // Set a block of memory to a specified value

// Character Functions
int ft_isalnum(int c);          // Check if a character is alphanumeric
int ft_isalpha(int c);          // Check if a character is alphabetic
int ft_isascii(int c);          // Check if a character is within the ASCII range
int ft_isdigit(int c);          // Check if a character is a digit
int ft_isprint(int c);          // Check if a character is printable
int ft_tolower(int c);          // Convert a character to lowercase
int ft_toupper(int c);          // Convert a character to uppercase

// File Output Functions
void ft_putchar_fd(char c, int fd);                   // Write a character to a file descriptor
void ft_putchar(char c);                               // Write a character to standard output
void ft_putendl_fd(char const *s, int fd);             // Write a string with a newline to a file descriptor
void ft_putendl(char const *s);                        // Write a string with a newline to standard output
void ft_putnbr_fd(int n, int fd);                      // Write an integer to a file descriptor
void ft_putnbr(int n);                                // Write an integer to standard output
void ft_putstr_fd(char const *s, int fd);              // Write a string to a file descriptor
void ft_putstr(char const *s);                        // Write a string to standard output

// String Functions
char *ft_strcat(char *dst, char *src);               // Concatenate two strings
int ft_strlen(char *str);                            // Calculate the length of a string
void ft_strclr(char *s);                             // Clear the content of a string
int ft_strcmp(char *s1, char *s2);                  // Compare two strings
char *ft_strcpy(char *dst, char *src);              // Copy a string
void ft_strdel(char **as);                          // Free a string and set its pointer to NULL
char *ft_strdup(const char *str);                  // Duplicate a string
int ft_strequ(char const *s1, char const *s2);    // Compare two strings for equality
void ft_striter(char *s, void (*f)(char *));      // Apply a function to each character in a string
void ft_striteri(char *s, void (*f)(unsigned int, char *)); // Apply a function with index to each character in a string
char *ft_strjoin(char const *s1, char const *s2); // Join two strings
int ft_strlcat(char *dst, char *src, int size);   // Concatenate two strings with size restriction
char *ft_strmap(char const *s, char (*f)(char));  // Apply a function to each character in a string and create a new string
char *ft_strmapi(char const *s, char (*f)(unsigned int, char)); // Apply a function with index to each character in a string and create a new string
char *ft_strncat(char *dst, char *src, unsigned int n); // Concatenate n characters from one string to another
int ft_strncmp(char *s1, char *s2, int n);         // Compare the first n characters of two strings
char *ft_strncpy(char *dst, char *src, unsigned int n); // Copy up to n characters from one string to another
int ft_strnequ(char const *s1, char const *s2, size_t n); // Compare the first n characters of two strings for equality
char *ft_strnew(size_t size);                      // Create a new string of a specified size
char *ft_strnstr(char *str, char *to_find, int len);  // Search for a substring within a string with a specified length
char *ft_strchr(char *str, int c);                 // Find the first occurrence of a character in a string
char **ft_strsplit(char const *s, char c);          // Split a string into an array of substrings using a delimiter
char *ft_strstr(char *str, char *to_find);          // Search for a substring within a string
char *ft_strsub(char const *s, unsigned int start, size_t len); // Extract a substring from a string
char *ft_strtrim(char const *s);                    // Remove leading and trailing white space from a string

// list manipulation
t_list * ft_lstnew(void const *content, size_t content_size);
void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void ft_lstadd(t_list **alst, t_list *new);

void ft_lstiter(t_list *lst, void (*f)(t_list *elem));

t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem));

#endif