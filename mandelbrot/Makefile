TARGET:=m

.PHONY: all clean run
.SECONDARY:

all: $(TARGET)

$(TARGET):
	$(CC) m.c -o $(TARGET) -lm

run: $(TARGET)
	./$(TARGET)

clean:
	$(RM) $(TARGET)
