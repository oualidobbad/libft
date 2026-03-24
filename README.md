  # libft

  Reimplementation of a small but practical subset of the C standard library, packaged as a static archive for 42 projects. Functions cover character tests, memory and string manipulation, numeric parsing, allocation helpers, formatted I/O to file descriptors, and a minimal singly linked list API.

  ## Architecture
  - Library: builds `libft.a` from core sources listed in Makefile; bonus list helpers live in the `BONUS` target so you only link what you need.
  - Public API: declared in `libft.h`, grouping character predicates, memory/string ops, allocation, conversions, I/O, and the `t_list` container.
  - Modules:
    - Memory: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`.
    - Strings: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strncmp`.
    - Allocation/builders: `ft_calloc`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`.
    - Functional string helpers: `ft_strmapi`, `ft_striteri` (apply callbacks per character).
    - Character class: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_tolower`, `ft_toupper`.
    - Conversions: `ft_atoi` with overflow/format flag propagation.
    - I/O: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.
    - Lists (bonus): `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstlast`, `ft_lstsize`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

  ## Build & Install
  - Prereqs: `cc`, `make`, POSIX libc.
  - Build core library: `make` → produces `libft.a`.
  - Build with bonus list API: `make bonus`.
  - Clean objects: `make clean`; full reset: `make fclean`; rebuild: `make re`.

  ## Usage
  Compile your program and link against the archive:

  ```bash
  cc -Wall -Wextra -Werror main.c -L. -lft -o demo
  ```

  Example: split a CSV-like line, map it, and print to stdout:

  ```c
  #include "libft.h"

  static void *dup_field(void *s) { return ft_strdup((char *)s); }
  static void del_field(void *s) { free(s); }
  static void upcase_char(unsigned int i, char *c)
  {
    (void)i;
    *c = ft_toupper(*c);
  }

  int main(void)
  {
    char **parts = ft_split("foo,bar,baz", ',');
    t_list *list = NULL;
    for (int i = 0; parts && parts[i]; i++)
      ft_lstadd_back(&list, ft_lstnew(parts[i]));
    t_list *upper = ft_lstmap(list, dup_field, del_field);
    for (t_list *n = upper; n; n = n->next)
    {
      ft_striteri(n->content, upcase_char);
      ft_putendl_fd(n->content, 1);
    }
    ft_lstclear(&list, del_field);
    ft_lstclear(&upper, del_field);
    free(parts);
    return 0;
  }
  ```

  ## Code Walkthrough
  - Build pipeline: Makefile compiles each `.c` to `.o` with strict flags and archives them into `libft.a`; `bonus` target adds list modules for optional footprint savings.
  - Splitting strings: `ft_split.c` counts words, allocates an array `words + 1`, then slices each segment while skipping delimiters. Helper `ft_cut` copies segments and ensures the array is null-terminated; `ft_free` unwinds allocations on failure.
  - Linked-list map: `ft_lstmap_bonus.c` iterates `lst`, applies user callback `f` to each `content`, wraps the result in `ft_lstnew`, and appends via `ft_lstadd_back`. On allocation failure it calls `ft_lstclear` with `del` to avoid leaks.
  - Numeric parse with flag: `ft_atoi.c` returns a `long` and sets `*flag` to `0` when trailing junk is encountered, allowing callers to detect malformed input alongside the numeric result.

  ## Technical Notes
  - Complexity: all memory/string operations run in O(n) over input length; linked-list ops are O(1) for front insert and O(n) for `ft_lstlast`/`ft_lstsize` traversals.
  - Overlap safety: `ft_memmove` copies with overlap awareness, unlike `ft_memcpy` (useful for in-place shifts).
  - Allocation discipline: builders (`ft_substr`, `ft_strjoin`, `ft_split`) allocate only once per output and centralize cleanup helpers to avoid leaks; bonus `ft_lstmap` is careful to clear partial results on failure.
  - API shape: `ft_strmapi`/`ft_striteri` and `ft_lstmap` expose higher-order callbacks to encourage pure transformations while leaving ownership semantics explicit through `del`.

  ## Testing Ideas
  - Unit tests per category (memory, strings, list) with randomized cases for overlap (`memmove`), edge delimiters (`split`), and malformed inputs (`ft_atoi` flagging).
  - AddressSanitizer/UBSan builds to catch bounds issues: `CFLAGS="-Wall -Wextra -Werror -fsanitize=address,undefined" make re`.

  ## Improvements & Next Steps
  - Add coverage for edge cases (empty strings, INT64 overflow detection in `ft_atoi`).
  - Provide const-correct overloads where possible (`ft_split` helpers could take `const char *`).
  - Publish a minimal test harness with comparisons against glibc for behavioral parity.
  - Add CI to run style, build, and tests on pushes.

  ## Author
  Oualid Obbad (@oualidobbad)
  EOF
      ;;
    ft_printf)
      cat <<'EOF'
# ft_printf

## Description
Printf-compatible formatter implementing core specifiers with buffered output.

## Features
- Supports `cspdiuxX%` with width/precision and flags.
- Built on libft helpers.

## Technologies Used
- C, Makefile.

## Installation
- Run `make` to build `libftprintf.a`.

## Usage
- Link `libftprintf.a`; include `ft_printf.h`.

## Example
- `./a.out "Value %d" 42` after linking the library.

## Technical Notes
- Supports `%c %s %p %d %i %u %x %X %%` with width/precision/flags parsed manually (no va_copy).
- Uses write(2) buffered through small internal helpers; relies on libft for string/number conversions.
- Pay attention to size promotions and pointer printing (0x prefix for %p, lowercase hex by default).

## Author
- Oualid Obbad (@oualidobbad)