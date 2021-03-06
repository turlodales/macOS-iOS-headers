//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMDTLVCreator : HMFObject
{
    struct {
        char *ptr;
        unsigned long long len;
        unsigned long long maxLen;
        char *mallocedPtr;
        unsigned char inlineBuffer[300];
    } _tlv;
    BOOL _addHasFailed;
}

+ (id)creatorWithBufferSize:(unsigned long long)arg1;
+ (id)creator;
- (BOOL)addTLV:(unsigned long long)arg1 uuid:(id)arg2;
- (BOOL)addTLV:(unsigned long long)arg1 length:(unsigned long long)arg2 floatNumber:(id)arg3;
- (BOOL)addTLV:(unsigned long long)arg1 length:(unsigned long long)arg2 number:(id)arg3;
- (BOOL)addTLV:(unsigned long long)arg1 number:(id)arg2;
- (BOOL)addTLV:(unsigned long long)arg1 string:(id)arg2;
- (BOOL)addTLV:(unsigned long long)arg1 data:(id)arg2;
- (id)serialize;
- (void)dealloc;
- (id)initWithBufferSize:(unsigned long long)arg1;

@end

