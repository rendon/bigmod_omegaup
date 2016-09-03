# Descripción

Dados tres numeros $b$, $p$ y $m$, imprime "Si" (sin las comillas) si $b^p \equiv 0 (\mod m)$

# Entrada

Tres enteros, $b$, $p$, y $m$.

# Salida

Imprime "Si" o "No" segun el caso.

# Ejemplo

||input
3 7 5
||output
No
||description
3^7 % 5 = 2, por lo tanto la respuesta es "No".
||input
3 7 9
||output
Si
||end

# Límites
- $0 \leq b \leq 1000000$
- $0 \leq p \lt 2^{31}$
- $1 \lt m \lt 2^{31}$.
