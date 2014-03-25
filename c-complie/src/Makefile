CFLAGS = -Wall -g -O2

#c-complie:c-complie.o libfunc.so
#c-complie:c-complie.o libfunc.a
c-complie:c-complie.o func.o
	gcc $(CFLAGS) -o $@ $^

#c-complie:c-complie.o
#	gcc $(CFLAGS) -o $@ $< -L. -lfunc

		
c-complie.o:c-complie.c func.h
	gcc $(CFLAGS) -o $@ -c $<
#	gcc $(CFLAGS) -o $@ -c $< -DDEBUG
	
libfunc.so:func.c func.h
	gcc $(CFLAGS) -o $@ -fPIC -shared $<
	
libfunc.a:func.o
	ar rv $@ $<
	
func.o:func.c func.h
	gcc $(CFLAGS) -o $@ -c $<