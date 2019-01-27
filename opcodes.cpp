#include "CPU.h"

void CPU::opCode00() {};
void CPU::opCode01() {};
void CPU::opCode02() {};
void CPU::opCode03() {};
void CPU::opCode04() {};
void CPU::opCode05() {};

//load register with number, b = u8
void CPU::opCode06() {
	ld8bit(b, readAddress(pc + 1));
}
void CPU::opCode07() {};
void CPU::opCode08() {};
void CPU::opCode09() {};
void CPU::opCode0A() {};
void CPU::opCode0B() {};
void CPU::opCode0C() {};
void CPU::opCode0D() {};

//load register with number, c = u8
void CPU::opCode0E() {
	ld8bit(c, readAddress(pc + 1));
}
void CPU::opCode0F() {};
void CPU::opCode10() {};
void CPU::opCode11() {};
void CPU::opCode12() {};
void CPU::opCode13() {};
void CPU::opCode14() {};
void CPU::opCode15() {};

//load register with number, d = u8
void CPU::opCode16() {
	ld8bit(d, readAddress(pc + 1));
}
void CPU::opCode17() {};
void CPU::opCode18() {};
void CPU::opCode19() {};
void CPU::opCode1A() {};
void CPU::opCode1B() {};
void CPU::opCode1C() {};
void CPU::opCode1D() {};

//load register with number, e = u8
void CPU::opCode1E() {
	ld8bit(e, readAddress(pc + 1));
}
void CPU::opCode1F() {};
void CPU::opCode20() {};
void CPU::opCode21() {};
void CPU::opCode22() {};
void CPU::opCode23() {};
void CPU::opCode24() {};
void CPU::opCode25() {};

//load register with number, h = u8
void CPU::opCode26() {
	ld8bit(h, readAddress(pc + 1));
}
void CPU::opCode27() {};
void CPU::opCode28() {};
void CPU::opCode29() {};
void CPU::opCode2A() {};
void CPU::opCode2B() {};
void CPU::opCode2C() {};
void CPU::opCode2D() {};

//load register with number, l = u8
void CPU::opCode2E() {
	ld8bit(l, readAddress(pc + 1));
}
void CPU::opCode2F() {};
void CPU::opCode30() {};
void CPU::opCode31() {};
void CPU::opCode32() {};
void CPU::opCode33() {};
void CPU::opCode34() {};
void CPU::opCode35() {};

//write number to memory, (HL) = u8 TODO
void CPU::opCode36() {};
void CPU::opCode37() {};
void CPU::opCode38() {};
void CPU::opCode39() {};
void CPU::opCode3A() {};
void CPU::opCode3B() {};
void CPU::opCode3C() {};
void CPU::opCode3D() {};

//load register with number, a = u8
void CPU::opCode3E() {
	ld8bit(a, readAddress(pc + 1));
}
void CPU::opCode3F() {};

// load register, b=x
void CPU::opCode40() {
	ld8bit(b, b);
}
void CPU::opCode41() {
	ld8bit(b, c);
}
void CPU::opCode42() {
	ld8bit(b, d);
}
void CPU::opCode43() {
	ld8bit(b, e);
}
void CPU::opCode44() {
	ld8bit(b, h);
}
void CPU::opCode45() {
	ld8bit(b, l);
}
void CPU::opCode46() {
	ld8bit(b, readAddress(getDoubleRegister(h, l)));
}
void CPU::opCode47() {
	ld8bit(b, a);
}

// load register, c=x
void CPU::opCode48() {
	ld8bit(c, b);
}
void CPU::opCode49() {
	ld8bit(c, c);
}
void CPU::opCode4A() {
	ld8bit(c, d);
}
void CPU::opCode4B() {
	ld8bit(c, e);
}
void CPU::opCode4C() {
	ld8bit(c, h);
}
void CPU::opCode4D() {
	ld8bit(c, l);
}
void CPU::opCode4E() {
	ld8bit(c, readAddress(getDoubleRegister(h, l)));
}
void CPU::opCode4F() {
	ld8bit(c, a);
}

// load register, d=x
void CPU::opCode50() {
	ld8bit(d, b);
}
void CPU::opCode51() {
	ld8bit(d, c);
}
void CPU::opCode52() {
	ld8bit(d, d);
}
void CPU::opCode53() {
	ld8bit(d, e);
}
void CPU::opCode54() {
	ld8bit(d, h);
}
void CPU::opCode55() {
	ld8bit(d, l);
}
void CPU::opCode56() {
	ld8bit(d, readAddress(getDoubleRegister(h, l)));
}
void CPU::opCode57() {
	ld8bit(d, a);
}

// load register, e=x
void CPU::opCode58() {
	ld8bit(e, b);
}
void CPU::opCode59() {
	ld8bit(e, c);
}
void CPU::opCode5A() {
	ld8bit(e, d);
}
void CPU::opCode5B() {
	ld8bit(e, e);
}
void CPU::opCode5C() {
	ld8bit(e, h);
}
void CPU::opCode5D() {
	ld8bit(e, l);
}
void CPU::opCode5E() {
	ld8bit(e, readAddress(getDoubleRegister(h, l)));
}
void CPU::opCode5F() {
	ld8bit(e, a);
}

// load register, h=x
void CPU::opCode60() {
	ld8bit(h, b);
}
void CPU::opCode61() {
	ld8bit(h, c);
}
void CPU::opCode62() {
	ld8bit(h, d);
}
void CPU::opCode63() {
	ld8bit(h, e);
}
void CPU::opCode64() {
	ld8bit(h, h);
}
void CPU::opCode65() {
	ld8bit(h, l);
}
void CPU::opCode66() {
	ld8bit(h, readAddress(getDoubleRegister(h, l)));
}
void CPU::opCode67() {
	ld8bit(h, a);
}

// load register, l=x
void CPU::opCode68() {
	ld8bit(l, b);
}
void CPU::opCode69() {
	ld8bit(l, c);
}
void CPU::opCode6A() {
	ld8bit(l, d);
}
void CPU::opCode6B() {
	ld8bit(l, e);
}
void CPU::opCode6C() {
	ld8bit(l, h);
}
void CPU::opCode6D() {
	ld8bit(l, l);
}
void CPU::opCode6E() {
	ld8bit(h, readAddress(getDoubleRegister(h, l)));
}
void CPU::opCode6F() {
	ld8bit(l, a);
}

// write to memory from register, (HL) = x TODO
void CPU::opCode70() {};
void CPU::opCode71() {};
void CPU::opCode72() {};
void CPU::opCode73() {};
void CPU::opCode74() {};
void CPU::opCode75() {};
void CPU::opCode76() {};

// load register, a=x
void CPU::opCode77() {
	ld8bit(a, b);
}
void CPU::opCode78() {
	ld8bit(a, c);
}
void CPU::opCode79() {
	ld8bit(a, d);
}
void CPU::opCode7A() {
	ld8bit(a, e);
}
void CPU::opCode7B() {
	ld8bit(a, h);
}
void CPU::opCode7C() {
	ld8bit(a, l);
}
void CPU::opCode7D() {
	ld8bit(a, readAddress(getDoubleRegister(h, l)));
}
void CPU::opCode7E() {
	ld8bit(a, a);
}
void CPU::opCode7F() {};
void CPU::opCode80() {};
void CPU::opCode81() {};
void CPU::opCode82() {};
void CPU::opCode83() {};
void CPU::opCode84() {};
void CPU::opCode85() {};
void CPU::opCode86() {};
void CPU::opCode87() {};
void CPU::opCode88() {};
void CPU::opCode89() {};
void CPU::opCode8A() {};
void CPU::opCode8B() {};
void CPU::opCode8C() {};
void CPU::opCode8D() {};
void CPU::opCode8E() {};
void CPU::opCode8F() {};
void CPU::opCode90() {};
void CPU::opCode91() {};
void CPU::opCode92() {};
void CPU::opCode93() {};
void CPU::opCode94() {};
void CPU::opCode95() {};
void CPU::opCode96() {};
void CPU::opCode97() {};
void CPU::opCode98() {};
void CPU::opCode99() {};
void CPU::opCode9A() {};
void CPU::opCode9B() {};
void CPU::opCode9C() {};
void CPU::opCode9D() {};
void CPU::opCode9E() {};
void CPU::opCode9F() {};
void CPU::opCodeA0() {};
void CPU::opCodeA1() {};
void CPU::opCodeA2() {};
void CPU::opCodeA3() {};
void CPU::opCodeA4() {};
void CPU::opCodeA5() {};
void CPU::opCodeA6() {};
void CPU::opCodeA7() {};
void CPU::opCodeA8() {};
void CPU::opCodeA9() {};
void CPU::opCodeAA() {};
void CPU::opCodeAB() {};
void CPU::opCodeAC() {};
void CPU::opCodeAD() {};
void CPU::opCodeAE() {};
void CPU::opCodeAF() {};
void CPU::opCodeB0() {};
void CPU::opCodeB1() {};
void CPU::opCodeB2() {};
void CPU::opCodeB3() {};
void CPU::opCodeB4() {};
void CPU::opCodeB5() {};
void CPU::opCodeB6() {};
void CPU::opCodeB7() {};
void CPU::opCodeB8() {};
void CPU::opCodeB9() {};
void CPU::opCodeBA() {};
void CPU::opCodeBB() {};
void CPU::opCodeBC() {};
void CPU::opCodeBD() {};
void CPU::opCodeBE() {};
void CPU::opCodeBF() {};
void CPU::opCodeC0() {};
void CPU::opCodeC1() {};
void CPU::opCodeC2() {};
void CPU::opCodeC3() {};
void CPU::opCodeC4() {};
void CPU::opCodeC5() {};
void CPU::opCodeC6() {};
void CPU::opCodeC7() {};
void CPU::opCodeC8() {};
void CPU::opCodeC9() {};
void CPU::opCodeCA() {};
void CPU::opCodeCB() {};
void CPU::opCodeCC() {};
void CPU::opCodeCD() {};
void CPU::opCodeCE() {};
void CPU::opCodeCF() {};
void CPU::opCodeD0() {};
void CPU::opCodeD1() {};
void CPU::opCodeD2() {};
void CPU::opCodeD3() {};
void CPU::opCodeD4() {};
void CPU::opCodeD5() {};
void CPU::opCodeD6() {};
void CPU::opCodeD7() {};
void CPU::opCodeD8() {};
void CPU::opCodeD9() {};
void CPU::opCodeDA() {};
void CPU::opCodeDB() {};
void CPU::opCodeDC() {};
void CPU::opCodeDD() {};
void CPU::opCodeDE() {};
void CPU::opCodeDF() {};
void CPU::opCodeE0() {};
void CPU::opCodeE1() {};
void CPU::opCodeE2() {};
void CPU::opCodeE3() {};
void CPU::opCodeE4() {};
void CPU::opCodeE5() {};
void CPU::opCodeE6() {};
void CPU::opCodeE7() {};
void CPU::opCodeE8() {};
void CPU::opCodeE9() {};
void CPU::opCodeEA() {};
void CPU::opCodeEB() {};
void CPU::opCodeEC() {};
void CPU::opCodeED() {};
void CPU::opCodeEE() {};
void CPU::opCodeEF() {};
void CPU::opCodeF0() {};
void CPU::opCodeF1() {};
void CPU::opCodeF2() {};
void CPU::opCodeF3() {};
void CPU::opCodeF4() {};
void CPU::opCodeF5() {};
void CPU::opCodeF6() {};
void CPU::opCodeF7() {};
void CPU::opCodeF8() {};
void CPU::opCodeF9() {};
void CPU::opCodeFA() {};
void CPU::opCodeFB() {};
void CPU::opCodeFC() {};
void CPU::opCodeFD() {};
void CPU::opCodeFE() {};
void CPU::opCodeFF() {};


