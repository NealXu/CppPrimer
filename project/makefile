
-include cmds.mak
-include dirs.mak

.PHONY: clean



all: 01_01_01 01_02_02 01_06_03 01_06_04
	$(ECHO) done

01_01_01:
	$(IF) [ ! -d $(CP_TARGET) ]; then mkdir -p $(CP_TARGET); fi
	$(CC) -o $(CP_TARGET)/$@ $(CP_SRC_01_01_01)/simple.cpp -I $(CP_INC_01_01_01)

01_02_02:
	$(IF) [ ! -d $(CP_TARGET) ]; then mkdir -p $(CP_TARGET); fi
	$(CC) -o $(CP_TARGET)/$@ $(CP_SRC_01_02_02)/iolib.cpp -I $(CP_INC_01_02_02)

01_06_03:
	$(IF) [ ! -d $(CP_TARGET) ]; then mkdir -p $(CP_TARGET); fi
	$(CC) -o $(CP_TARGET)/$@ $(CP_SRC_01_06_03)/employee.cpp -I $(CP_INC_01_06_03)

01_06_04:
	$(IF) [ ! -d $(CP_TARGET) ]; then mkdir -p $(CP_TARGET); fi
	$(CC) -g -o $(CP_TARGET)/$@ $(CP_SRC_01_06_04)/maxstring.cpp -I $(CP_INC_01_06_04)

clean:
	$(RM) $(CP_TARGET)
