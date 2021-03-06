//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface SGPlainTextContentCursor : NSObject
{
    NSIndexSet *_quoted;
    struct _NSRange _sig;
    struct __CFString *_str;
    unsigned long long _len;
    struct {
        unsigned short buffer[64];
        struct __CFString *theString;
        unsigned short *directUniCharBuffer;
        char *directCStringBuffer;
        CDStruct_627e0f85 rangeToBuffer;
        long long bufferedRangeStart;
        long long bufferedRangeEnd;
    } _ib;
    unsigned long long _pos;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long pos; // @synthesize pos=_pos;
- (void)seekToEnd;
- (void)seekToStart;
- (BOOL)backwardToString:(id)arg1 consume:(BOOL)arg2;
- (BOOL)forwardToString:(id)arg1 consume:(BOOL)arg2;
- (void)backwardWhile:(CDUnknownBlockType)arg1;
- (void)forwardWhile:(CDUnknownBlockType)arg1;
- (BOOL)backward;
- (BOOL)forward;
- (void)dealloc;
- (id)init;
- (id)initWithEntity:(id)arg1;

@end

