	AREA EXP7,CODE,READONLY
		ENTRY
		MOV R5,#5
		
PASS	LDR R0,VALUE
		MOV R4,R5
PASS2	LDR R2,[R0],#4
		MOV R1,R2
		LDR R2,[R0]
		CMP R1,R2
		BLT NOEXC
		STR R1,[R0],#-4
		STR R2,[R0],#4
NOEXC	SUB R4,R4,#1
		CMP R4,#0
		BNE PASS2
		SUB R5,R5,#1
		CMP R5,#0
		BNE PASS
HERE B HERE
VALUE DCD 0X40000000
	END
