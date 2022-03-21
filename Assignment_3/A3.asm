.include "m328Pdef.inc"

	ldi r17, 0b11100011 ; input pin 2,3,4
	out DDRD,r17		; declaring pins as input
Start:

	in r17,PIND

	
	ldi r20, 0b00000010 ; counter
	rcall loopin
	
	
	mov r18, r17
	ldi r21,0b00000001	; Mask for reading pin 2
	and r18,r21 ; A
	
	lsr r17
	mov r19, r17
	and r19, r21 ; B
	
	lsr r17
	mov r20, r17
	and r20, r21 ; C
	
	mov r22,r18
	com r22   ; A'
	
	com r19  ; B'
	
	and r22,r19 ;A'.B'
	
	and r18,r20 ;A.C
	or r22, r18 ;A',B' + AC
	
	
	
	
	
	
	ldi r20, 0b00000101
	rcall loopout

	ldi r16, 0b00100000 ;identifying output pins 13 - indicated by 1s
	out DDRB,r16		;declaring pins as output
	out PORTB, r22

	rjmp Start
	
	
loopin: lsr r17
		dec r20
		brne loopin
		ret
loopout: lsl r22
		 dec r20
		 brne loopout
		 ret


	

