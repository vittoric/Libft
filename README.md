## Libft - Primer proyecto como estudiante de 42Madrid 🚀
### Contenido
* [¿Que es libft?](#que-es-libft)
* [¿En que consiste?](#en-que-consiste)
* [¿Que es Makefile y como hacerlo?](#Que-es-Makefile-y-como-hacerlo)
* [Lista de funcciones](#lista-de-funcciones)  (haga clic en cada función para ver una explicación)

### ¿Que es libft?

Programar en C puede ser aburrido cuando uno no tiene acceso a las funciones comunes más utilizadas. Libft es un proyecto individual en <b>42</b> que nos hace a recrear algunas funciones de la biblioteca C estándar para futuros proyectos  y tener una comprensión más profunda de las estructuras de datos y los algoritmos básicos. Este proyecto permite entender la forma en la que estas funciones
operan, cómo implementarlas y aprender a utilizarlas.  En <b>42</b> no se nos permite usar algunas bibliotecas estándar en nuestros proyectos, por lo que tenemos que crear una librería propia, que será muy útil ya que la utilizaremos en los siguientes proyectos de C.


### ¿En que consiste?

Hay 4 secciones:
1. **Funciones de Libc:** Algunas de las funciones estándar de C
2. **Funciones adicionales:** Funciones que serán útiles para proyectos posteriores
3. **Parte bonus:** funciones que serán útiles para la manipulación de listas
4. **Funciones personales:** Funciones que creo que serán útiles más adelante


## ¿Que es Makefile y como hacerlo?

Un archivo del tipo *makefile* es un archivo que hace uso de la utilidad `make`. Esta utilidad determina que partes de un programa deben de compilarse, y les manda comandos para hacerlo. En esencia, un *makefile* sirve para autocompilar un proyecto en lugar de hacerlo manualmente.

Para poder hacer uso de `make`, en primer lugar debe crearse un archivo del tipo *makefile*. Para ello basta con crear uno con nombre "makefile" o "Makefile". Ambos nombres son completamente válidos (el manual de la GNU recomienda usar el segundo, puesto que suele aparecer cerca del inicio en los listados de directorios, junto otros arhcivos importantes como README).

En estos apuntes voy a explicar, en particular, el Makefile que he hecho para el proyecto libft.

## [Makefile](/Makefile)

Aqui os dejo un link a stackoverflow del tutorial de [las mejores prácticas y trucos para hacer un buen makefile](https://stackoverflow.com/c/42network/questions/1604/1605)

#
<br><br>



### Lista de funcciones
Funciones de Libc         | Funciones adicionales         | Parte bonus                         | Funciones personales
:-----------:             | :-----------:                 | :-----------:                       | :-----------:
[ft_memset](#ft_memset)		|[ft_substr](#ft_substr)        | [ft_lstnew](#ft_lstnew)             | [ft_islower](#ft_islower) 
[ft_bzero](#ft_bzero)		  |[ft_strjoin](#ft_strjoin)      | [ft_lstadd_front](#ft_lstadd_front) | [ft_isupper](#ft_isupper) 
[ft_memcpy](#ft_memcpy)		|[ft_strtrim](#ft_strjoin)      | [ft_lstsize](#ft_lstsize)           | [ft_isspace](#ft_isspace)   
[ft_memccpy](#ft_memccpy)	|[ft_split](#ft_split)          | [ft_lstlast](#ft_lstlast)           | 
[ft_memmove](#ft_memmove)	|[ft_itoa](#ft_itoa)            | [ft_lstadd_back](#ft_lstadd_back)   |
[ft_memchr](#ft_memchr)		|[ft_strmapi](#ft_strmapi)      | [ft_lstdelone](#ft_lstdelone)       | 
[ft_memcmp](#ft_memcmp)		|[ft_putchar_fd](#ft_putchar_fd)| [ft_lstclear](#ft_lstclear)         | 
[ft_strlen](#ft_strlen)		|[ft_putstr_fd](#ft_putstr_fd)	| [ft_lstiter](#ft_lstiter)           | 
[ft_strdup](#ft_strdup)		|[ft_putendl_fd](#ft_putendl_fd)| [ft_lstmap](#ft_lstmap)             | 
[ft_strcpy](#ft_strcpy)		|[ft_putnbr_fd](#ft_putnbr_fd)	|				                              | 
[ft_strlcpy](#ft_strlcpy)	| 	                            |			                                | 
[ft_strcat](#ft_strcat)		| 	                            |                                     | 
[ft_strlcat](#ft_strlcat)	| 	                            |                                     | 
[ft_strchr](#ft_strchr)		| 	                            |                                     | 
[ft_strrchr](#ft_strrchr)	| 	                            |                                     | 
[ft_strstr](#ft_strstr)		|                               |                                     |  
[ft_strnstr](#ft_strnstr)	| 	                            |                                     | 
[ft_strcmp](#ft_strcmp)		| 	                            |                                     | 
[ft_strncmp](#ft_strncmp)	| 	                            |                                     | 
[ft_atoi](#ft_atoi)       | 	                            |                                     | 
[ft_isalpha](#ft_isalpha)	| 	                            |                                     | 
[ft_isdigit](#ft_isdigit)	| 	                            |                                     |
[ft_isalnum](#ft_isalnum)	|                               |                                     | 
[ft_isascii](#ft_isascii)	|                               |                                     |  
[ft_isprint](#ft_isprint)	|                               |                                     | 
[ft_toupper](#ft_toupper) |                               |                                     | 
[ft_tolower](#ft_tolower)	|                               |                                     | 
[ft_calloc](#ft_calloc)   |                               |                                     |


## [ft_memset](/ft_memset.c)

`void	    *ft_memset(void *ptr, int x, size_t n)`

Descripción | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Rellena con "n" bytes de "x" la memoria de "ptr"| *ptr es el puntero al área de memoria que se va a llenar | El valor x (convertido a unsigned char) a establecer | El número de bytes que se establecerá en el valor x | Un puntero al área de memoria s


## [ft_bzero](/ft_bzero.c)

`void	    ft_bzero(void *s, size_t n) `

Descripción | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------:  | :-----------: | :-----------:
Borra los datos en los "n" bytes de la memoria comenzando en la ubicación señalada por "s" escribiendo ceros| El puntero al área de memoria que se va a rellenar | El número de bytes | Nada


## [ft_memcpy](/ft_memcpy.c)

`void	    *ft_memcpy(void *dst, const void *src, size_t n)`

Descripción | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copia n bytes del área de memoria src a la memoria de dst. Las áreas de memoria no deben superponerse.  Usa [ft_memmove](#ft_memmove) si las áreas de memoria se superponen| Área de memoria dst | La cadena de origen| El número de bytes a copiar | Un puntero a la cadena de destino.
