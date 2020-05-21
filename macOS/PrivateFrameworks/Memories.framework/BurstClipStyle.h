//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BurstClip;

__attribute__((visibility("hidden")))
@interface BurstClipStyle : NSObject
{
    BurstClip *_burstClip;
}

- (void).cxx_destruct;
@property(nonatomic) __weak BurstClip *burstClip; // @synthesize burstClip=_burstClip;
@property(readonly, nonatomic) double idealVideoDuration;
@property(readonly, nonatomic) double minimumVideoDuration;
@property(readonly, nonatomic) double maximumPhotoDuration;
@property(readonly, nonatomic) double idealPhotoDuration;
@property(readonly, nonatomic) double minimumPhotoDuration;
- (int)projectFrameRate;
- (double)projectAspectRatio;
- (int)duration;
- (id)sourceClips;
- (void)turnOffKenBurnsForClips:(id)arg1;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (id)containedClipsWithoutTransitions;
- (void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3;
- (double)maximumDuration;
- (double)idealDuration;
- (double)minimumDuration;
- (BOOL)isSupported;

@end

