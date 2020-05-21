//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CHHapticPatternPlayer.h"

@protocol CHHapticAdvancedPatternPlayer <CHHapticPatternPlayer>
@property(copy) CDUnknownBlockType completionHandler;
@property BOOL isMuted;
@property float playbackRate;
@property double loopEnd;
@property BOOL loopEnabled;
- (BOOL)seekToOffset:(double)arg1 error:(id *)arg2;
- (BOOL)resumeAtTime:(double)arg1 error:(id *)arg2;
- (BOOL)pauseAtTime:(double)arg1 error:(id *)arg2;
@end

