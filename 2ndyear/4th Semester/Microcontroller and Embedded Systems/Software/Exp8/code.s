	AREA EXP8,CODE,READONLY
		ENTRY
		LDR R0,MEMORY
		LDR R1,[R0]
		MOV R5,#32

ROTATE	RORS R1,#1
		BCS ONES
		ADD R3,R3,#1
		B NEXT
ONES	ADD R2,R3,#1
NEXT	SUB R5,R5,#1
		CMP R5,#0
		BNE ROTATE
		ADD R0,R0,#04
		STRB R2,[R0]
		ADD R0,R0,#1
		STRB R3,[R0]
HERE B HERE
MEMORY DCD 0X40000000
	END