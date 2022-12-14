## Libft - Primer proyecto como estudiante de 42Madrid 🚀
### Contenido
* [¿Que es libft?](#que-es-libft)
* [¿En que consiste?](#en-que-consiste)
* [¿Que es Makefile y como hacerlo?](#Que-es-Makefile-y-como-hacerlo)
* [Lista de funcciones](#lista-de-funcciones)  (haga clic en cada función para ver una explicación)

 <br>

### ¿Que es libft?

Programar en C puede ser aburrido cuando uno no tiene acceso a las funciones comunes más utilizadas. Libft es un proyecto individual en <b>42</b> que nos hace a recrear algunas funciones de la biblioteca C estándar para futuros proyectos  y tener una comprensión más profunda de las estructuras de datos y los algoritmos básicos. Este proyecto permite entender la forma en la que estas funciones
operan, cómo implementarlas y aprender a utilizarlas.  En <b>42</b> no se nos permite usar algunas bibliotecas estándar en nuestros proyectos, por lo que tenemos que crear una librería propia, que será muy útil ya que la utilizaremos en los siguientes proyectos de C.

<br>

### ¿En que consiste?

Hay 4 secciones:
1. **Funciones de Libc:** Algunas de las funciones estándar de C
2. **Funciones adicionales:** Funciones que serán útiles para proyectos posteriores
3. **Parte bonus:** funciones que serán útiles para la manipulación de listas
4. **Funciones personales:** Funciones que creo que serán útiles más adelante

<br>

### ¿Que es [Makefile](/Makefile) y como hacerlo?

Un archivo del tipo *makefile* es un archivo que hace uso de la utilidad `make`. Esta utilidad determina que partes de un programa deben de compilarse, y les manda comandos para hacerlo. En esencia, un *makefile* sirve para autocompilar un proyecto en lugar de hacerlo manualmente.

Para poder hacer uso de `make`, en primer lugar debe crearse un archivo del tipo *makefile*. Para ello basta con crear uno con nombre "makefile" o "Makefile". Ambos nombres son completamente válidos (el manual de la GNU recomienda usar el segundo, puesto que suele aparecer cerca del inicio en los listados de directorios, junto otros arhcivos importantes como README).

En estos apuntes voy a explicar, en particular, el Makefile que he hecho para el proyecto libft.

Aqui os dejo un link a stackoverflow del tutorial de [las mejores prácticas y trucos para hacer un buen makefile](https://stackoverflow.com/c/42network/questions/1604/1605)

#
<br>

### Lista de funcciones
<br>

Funciones de Libc         | Funciones adicionales         | Parte bonus                         | Funciones personales
:-----------:             | :-----------:                 | :-----------:                       | :-----------:
[ft_isalpha](#ft_isalpha)		|[ft_substr](#ft_substr)        | [ft_lstnew](#ft_lstnew)             | [ft_islower](#ft_islower) 
[ft_isdigit](#ft_isdigit)		  |[ft_strjoin](#ft_strjoin)      | [ft_lstadd_front](#ft_lstadd_front) | [ft_isupper](#ft_isupper) 
[ft_isalnum](#ft_isalnum)		|[ft_strtrim](#ft_strjoin)      | [ft_lstsize](#ft_lstsize)           | [ft_isspace](#ft_isspace)   
[ft_isascii](#ft_isascii) 	|[ft_split](#ft_split)          | [ft_lstlast](#ft_lstlast)           | 
[ft_isprint](#ft_isprint)	|[ft_itoa](#ft_itoa)            | [ft_lstadd_back](#ft_lstadd_back)   |
[ft_strlen](#ft_strlen)		|[ft_strmapi](#ft_strmapi)      | [ft_lstdelone](#ft_lstdelone)       | 
[ft_memset](#ft_memset)		|[ft_putchar_fd](#ft_putchar_fd)| [ft_lstclear](#ft_lstclear)         | 
[ft_bzero](#ft_bzero)		|[ft_putstr_fd](#ft_putstr_fd)	| [ft_lstiter](#ft_lstiter)           | 
[ft_memcpy](#ft_memcpy)		|[ft_putendl_fd](#ft_putendl_fd)| [ft_lstmap](#ft_lstmap)             | 
[ft_memmove](#ft_memmove)		|[ft_putnbr_fd](#ft_putnbr_fd)	|				                              | 
[ft_strlcpy](#ft_strlcpy)	| 	[ft_striteri](#ft_striteri)  |			                                | 
[ft_strlcat](#ft_strlcat)		| 	                            |                                     | 
[ft_tolower](#ft_tolower)	| 	                            |                                     | 
[ft_toupper](#ft_toupper)| 	                            |                                     | 
[ft_strchr](#ft_strchr)		| 	                            |                                     | 
[ft_strrchr](#ft_strrchr)	| 	                            |                                     | 
[ft_strncmp](#ft_strncmp)		|                               |                                     |  
[ft_memchr](#ft_memchr)	| 	                            |                                     | 
[ft_memcmp](#ft_memcmp)		| 	                            |                                     | 
[ft_strnstr](#ft_strnstr)	| 	                            |                                     | 
[ft_atoi](#ft_atoi)       | 	                            |                                     | 




## [ft_isalpha](/ft_isalpha.c)

`int        ft_isalpha(int c)`

Descripción | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Busca un carácter alfabético, es equivalente a([ft_isupper](#ft_isupper)(c) o [ft_islower](#ft_islower)(c)) | El caracter a buscar | 0 si el carácter resulta falso y 1 si el carácter resulta verdadero


## [ft_isdigit](/ft_isdigit.c)

`int         ft_isdigit(int c)`

Descripción | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Busca un dígito (de 0 a 9)| El caracter a buscar | 0 si el carácter resulta falso y 1 si el carácter resulta verdadero


## [ft_isalnum](/ft_isalnum.c)

`int        ft_isalnum(int c)`

Descripción | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Compruebe si hay un carácter alfanumérico, es equivalente a([ft_isalpha](#ft_isalpha) o[ft_isdigit](#ft_isdigit))| El caracter a buscar  | 0 si el carácter resulta falso y 1 si el carácter resulta verdadero


## [ft_isascii](/ft_isascii.c)

`int        ft_isascii(int c)`

Descripción | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Comprueba un carácter ASCII, que es cualquier carácter entre 0 y 127 inclusive| El caracter a buscar | 0 si el carácter resulta falso y 1 si el carácter resulta verdadero


## [ft_isprint](/ft_isprint.c)

`int        ft_isprint(int c)`

Descripción | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Comprueba cualquier carácter imprimible, incluido el espacio| El caracter a buscar | 0 si el carácter resulta falso y 1 si el carácter resulta verdadero


## [ft_strlen](/ft_strlen.c) 
`size_t	    ft_strlen(const char *str)`

Descripción | Param. #1 | Return Values
:-----------: | :-----------: | :-----------:
Calcula la longitud de la cadena apuntada por str, excluyendo el byte nulo de terminación ('\0')	| Es la cadena de la que vamos a encontrar la longitud | La longitud de la cadena


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
Copia n bytes del área de memoria src a la memoria de dst. Las áreas de memoria no deben superponerse.  Usa [ft_memmove](#ft_memmove) si las áreas de memoria se superponen| Área de memoria dst | La cadena de origen| El número de bytes a copiar | Un puntero a la cadena de destino



## [ft_memmove](/ft_memmove.c)

`void	      *ft_memmove(void *dst, const void *src, size_t len)`

Descripción | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copia len bytes de la memoria de src a dst. La memoria pueden superponerse. Primero, los bytes en src se copian en una matriz temporal y luego en dst| Esta es la matriz de destino donde se copiará el contenido, convertido a un puntero | La cadena de origen | El número de bytes | Un puntero a la cadena de destino


## [ft_strlcpy](/ft_strlcpy.c)

`size_t	    ft_strlcpy(char *dst, const char *src, size_t dstsize)`

Descripción | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copia la cadena a la que apunta src, incluido el byte nulo de terminación ('\0'), al búfer señalado por dst| La cadena de destino | La cadena que se va a copiar | Número de caracteres que se copiarán de src | Longitud total de la cadena a crear (longitud de src)


## [ft_strlcat](/ft_strlcat.c)

`size_t	      ft_strlcat(char *dest, const char *src, size_t dstsize)`

Descripción | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Concatena la cadena src al final de dst. Se concatenará al máximo tamaño - strlen (dst) - 1 bytes, terminando en NULL el resultado| La cadena de destino | Cadena que se agregará a dst | Número máximo de caracteres que se agregarán | La longitud de la cadena que intentó crear en dest


## [ft_tolower](/ft_tolower.c)

`int        ft_tolower(int c)`

Descripción | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Si el carácter pasado como argumento es una mayúscula, conviértalo a minúscula| El caracter a convertir | Si c es una letra mayúscula, devuelve su equivalente en minúscula. De lo contrario, devuelve c


## [ft_toupper](/ft_toupper.c)

`int        ft_toupper(int c)`

Descripción | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Si el carácter pasado como argumento es una minúscula, conviértalo a mayúscula| El caracter a convertir | Si c es una letra minúscula, devuelve su equivalente en mayúscula. De lo contrario, devuelve c



## [ft_strchr](/ft_strchr.c)

`char		*ft_strchr(const char *s, int c)`

Descripción | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Localiza la primera aparición de 'c' en la cadena a la que apunta 's'. El carácter nulo final se considera parte de la cadena, por lo tanto, si 'c' es '\0', ubica el final '\0'| Puntero a string | Caracter a buscar | Un puntero a la primera aparición del carácter c en la cadena s o NULL si no se encuentra el carácter


## [ft_strrchr](/ft_strrchr.c)

`char		*ft_strrchr(const char *s, int c)`

Descripción | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Localiza la última aparición de 'c' en la cadena a la que apunta 's'. El carácter nulo final se considera parte de la cadena, por lo tanto, si 'c' es '\0', ubica el final '\0'| Puntero a string| Caracter a buscar | Un puntero a la última aparición del carácter c en la cadena s o NULL si no se encuentra el carácter


## [ft_strncmp](/ft_strncmp.c)

`int	  ft_strncmp(const char *s1, const char *s2, size_t n)`

Descripción | Param. #1 | Param. #2 | Param. #3 |  Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Compara los primeros n caracteres de las cadenas s1 y s2| La primera cadena que se va a comparar| La cadena para comparar | El número máximo de caracteres para comparar | La diferencia entre los dos primeros caracteres que difieren en el cadenas que se comparan


 ## [ft_memchr](/ft_memchr.c)

`void       *ft_memchr(const void *s, int c, size_t n)`

Descripción | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Localiza la primera ocurrencia de c (convertida a unsigned char) en la cadena s| La cadena a buscar| Caracter a buscar  | El número de bytes a buscar | Un puntero al byte localizado, o NULL si tal byte no existe dentro de n bytes


## [ft_memcmp](/ft_memcmp.c)

`int	     ft_memcmp(const void *s1, const void *s2, size_t n)`

Descripción | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Compara los primeros n bytes del área de memoria s1 a los primeros n bytes del área de memoria s2 | La primera cadena a comparar| La cadena a comparar | El número de bytes a comparar | < 0 si s1 es menor que s2;  > 0 si s1 es mayor que s2; = 0 si s1 es igual a s2


## [ft_strnstr](/ft_strnstr.c)

`char       *ft_strnstr(const char *haystack, const char *needle, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Ubiqua la subcadena, donde no se buscan más de los caracteres 'len'. Busca la primera aparición de la subcadena 'needle' en la cadena 'haystack'. Los bytes nulos finales ('\0') no se comparan.| La cadena a buscar | La cadena que se buscará en la cadena 'haystack'| La cantidad máxima de caracteres a buscar | Un puntero a la primera aparición de subcadena 'needle' en el 'haystack'. NULL si no se encuentra la subcadena. Si 'needle' es una cadena vacía, se devuelve 'haystack'


## [ft_atoi](/ft_atoi.c)

`int	   ft_atoi(const char *str)`

| Description | Param. #1 | 
|:-----------: | :-----------: | 
|Esta es una función de C que convierte una representación de cadena de un número entero en un valor entero. La función toma un solo argumento, un puntero a una cadena terminada en nulo (const char *str). La función procesa la cadena de izquierda a derecha y devuelve el valor entero representado por la cadena. La función primero inicializa el resultado (res) en 0 y el signo (signo) en 1. Luego omite cualquier carácter de espacio en blanco inicial (espacios, tabuladores, líneas nuevas, etc.) en la cadena mediante un ciclo while que continúa mientras el carácter actual (señalado por str) es un espacio o un carácter no imprimible (valores ASCII de 9 a 13). A continuación, la función comprueba el primer carácter que no sea un espacio en blanco. Si es un signo menos ('-'), el signo se establece en -1. Si es un signo más ('+'), el signo se deja como 1. Si no es ni un signo más ni un signo menos, el signo permanece 1. Finalmente, la función ingresa a un ciclo que procesa los caracteres restantes en la cadena hasta que encuentra un carácter que no es un dígito (0 a 9). Para cada dígito, la función multiplica el resultado actual por 10 y suma el valor del dígito. Cuando finaliza el bucle, la función devuelve el resultado multiplicado por el signo. Por ejemplo, si se llama a la función con la cadena "-12345", omitirá los caracteres de espacio en blanco iniciales, establecerá el signo en -1 y procesará los dígitos 1, 2, 3, 4 y 5, lo que dará como resultado un resultado final. valor de retorno de -12345.| Esta es la cadena que estamos convirtiendo en un número entero. |



## [ft_substr](/ft_substr.c)

`char  	*ft_substr(char const *s, unsigned int start, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
La función primero verifica si la cadena de entrada es NULL. Si es así, devuelve NULL. A continuación, comprueba si el índice de inicio es mayor que la longitud de la cadena original. Si es así, establece la longitud de la subcadena en 0. Luego, verifica si la longitud de la subcadena es mayor que la longitud de la cadena original. Si es así, establece la longitud de la subcadena en la longitud de la cadena original. Luego, la función asigna memoria para la subcadena usando malloc e inicializa una variable size_t (i) a 0. Luego ingresa a un ciclo que copia los caracteres de la cadena original a la subcadena, comenzando en el índice de inicio y siguiendo un número de iteraciones igual a la longitud de la subcadena. Una vez que finaliza el ciclo, la función agrega un terminador nulo al final de la subcadena y devuelve un puntero a la subcadena. Por ejemplo, si se llama a la función con la cadena "abcdefg", el índice de inicio 2 y la longitud 3, extraerá la subcadena "cde" de la cadena original y le devolverá un puntero.| Un puntero a una cadena terminada en nulo (`char const *s`), que es la cadena original de la que se extraerá la subcadena. | el índice del primer carácter a incluir en la subcadena| la longitud de la subcadena | Un puntero a una nueva cadena



## [ft_strjoin](/ft_strjoin.c)

`char	*ft_strjoin(char const *s1, char const *s2)`

Description | Param. #1 | Param. #2  | Return Value |
:-----------: | :-----------:  | :-----------: | :-----------: |
La función primero verifica si ambas cadenas de entrada no son NULL. Si alguno de ellos es NULL, devuelve NULL. A continuación, calcula las longitudes de las dos cadenas de entrada mediante la función ft_strlen. Luego asigna memoria para la cadena concatenada usando malloc y verifica si la asignación fue exitosa. Si no fuera así, la función devuelve NULL. Luego, la función inicializa una variable int (i) a -1 e ingresa a un bucle que copia los caracteres de la primera cadena de entrada a la cadena concatenada, uno por uno. Una vez que finaliza el primer ciclo, la función restablece i en -1 e ingresa a otro ciclo que copia los caracteres de la segunda cadena de entrada a la cadena concatenada, comenzando al final de la primera cadena de entrada. Finalmente, la función agrega un terminador nulo al final de la cadena concatenada y le devuelve un puntero. Por ejemplo, si se llama a la función con las cadenas "abc" y "def", creará una nueva cadena "abcdef" y le devolverá un puntero. Nota: La función llama a la función ft_strlen, que calcula la longitud de una cadena terminada en nulo.| Un puntero a una cadena terminada en cero (`char const *s1`), que es la primera cadena que se concatena | Un puntero a una cadena terminada en nulo (`char const *s2`), que es la segunda cadena que se concatena. | Un puntero a una nueva cadena que es el resultado de la concatenación de s1 y s2 |


## [ft_strtrim](/ft_strtrim.c)

`char	*ft_strtrim(char const *s1, char const *set)`

Description | Param. #1 | Param. #2  | Return Value |
:-----------: | :-----------:  | :-----------: | :-----------: |
La función primero verifica si la cadena de entrada y el conjunto de caracteres no son NULL. Si alguno de ellos es NULL, devuelve NULL. A continuación, inicializa dos variables size_t: strat, que almacenará el índice del primer carácter no extraíble de la cadena, y end, que almacenará el índice del último carácter no extraíble de la cadena. Inicialmente, strat se establece en 0 y end se establece en la longitud de la cadena. Luego, la función ingresa a un bucle que incrementa `start` siempre que el carácter en el índice de `start` actual esté en el conjunto de caracteres que se eliminará. Después de que finaliza el primer ciclo, la función ingresa a otro ciclo que decrementa end siempre que el carácter en el índice final actual esté en el conjunto de caracteres que se eliminarán y end sea mayor que strat. Luego, la función asigna memoria para la cadena resultante usando malloc y verifica si la asignación fue exitosa. Si no fuera así, la función devuelve NULL. Finalmente, la función copia la subcadena de s1 que comienza en strat y tiene una longitud de (end - strat) a la cadena resultante usando ft_strlcpy. Luego devuelve un puntero a la cadena resultante. Por ejemplo, si se llama a la función con la cadena "abc" y el conjunto de caracteres "\t\n", creará una nueva cadena "abc" y le devolverá un puntero.| Un puntero a una cadena terminada en nulo (`char const *s1`), que es la cadena original de la que se eliminarán los caracteres. | Un puntero a una cadena terminada en nulo (`char const *set`), que es el conjunto de caracteres que se eliminará. |Un puntero a una nueva cadena |








