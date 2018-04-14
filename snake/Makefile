TARGET:=s

.PHONY: all clean run
.SECONDARY:

all: $(TARGET)

$(TARGET):
	$(CC) s.c -o $(TARGET) -lpthread

run: $(TARGET)
	./$(TARGET)

clean:
	$(RM) $(TARGET) h.s
