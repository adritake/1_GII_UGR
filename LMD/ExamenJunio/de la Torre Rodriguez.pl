% Autor:  Adrián de la Torre Rodríguez 1º A
% Fecha: 10/06/2015

binomial(N,M,S):- N > 0, M > 1, N1 is N -1, F is M-1, binomial(N1,M,S1),binomial(N1,F,S2), S is S1 + S2.
binomial(N,1,N).
binomial(N,0,1).
binomial(N,N,1).


%Para comprobar el apartado b) basta con poner por ejemplo   " binomial(8,2,S). " y luego " binomial(8,6,S). " y vemos que es el mismo resultado