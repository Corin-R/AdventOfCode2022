COMPILER=g++
OPTIONS=-g -std=c++17 -Wpedantic -Wall -Wextra  -Wconversion -Wunreachable-code -g -O3
COMPILE=$(COMPILER) $(OPTIONS)
BUILD=build


# Compile main by default
all: build/05

# $(BUILD)/*.o expands to all .o files in the $(BUILD) directory
# In this case, we'll get $(BUILD)/file1.o $(BUILD)/file2.o

build/%: %/*.cpp
	mkdir -p $(BUILD)
	$(COMPILE) $^ -o $@



# Delete the build directory and program
clean:
	rm -rf $(BUILD) program

# These rules do not correspond to a specific file
.PHONY: build clean

#DAY := 08
#all: build/$(DAY)
#build/%: %/*.cpp
#	@mkdir -p build
#	$(CXX) $(CXXFLAGS) $< -o $@

