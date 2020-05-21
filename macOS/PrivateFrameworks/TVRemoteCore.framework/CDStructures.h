//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct CGPoint {
    double x;
    double y;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct RSDAAPChunk {
    struct RSDAAPChunkHeader _field1;
    char *_field2;
};

struct RSDAAPChunkHeader {
    unsigned int _field1;
    unsigned int _field2;
};

struct _MRHIDButtonEvent {
    unsigned int _field1;
    unsigned int _field2;
    _Bool _field3;
};

struct _MRHIDTouchEvent {
    union _MRHIDPoint _field1;
    unsigned int _field2;
    unsigned long long _field3;
    unsigned int _field4;
};

struct _MRTextInputTraits {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    struct {
        long long _field1;
        long long _field2;
    } _field6;
    _Bool _field7;
    _Bool _field8;
    long long _field9[10];
    unsigned long long _field10;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    unsigned long long _field2;
} CDStruct_d008d4b8;

// Ambiguous groups
typedef struct {
    unsigned int responseCode:1;
    unsigned int sessionIdentifier:1;
} CDStruct_377099b8;

typedef struct {
    unsigned int sessionIdentifier:1;
    unsigned int volume:1;
} CDStruct_77dc7163;

typedef struct {
    unsigned int sessionIdentifier:1;
} CDStruct_07a29e00;

#pragma mark Named Unions

union _MRHIDPoint {
    struct {
        float _field1;
        float _field2;
    } _field1;
    float _field2[2];
};

