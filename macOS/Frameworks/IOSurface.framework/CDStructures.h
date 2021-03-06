//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int offset;
    unsigned int width;
    unsigned int height;
    unsigned int bytesPerRow;
    unsigned int bytesPerElement;
    unsigned int elementWidth;
    unsigned int elementHeight;
} CDStruct_6c6f70a4;

typedef struct {
    unsigned long long clientAddress;
    unsigned int surfaceID;
    unsigned int pixelFormat;
    unsigned int retainCount;
    unsigned int yCbCrMatrix;
    unsigned int cacheMode;
    unsigned int mapCacheAttribute;
    unsigned int purgeableState;
    unsigned int purgeableStateAPI;
    unsigned int allocOffset;
    unsigned int allocSize;
    unsigned char isGlobal;
    unsigned char isAllocated;
    unsigned char isWired;
    unsigned char pad;
    unsigned int morePad;
    unsigned long long detachModeCode;
    unsigned long long initDetachModeCodeTime;
    unsigned long long protectionOptions;
} CDStruct_0bcbbf48;

