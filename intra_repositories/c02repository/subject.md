## Files to turn in:
`Makefile and all the necessary files`

---

## Allowed functions:
`write, malloc, free, open, read, close`

- Create a program that takes a number as argument and converts it to its written letters value.
- Executable name: `rush-02`
- Your source code will be compiled as follows:

> make fclean
> 
> make

- Your program can take up to 2 arguments:
	- If there is only one argument, it is the value you need to convert
	- If there are two arguments, the first argument is the new reference dictionary and the second argument is the value you need to convert.
- If the argument isn't a positive number, your program must return "Error", followed by a newline.

## Tips
`Your program should go beyond unsigned int.`

- Your program must parse the dictionary given as resource to the project. The value inside it must be used to print the result. These values can be modified.
- Any memory allocated on the heap (with `malloc(3)`) must be freed correctly. This will be verified during evaluation.
- The dictionary will have the following rules:

```
[a number][0 to n spaces]:[0 to n spaces][any printable characters]\n
```

- dictionary rules':
	- Numbers are to be handled the same way atoi handles them.
	- You will trim the spaces before and after the value in the dictionary.
	- The dictionary will always have at least the keys as in the reference dictionary.
	- The dictionary will always have at least the keys as in the reference dictionary. Their value can be modified, more entries can be added, but the initial keys can't be removed.
	- You only need to use the initial entries (For instance, if we add `54:  fifty-four`, you still have to use `50:  fifty` and `4:  four`)
	- The entries of the dictionary can be stored in any order.
	- If you have any errors from the dictionary parsing, your program must output "Dict Error\n"
	- If the dictionary doesn't allow you to resolve the asked value, your program must output "Dict Error\n".
- Example:

```
$> ./rush-02 42 | cat -e
forty two$
$> ./rush-02 0 | cat -e
zero$
$> ./rush-02 10.4 | cat -e
error$
$> ./rush-02 100000 | cat -e
one hundred thousand$
$> grep "20" numers.dict | cat -e
20    :    hey    everybody !$
$> ./rush-02 20 | cat -e
hey everybody !$
```