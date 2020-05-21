//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DGDescriptionCompositionProvider.h"

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

