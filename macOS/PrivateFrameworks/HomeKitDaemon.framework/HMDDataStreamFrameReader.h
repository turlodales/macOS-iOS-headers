//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_data;

@interface HMDDataStreamFrameReader : NSObject
{
    NSObject<OS_dispatch_data> *_partialFrame;
    BOOL _headerInfoRead;
    BOOL _streamFailed;
    unsigned char _currentframeType;
    unsigned long long _payloadLength;
}

+ (id)logCategory;
- (void).cxx_destruct;
- (id)popRawFrame;
- (void)reset;
- (void)_readFrameHeaderIfPossible;
- (void)pushFrameData:(id)arg1;
- (unsigned long long)bytesNeededForCurrentFrame;
- (BOOL)hasPartialData;
- (BOOL)hasCompleteFrame;
- (BOOL)hasFailed;
- (id)init;

@end

