//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct NSEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    SEL _field2;
    id _field3;
} CDStruct_0c56ca5e;

typedef struct {
    float p[2];
} CDStruct_119a7730;

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    char responds;
    char response;
} CDStruct_e99345e9;

typedef struct {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    double _field8;
    struct CGRect _field9;
    unsigned long long _field10;
    unsigned int _field11;
    char _field12;
    char _field13;
    char _field14;
    char _field15;
} CDStruct_4172db96;

typedef struct {
    id _field1;
    struct CGRect _field2;
} CDStruct_37f6246c;

typedef struct {
    unsigned char base;
    struct CGRect contentRect;
    unsigned int id;
    unsigned long long styleMask;
} CDStruct_ef6a399e;

typedef struct {
    unsigned int caContextID;
    unsigned int serviceConnectionID;
    unsigned long long flags;
    long long windowLevel;
    unsigned long long windowStyleMask;
    struct CGSize windowContentMinSize;
    struct CGSize windowContentMaxSize;
    struct CGRect serviceViewFrame;
    NSArray *touchBarsDescription;
} CDStruct_fe490e16;

typedef struct {
    int privateEventLoopKind;
    char sharesParentKeyState;
    CDStruct_ef6a399e window;
} CDStruct_8ca9744b;

typedef struct {
    int _field1;
    CDStruct_ef6a399e _field2;
} CDStruct_5d2c0651;

typedef struct {
    CDStruct_ef6a399e _field1;
} CDStruct_9fbe0e86;

