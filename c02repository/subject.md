## Files to turn in
`ft_strcapitalize.c`

---

## Allowed functions
`None`

---

- Create a function that capitalizes the first letter of each word and transforms all other letters to lowercase.
- A word is a string of alphanumeric characters
- for loop is forbidden, so use while loop instead
- variable declaration and its value assigning should be done on separate line (like

```c
int i = 0;
```

  should be modified to be like

```c
int i;

i = 0;
```
  )
- Since allowed functions are None, so even malloc isn't allowed, no including anything (such as stdlib.h or stdbool.h)
- Here's how it should be prototyped:

```c
	char	*ft_strcapitalize(char *str);
```
- It should return `str`
- For example:
> salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
- Becomes
> Salut, Comment Tu Bas ? 42mots Quarante-Deux; Cinquante+Et+Un

---

write C code in the file ft_strcapitalize.c and another one for main.c to test the function `ft_strcapitalize`