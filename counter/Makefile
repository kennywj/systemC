LIB_DIR=-L/home/kenny/work/systemc-2.3.3/lib-linux64
INC_DIR=-I/home/kenny/work/systemc-2.3.3/include
LIB=-lsystemc

APP=counter

all:
	g++ -o $(APP) first_counter_tb.cpp $(LIB_DIR) $(INC_DIR) $(LIB)

clean:
	rm -rf $(APP)
