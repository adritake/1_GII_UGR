% Autor:
% Fecha: 29/05/2015

%Ejercicio 1 =======================================================

suma(N,S):- N>0, is N*(N+1)/2.
suma2(0,0).
suma2(N,S):-N>0, N1 is N-1, suma2(N1,S1), S is N + S1.

%Ejercicio 2 ========================================================

impar(X):- 1 is X mod 2.
fib(1,1).
fib(2,1).
    %fibonacci normal
fib(M,F):- M>2, M1 is M - 1, M2 is M-2, fib(M1,F1), fib(M2,F2), F is F1+F2.

    %fibonacci al cuadrado
fib2(P,G):- P > 1 , impar(P), N is (P-1)/2, N1 is N+1, fib(N,G1), fib(N1,G2), G is (G1*G1)+(G2*G2).

  %Para ver si son iguales los dos terminos
ig(L):- L > 1, impar(L), fib(L,F) , fib2(L,G), 0 is F - G.


%Ejercicio 3 ===================================================================================================

     % 3fib(n) = 3fib(n-1) + 3fib(n-2) + 3fib(n-3)
     % Hay que tomar una funcion que sea 2^3fib(n) para aplicar la multiplicacion

p(0,1).
p(1,2).
p(2,4).

    %funcion normal.
%p(N,R):- N > 2, N1 is N-1, N2 is N-2, N3 is N-3, p(N1,R1), p(N2,R2), p(N3,R3), R is R1*R2*R3.

    %funcion tribonacci
tri(0,0).
tri(1,1).
tri(2,2).
    %De esta manera se consigue trabajar con numero mas chicos, tri(M,F) sale de forma de n talque 2^n es la solucion que se hace con la funcion p(N,R)
tri(M,F):- M > 2, M1 is M-1, M2 is M-2, M3 is M-3, tri(M1,F1), tri(M2,F2), tri(M3,F3), F is F1+F2+F3.
p(N,R):- tri(N,T), R is 2^T.



%Ejercicio 4 ==================================================================================================


x(0,0).
x(1,1).
x(2,4).

x(N,S):- N>2, N1 is N-1, N2 is N-2, N3 is N-3, x(N1,S1), x(N2,S2), x(N3,S3) , S is 3*S1 - 3*S2 + S3.
    
    
    
    
    
    
    