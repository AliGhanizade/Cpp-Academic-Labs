CXX = g++
CXXFLAGS = -Wall -std=c++17
SRCDIR = src
BINDIR = bin
APPNAME = app_runner

SOURCES = $(wildcard $(SRCDIR)/*.cpp)
SOURCES += $(wildcard $(SRCDIR)/*/*.cpp)
SOURCES += $(wildcard $(SRCDIR)/*/*/*.cpp)

OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(BINDIR)/%.o,$(SOURCES))

all: $(BINDIR)/$(APPNAME)

$(BINDIR)/$(APPNAME): $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BINDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@)bin/
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(BINDIR)

.PHONY: all clean