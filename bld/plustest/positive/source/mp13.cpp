#include "fail.h"

void link_time( int );
struct __ {
    __() {
	link_time( 0 );
    }
} __;

struct B {
    virtual void ack(){};
    virtual void jeff(){};
};
struct S : B {
    void foo(){};
    void bar(){};
};

typedef void ( S::* mp )( void );

struct ZZ {
    mp a,b,c;
};
ZZ _a = { &S::foo, S::foo, B::ack };
ZZ _b[] = {
    { &S::foo, S::ack, S::jeff },
    { &S::foo, S::ack, S::jeff },
    { &S::foo, S::ack, S::jeff },
    { &S::foo, S::ack, S::jeff },
    { &S::foo, S::ack, S::jeff },
    { &S::foo, S::ack, S::jeff },
};
mp _c = &S::foo;
mp _d[] = {
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
    S::foo,
    &S::bar,
    0,
    &B::ack,
    B::jeff,
};

int is_zero( void *p, unsigned s ) {
    char *q = (char*)p;
    while( s != 0 ) {
	if( *q ) {
	    return( 0 );
	}
	++q;
	--s;
    }
    return( 1 );
}

void link_time( int check ) {
    if( check != is_zero( &_a, sizeof(_a) ) ) _fail;
    if( check != is_zero( &_b, sizeof(_b) ) ) _fail;
    if( check != is_zero( &_c, sizeof(_c) ) ) _fail;
    if( check != is_zero( &_d, sizeof(_d) ) ) _fail;
}

int main() {
    link_time( 0 );
    _PASS;
}