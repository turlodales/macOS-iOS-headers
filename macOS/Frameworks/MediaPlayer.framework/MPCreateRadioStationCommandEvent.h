//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSNumber, NSURL;

@interface MPCreateRadioStationCommandEvent : MPRemoteCommandEvent
{
    BOOL _requestingPlaybackInitialization;
    NSURL *_stationURL;
    NSNumber *_privateListeningOverride;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *privateListeningOverride; // @synthesize privateListeningOverride=_privateListeningOverride;
@property(readonly, nonatomic, getter=isRequestingPlaybackInitialization) BOOL requestingPlaybackInitialization; // @synthesize requestingPlaybackInitialization=_requestingPlaybackInitialization;
@property(readonly, nonatomic) NSURL *stationURL; // @synthesize stationURL=_stationURL;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end

