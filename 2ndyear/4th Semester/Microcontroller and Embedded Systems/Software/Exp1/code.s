	AREA EXP1, CODE, READONLY
		ENTRY
		LDRH R1, N
		LDRH R2, M
		MUL R3,R1,R2
		
M DCW 5
N DCW 6

		LDR R4,=RESULT
		STR R3,[R4]
		
	AREA MYDATA, DATA,READWRITE
RESULT DCD 0X0
	END
