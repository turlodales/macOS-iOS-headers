//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoKit/NSObject-Protocol.h>

@protocol NUMediaPlayer <NSObject>
@property(nonatomic, getter=isMuted) BOOL muted;
@property(nonatomic) long long playbackMode;
@property(nonatomic) double playbackRate;
@property(readonly, nonatomic) CDStruct_198678f7 currentTime;
@property(readonly, nonatomic) CDStruct_198678f7 mediaDuration;
@property(readonly, nonatomic) long long playbackState;
- (void)removeObserver:(id)arg1;
- (id)addPlaybackTimeObserver:(void (^)(id <NUMediaPlayer>, struct))arg1;
- (id)addPlaybackStateObserver:(void (^)(id <NUMediaPlayer>, long long))arg1;
- (void)stepByCount:(long long)arg1;
- (void)seekToTime:(CDStruct_198678f7)arg1 exact:(BOOL)arg2;
- (void)seekToTime:(CDStruct_198678f7)arg1;
- (void)pause;
- (void)play;
@end

