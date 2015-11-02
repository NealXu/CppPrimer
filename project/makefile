
-include cmds.mak
-include dirs.mak

.PHONY: clean



all: 01_01_01 01_02_02
	$(ECHO) done

01_01_01:
	$(IF) [ ! -d $(CP_TARGET) ]; then mkdir -p $(CP_TARGET); fi
	$(CC) -o $(CP_TARGET)/$@ $(CP_SRC_01_01_01)/simple.cpp -I $(CP_INC_01_01_01)

01_02_02:
	$(IF) [ ! -d $(CP_TARGET) ]; then mkdir -p $(CP_TARGET); fi
	$(CC) -o $(CP_TARGET)/$@ $(CP_SRC_01_02_02)/iolib.cpp -I $(CP_INC_01_02_02)

clean:
	$(RM) $(CP_TARGET)
