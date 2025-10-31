# Libft

My first project at [1337/42 School](https://42.fr) — a custom C library that reimplements standard C library functions and adds linked list utilities.

---

## 📘 Overview

Libft is a foundational project that aims to recreate a set of functions from the standard C library (libc) and implement additional tools for memory management, strings, and linked lists.

It’s the base for almost every future project at 1337/42 — understanding memory, pointers, and data structures.

---

## 🧠 Skills Learned
- Memory allocation and management in C  
- Function pointers and linked lists  
- Static library creation (`ar`, `ranlib`)  
- Writing Makefiles and following strict coding norms  
- Defensive coding and error handling  

---

⚙️ Compilation

To build the library, simply run:

make


Other useful rules:

make all      # Compile .o files and create libft.a
make clean    # Remove object files (.o)
make fclean   # Remove object files + libft.a
make re       # Recompile everything
make bonus    # Include linked list (bonus) functions


After compilation, a static library called libft.a will be created.
You can use it in your own projects like this:

gcc main.c -L. -lft

🧩 Project Structure
libft/
│
├── Makefile
├── libft.h
├── ft_*.c                 # Mandatory functions
│
└── bonus/
    ├── ft_lstnew_bonus.c
    ├── ft_lstadd_front_bonus.c
    ├── ft_lstadd_back_bonus.c
    ├── ft_lstsize_bonus.c
    ├── ft_lstlast_bonus.c
    ├── ft_lstdelone_bonus.c
    ├── ft_lstclear_bonus.c
    ├── ft_lstiter_bonus.c
    └── ft_lstmap_bonus.c
🧵 Bonus Functions

Libft also includes a full set of linked list utilities, allowing creation, iteration, and deletion of dynamic data structures.

🏆 Achievements

✅ Score: 124/125 (validated on first try)
✅ Norminette: 100% clean
✅ Memory: No leaks, no crashes
✅ Bonus: Fully implemented and validated

💻 Author

Aiman ROCHD

🚀 1337 Student | Passionate about low-level programming, logic, and clean C code

📄 License

This project is part of the 42/1337 curriculum and follows its academic guidelines.
You can use it for learning or as a reference — but not for direct submission.

🌟 Acknowledgments

Special thanks to my peers, evaluators, and the 1337 community for support and debugging help during this project.

🧠 “Understanding the basics builds the strongest foundation.”
