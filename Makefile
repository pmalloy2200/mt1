# Makefile for Midterm I project

CC = clang
CFLAGS = -Wall -O0 -g
LFLAGS = -O0 -g
LIBS = -lm

main1: main1.o pi_leibniz.o pi_bbp.o bbp_time.o leibniz_time.o
	${CC} $(LFLAGS) $(LIBS) -o main1 $^

main1.o pi_leibniz.o pi_bbp.o bbp_time.o: pi_funs.h

clean:
	rm -f *.o

veryclean: clean
	rm -f main1
