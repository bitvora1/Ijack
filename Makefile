
CXX=g++

TARGET=Main

DIRS:= src src/Headers/Base/Basecpp

SRCS:= $(foreach dir,$(DIRS),$(wildcard $(dir)/*.cpp))




build:
	$(CXX) $(SRCS) -o $(TARGET) -lraylib -lGL

run: build
	./$(TARGET)
