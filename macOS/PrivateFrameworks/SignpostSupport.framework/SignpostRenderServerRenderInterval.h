//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SignpostSupport/SignpostAnimationSubInterval.h>

@class NSString;

@interface SignpostRenderServerRenderInterval : SignpostAnimationSubInterval
{
    BOOL _hasOffScreenPassCount;
    unsigned int _frameSeed;
    unsigned int _displayID;
    unsigned int _offScreenPassCount;
    int _renderServerPID;
    unsigned long long _displayRefreshIntervalMachContinuousTime;
    NSString *_renderSkipReason;
    unsigned long long _renderServerTID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long renderServerTID; // @synthesize renderServerTID=_renderServerTID;
@property(readonly, nonatomic) int renderServerPID; // @synthesize renderServerPID=_renderServerPID;
@property(readonly, nonatomic) NSString *renderSkipReason; // @synthesize renderSkipReason=_renderSkipReason;
@property(readonly, nonatomic) unsigned int offScreenPassCount; // @synthesize offScreenPassCount=_offScreenPassCount;
@property(readonly, nonatomic) BOOL hasOffScreenPassCount; // @synthesize hasOffScreenPassCount=_hasOffScreenPassCount;
@property(readonly, nonatomic) unsigned int displayID; // @synthesize displayID=_displayID;
@property(readonly, nonatomic) unsigned long long displayRefreshIntervalMachContinuousTime; // @synthesize displayRefreshIntervalMachContinuousTime=_displayRefreshIntervalMachContinuousTime;
@property(readonly, nonatomic) unsigned int frameSeed; // @synthesize frameSeed=_frameSeed;
@property(readonly, nonatomic) BOOL didSkipRender;
- (id)initWithRenderServerRenderInterval:(id)arg1;

@end

