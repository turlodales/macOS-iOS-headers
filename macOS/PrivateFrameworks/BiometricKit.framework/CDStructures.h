//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Typedef'd Structures

typedef struct {
    NSData *imageData;
    unsigned int width;
    unsigned int height;
} CDStruct_ee380287;

typedef struct {
    short _field1;
    short _field2;
    short _field3;
} CDStruct_da492c19;

typedef struct CDStruct_183601bc;

typedef struct {
    int count;
    int capa;
    CDStruct_183601bc **items;
    int unusedImageCount;
    int componentCount;
    int componentCapa;
    int bestComponentIndex;
    int bestMapiComponentIndex;
    CDStruct_183601bc **components;
    short mapiNodeAddedIndex;
    short mapiNodeRemovedIndex;
    int updateCount;
    _Bool structureIsInconsistent;
} CDStruct_87aaca7b;

typedef struct {
    short _field1;
    short _field2;
    short _field3;
    CDStruct_da492c19 _field4;
    struct {
        short _field1;
        short _field2;
        short _field3;
        short _field4;
        short _field5;
        short _field6;
        short _field7;
        unsigned char _field8[16];
        unsigned char _field9[16];
        short _field10;
        struct {
            CDStruct_da492c19 _field1;
            short _field2;
            short _field3;
        } _field11[300];
        short _field12;
        short _field13;
        short _field14;
        short _field15;
        short _field16;
        short _field17;
    } _field5;
    int _field6;
    int _field7;
} CDStruct_2c3997d1;

