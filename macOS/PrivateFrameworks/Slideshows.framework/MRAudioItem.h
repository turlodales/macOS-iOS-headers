//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem;

@interface MRAudioItem : NSObject
{
    float _volume;
    float _duckLevel;
    AVPlayerItem *_avPlayerItem;
    double _startTime;
    double _duration;
    double _localTimeOffset;
    double _fadeInDuration;
    double _fadeOutDuration;
    double _duckInDuration;
    double _duckOutDuration;
}

@property double duckOutDuration; // @synthesize duckOutDuration=_duckOutDuration;
@property double duckInDuration; // @synthesize duckInDuration=_duckInDuration;
@property float duckLevel; // @synthesize duckLevel=_duckLevel;
@property double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
@property double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
@property float volume; // @synthesize volume=_volume;
@property double localTimeOffset; // @synthesize localTimeOffset=_localTimeOffset;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly) double startTime; // @synthesize startTime=_startTime;
@property(readonly) AVPlayerItem *avPlayerItem; // @synthesize avPlayerItem=_avPlayerItem;
- (void)syncVolumeToSong:(id)arg1;
- (void)gotoTime:(double)arg1;
- (float)volumeAtTime:(double)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 startTime:(double)arg2 andDuration:(double)arg3;

@end

