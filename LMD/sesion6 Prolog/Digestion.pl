% Autor:
% Fecha: 22/05/2015

acaba_de_comer(mosquito,sangre(pedro)).
acaba_de_comer(mosquito,nectar).
acaba_de_comer(mosquito,savia).
acaba_de_comer(pez,mosquito).
acaba_de_comer(serpiente,pez).
acaba_de_comer(oso,pez).
acaba_de_comer(aguila,serpiente).
acaba_de_comer(rana,mosquito).
acaba_de_comer(garza,rana).
acaba_de_comer(aguila,perdiz).
acaba_de_comer(perdiz,trigo).
esta_digiriendo(X,Y):- acaba_de_comer(X,Y).
esta_digiriendo(X,Y):- acaba_de_comer(X,Z), esta_digiriendo(Z,Y).


fact(0, 1).
fact(N, F):- N > 0, N1 is N-1, fact(N1, F1), F is N*F1.