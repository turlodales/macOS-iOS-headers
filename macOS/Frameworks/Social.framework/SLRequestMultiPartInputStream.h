//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSInputStream.h"

@class NSData, SLRequestMultiPart;

__attribute__((visibility("hidden")))
@interface SLRequestMultiPartInputStream : NSInputStream
{
    SLRequestMultiPart *_multiPart;
    unsigned long long _streamStatus;
    unsigned long long _bytesReadInState;
    unsigned long long _totalBytesRead;
    NSData *_srcData;
    int _currentState;
}

- (void).cxx_destruct;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)close;
- (void)open;
- (unsigned long long)length;
- (long long)currentStateRead:(char *)arg1 maxLength:(unsigned long long)arg2;
- (unsigned long long)readStateSourceData:(id)arg1 toBuffer:(char *)arg2 offset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4;
- (void)transitionState;
- (id)initWithMultiPart:(id)arg1;

@end

