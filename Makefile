CXX = clang
CXXFLAGS = -Wall -O2

kryptinfo: kryptinfo.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f kryptinfo

