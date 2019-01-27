#pragma once
#include <stdint.h>
typedef unsigned char u8;
typedef unsigned short u16;

class MMU;

class CPU
{
private:
	u8 a,f,b,c,d,e,h,l; //8-bit registers, A = accumulator F = flags register. BC, DE and HL can be accesed combined as 16 bit registers.
	u16 sp, pc; //Stack pointer and program counter
	MMU& mmu; //Reference to mmu for memory access

	u8 tempmem[0xFFFF]; //TODO: REMOVE

	//Accessor methods
	u16 getDoubleRegister(u8 high, u8 low);
	u8 readAddress(u16 adr); //TODO : by value

	

	//8 bit loads
	void ld8bit(u8& target, u8 source); // TODO : source by value

	//Op-codes
	void opCode00(); void opCode01(); void opCode02(); void opCode03(); void opCode04(); void opCode05(); void opCode06(); void opCode07(); 
	void opCode08(); void opCode09(); void opCode0A(); void opCode0B(); void opCode0C(); void opCode0D(); void opCode0E(); void opCode0F();
	void opCode10(); void opCode11(); void opCode12(); void opCode13(); void opCode14(); void opCode15(); void opCode16(); void opCode17();
	void opCode18(); void opCode19(); void opCode1A(); void opCode1B(); void opCode1C(); void opCode1D(); void opCode1E(); void opCode1F(); 
	void opCode20(); void opCode21(); void opCode22(); void opCode23(); void opCode24(); void opCode25(); void opCode26(); void opCode27();
	void opCode28(); void opCode29(); void opCode2A(); void opCode2B(); void opCode2C(); void opCode2D(); void opCode2E(); void opCode2F();
	void opCode30(); void opCode31(); void opCode32(); void opCode33(); void opCode34(); void opCode35(); void opCode36(); void opCode37();
	void opCode38(); void opCode39(); void opCode3A(); void opCode3B(); void opCode3C(); void opCode3D(); void opCode3E(); void opCode3F();
	void opCode40(); void opCode41(); void opCode42(); void opCode43(); void opCode44(); void opCode45(); void opCode46(); void opCode47();
	void opCode48(); void opCode49(); void opCode4A(); void opCode4B(); void opCode4C(); void opCode4D(); void opCode4E(); void opCode4F();
	void opCode50(); void opCode51(); void opCode52(); void opCode53(); void opCode54(); void opCode55(); void opCode56(); void opCode57();
	void opCode58(); void opCode59(); void opCode5A(); void opCode5B(); void opCode5C(); void opCode5D(); void opCode5E(); void opCode5F();
	void opCode60(); void opCode61(); void opCode62(); void opCode63(); void opCode64(); void opCode65(); void opCode66(); void opCode67();
	void opCode68(); void opCode69(); void opCode6A(); void opCode6B(); void opCode6C(); void opCode6D(); void opCode6E(); void opCode6F();
	void opCode70(); void opCode71(); void opCode72(); void opCode73(); void opCode74(); void opCode75(); void opCode76(); void opCode77();
	void opCode78(); void opCode79(); void opCode7A(); void opCode7B(); void opCode7C(); void opCode7D(); void opCode7E(); void opCode7F(); 
	void opCode80(); void opCode81(); void opCode82(); void opCode83(); void opCode84(); void opCode85(); void opCode86(); void opCode87(); 
	void opCode88(); void opCode89(); void opCode8A(); void opCode8B(); void opCode8C(); void opCode8D(); void opCode8E(); void opCode8F();
	void opCode90(); void opCode91(); void opCode92(); void opCode93(); void opCode94(); void opCode95(); void opCode96(); void opCode97();
	void opCode98(); void opCode99(); void opCode9A(); void opCode9B(); void opCode9C(); void opCode9D(); void opCode9E(); void opCode9F();
	void opCodeA0(); void opCodeA1(); void opCodeA2(); void opCodeA3(); void opCodeA4(); void opCodeA5(); void opCodeA6(); void opCodeA7();
	void opCodeA8(); void opCodeA9(); void opCodeAA(); void opCodeAB(); void opCodeAC(); void opCodeAD(); void opCodeAE(); void opCodeAF();
	void opCodeB0(); void opCodeB1(); void opCodeB2(); void opCodeB3(); void opCodeB4(); void opCodeB5(); void opCodeB6(); void opCodeB7();
	void opCodeB8(); void opCodeB9(); void opCodeBA(); void opCodeBB(); void opCodeBC(); void opCodeBD(); void opCodeBE(); void opCodeBF();
	void opCodeC0(); void opCodeC1(); void opCodeC2(); void opCodeC3(); void opCodeC4(); void opCodeC5(); void opCodeC6(); void opCodeC7();
	void opCodeC8(); void opCodeC9(); void opCodeCA(); void opCodeCB(); void opCodeCC(); void opCodeCD(); void opCodeCE(); void opCodeCF();
	void opCodeD0(); void opCodeD1(); void opCodeD2(); void opCodeD3(); void opCodeD4(); void opCodeD5(); void opCodeD6(); void opCodeD7();
	void opCodeD8(); void opCodeD9(); void opCodeDA(); void opCodeDB(); void opCodeDC(); void opCodeDD(); void opCodeDE(); void opCodeDF(); 
	void opCodeE0(); void opCodeE1(); void opCodeE2(); void opCodeE3(); void opCodeE4(); void opCodeE5(); void opCodeE6(); void opCodeE7();
	void opCodeE8(); void opCodeE9(); void opCodeEA(); void opCodeEB(); void opCodeEC(); void opCodeED(); void opCodeEE(); void opCodeEF();
	void opCodeF0(); void opCodeF1(); void opCodeF2(); void opCodeF3(); void opCodeF4(); void opCodeF5(); void opCodeF6(); void opCodeF7();
	void opCodeF8(); void opCodeF9(); void opCodeFA(); void opCodeFB(); void opCodeFC(); void opCodeFD(); void opCodeFE(); void opCodeFF();





public:
	CPU(MMU& inmmu);
	~CPU();
	u16 test();
};

