RM=rm -rf
CC=gcc

C_SRCS=$(shell find . -iname "*.c" | tr '\n' ' ')
H_SRCS=$(shell find . -iname "*.h" | tr '\n' ' ')
OBJS=$(C_SRCS:./%.c=build/%.o)

# Clean and compile .so
all: build/libpkmn-battle-comp.so

create-dirs:
	mkdir -p build/pkmn

build/libpkmn-battle-comp.so: create-dirs $(OBJS)
	$(CC) -shared -Wall -o "build/libpkmn-battle-comp.so" $(OBJS)

build/pkmn/%.o: pkmn/%.c
	$(CC) -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"

# Add debug parameters and compile
debug: CC += -DDEBUG -g
debug: all

# Clean build files
clean:
	$(RM) build

install: all
	cp -u build/libpkmn-battle-comp.so /usr/lib
	cp --parents -u $(H_SRCS) /usr/include

uninstall:
	rm -f /usr/lib/libpkmn-battle-comp.so
	rm -rf /usr/include/pkmn-comparator

.PHONY: all create-dirs clean install uninstall