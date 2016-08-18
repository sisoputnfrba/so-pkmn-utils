RM=rm -rf
CC=gcc

C_SRCS=$(shell find . -iname "*.c" | tr '\n' ' ')
OBJS=$(C_SRCS:./%.c=build/%.o)

all: build/so-pkmn-battle-comparator-test

create-dirs:
	mkdir -p build/.

build/so-pkmn-battle-comparator-test: dependents create-dirs $(OBJS)
	$(CC) -Wall -L"../src/build" -o "build/so-pkmn-battle-comparator-test" $(OBJS) -lpkmn-battle-comp -lcommons

build/%.o: ./%.c
	$(CC) -I"../src" -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"

debug: CC += -DDEBUG -g
debug: all

clean:
	$(RM) build

dependents:
	-cd ../src/ && $(MAKE) all

.PHONY: all create-dirs clean