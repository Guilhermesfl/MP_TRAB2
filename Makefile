all:
	g++ -fprofile-arcs -ftest-coverage -g CONVERTE_ROMANO.c CONVERTE_FUNC.c -o CONVERTE -lgtest
	g++ -fprofile-arcs -ftest-coverage -g TESTE_ROMANO.c CONVERTE_FUNC.c -o TESTE -lgtest

run:
	./CONVERTE
	./TESTE