libhello: libhello.c
	 gcc -c libhello.c  #-c crea el objeto sin ejecutable / código binario
hello: hello.c libhello
	gcc hello.c libhello.o -o hello #.c codigo fuente , .o binario y se combinan/ligado para crear un ejecutable "hello"
test: hello
	./hello fulanito perenganito juanito
