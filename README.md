# Libft

This project is my implementation of **libft**, a custom C library that re‑implements many of the standard C library functions, along with additional utility functions.  
The goal is to provide a consistent, reliable foundation of functions that behave exactly like their standard counterparts, adhering strictly to their definitions in the man pages.

---

## 📚 Contents

### Part 1 — Libc Functions
Re‑implemented versions of standard C library functions (with the `ft_` prefix):

- ft_isalpha  
- ft_isdigit  
- ft_isalnum  
- ft_isascii  
- ft_isprint  
- ft_strlen  
- ft_memset  
- ft_bzero  
- ft_memcpy  
- ft_memmove  
- ft_strlcpy  
- ft_strlcat  
- ft_toupper  
- ft_tolower  
- ft_strchr  
- ft_strrchr  
- ft_strncmp  
- ft_memchr  
- ft_memcmp  
- ft_strnstr  
- ft_atoi  
- ft_calloc  
- ft_strdup  

### Part 2 — Additional Functions
Utility functions not found in libc, or provided in a different form:

- ft_substr  
- ft_strjoin  
- ft_strtrim  
- ft_split  
- ft_itoa  
- ft_strmapi  
- ft_striteri  
- ft_putchar_fd  
- ft_putstr_fd  
- ft_putendl_fd  
- ft_putnbr_fd  

---

## 🛠️ Technical Details

- **Program name:** `libft.a`  
- **Files to submit:** `Makefile`, `libft.h`, `ft_*.c`  
- **Makefile rules:** `NAME`, `all`, `clean`, `fclean`, `re`  
- **External functions allowed:** `malloc`, `free`, `write`  
- **Forbidden:** global variables, `libtool`, unused files  
- **Compilation flags:** `-Wall -Wextra -Werror`  
- **Library creation:** must use `ar` to build `libft.a` at the root of the repo  

Helper functions may be defined as `static` to restrict scope.  

---

## ⚠️ Notes

- Some functions like `strlcpy`, `strlcat`, and `bzero` are not part of glibc by default. On Linux, you may need to include `<bsd/string.h>` and link with `-lbsd` to compare against system implementations.  
- `calloc` behavior may differ across systems. For this project, if `nmemb` or `size` is 0, it must return a unique pointer that can be freed.  
- If you ever see a file like `libft.h.gch` in your repo: that’s a **precompiled header** generated if you accidentally compile a header file. It’s not part of the project and can be safely deleted.  

---

## 🎯 Purpose

The `libft` library is a foundational project at 42. It teaches you to:

- Re‑implement core C functions from scratch  
- Build and manage a static library  
- Write clean, portable, and memory‑safe code  
- Develop habits of testing edge cases (e.g., `NULL`, `INT_MIN`, `INT_MAX`)  

This library will serve as a toolkit for future projects in the cursus.