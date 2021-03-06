//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SignpostSupport/SignpostAnimationSubInterval.h>

#import <SignpostSupport/SignpostCARenderServerFrameMetadata-Protocol.h>

@class NSSet;

@interface SignpostFrameLatencyInterval : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata>
{
    unsigned int _frameSeed;
    unsigned int _swapId;
    unsigned long long _totalFrameCount;
    unsigned long long _lateFrameCount;
    NSSet *_contributingPids;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *contributingPids; // @synthesize contributingPids=_contributingPids;
@property(readonly, nonatomic) unsigned long long lateFrameCount; // @synthesize lateFrameCount=_lateFrameCount;
@property(readonly, nonatomic) unsigned long long totalFrameCount; // @synthesize totalFrameCount=_totalFrameCount;
@property(readonly, nonatomic) unsigned int swapId; // @synthesize swapId=_swapId;
@property(readonly, nonatomic) unsigned int frameSeed; // @synthesize frameSeed=_frameSeed;
- (id)initWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2 timebaseRatio:(double)arg3 swapID:(unsigned int)arg4 frameSeed:(unsigned int)arg5 totalFrameCount:(unsigned long long)arg6 lateFrameCount:(unsigned long long)arg7;
- (id)initWithFrameLatencyInterval:(id)arg1 isLong:(BOOL)arg2;

@end

