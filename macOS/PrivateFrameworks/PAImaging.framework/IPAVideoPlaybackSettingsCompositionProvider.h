//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImaging/DGDescriptionCompositionProvider-Protocol.h>

@class IPAVideoPlaybackSettings, PLEditSource;

@interface IPAVideoPlaybackSettingsCompositionProvider : NSObject <DGDescriptionCompositionProvider>
{
    IPAVideoPlaybackSettings *_playbackSettings;
    long long _orientation;
    PLEditSource *_source;
}

- (void).cxx_destruct;
- (id)source;
- (long long)orientation;
- (id)playbackSettings;
- (id)renderDescription;
- (id)editDescription;
- (id)composition;
- (id)initWithPlaybackSettings:(id)arg1 orientation:(long long)arg2 source:(id)arg3;

@end

