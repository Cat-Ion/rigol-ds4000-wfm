KSC ?= kaitai-struct-compiler

wfm4.cpp wfm4.h: wfm4.ksy
	$(KSC) -t cpp_stl --cpp-standard 11 $<

