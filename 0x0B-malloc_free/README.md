0x0B. C - malloc, free
The README for the "C - malloc, free" project summarizes the tasks to be completed. Here's a concise summary of each task:

**Task 0: Float like a butterfly, sting like a bee**
- Description: Write a function that creates an array of characters and initializes it with a specific character.
- Prototype: `char *create_array(unsigned int size, char c);`
- Returns `NULL` if `size` is 0, otherwise returns a pointer to the array or `NULL` on failure.

**Task 1: The woman who has no imagination has no wings**
- Description: Write a function that returns a pointer to a newly allocated space in memory, containing a copy of the provided string.
- Prototype: `char *_strdup(char *str);`
- Returns `NULL` if `str` is `NULL` or on memory allocation failure.

**Task 2: He who is not courageous enough to take risks will accomplish nothing in life**
- Description: Write a function that concatenates two strings.
- Prototype: `char *str_concat(char *s1, char *s2);`
- Returns a pointer to a newly allocated string containing `s1` followed by `s2`, with a null-terminator.
- Treats `NULL` as an empty string and returns `NULL` on failure.

**Task 3: If you even dream of beating me you'd better wake up and apologize**
- Description: Write a function that returns a pointer to a 2-dimensional array of integers.
- Prototype: `int **alloc_grid(int width, int height);`
- Initializes each element of the grid to 0.
- Returns `NULL` on failure, especially if `width` or `height` is 0 or negative.

**Task 4: It's not bragging if you can back it up**
- Description: Write a function that frees a 2-dimensional grid created by `alloc_grid`.
- Prototype: `void free_grid(int **grid, int height);`
- Should be compatible with the `alloc_grid.c` file provided.

**Task 5: It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe**
- Description: Write a function that concatenates all the arguments of your program.
- Prototype: `char *argstostr(int ac, char **av);`
- Returns `NULL` if `ac` is 0 or `av` is `NULL`.
- Returns a pointer to a new string or `NULL` on failure, with each argument followed by a newline character.

**Task 6: I will show you how great I am**
- Description: Write a function that splits a string into words.
- Prototype: `char **strtow(char *str);`
- Returns a pointer to an array of strings (words), with the last element being `NULL`.
- Words are separated by spaces.
- Returns `NULL` if `str` is `NULL`, an empty string, or on failure.
