//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class ISCrossfadeItem, ISPlaybackSpec;

@interface ISCrossfadeLayer : CALayer
{
    ISCrossfadeItem *_crossfadeItem;
    ISPlaybackSpec *_playbackSpec;
    CALayer *__contentLayer;
    CALayer *__heroLayer;
}

@property(retain, nonatomic, setter=_setHeroLayer:) CALayer *_heroLayer; // @synthesize _heroLayer=__heroLayer;
@property(readonly, nonatomic) CALayer *_contentLayer; // @synthesize _contentLayer=__contentLayer;
@property(retain, nonatomic) ISPlaybackSpec *playbackSpec; // @synthesize playbackSpec=_playbackSpec;
@property(retain, nonatomic) ISCrossfadeItem *crossfadeItem; // @synthesize crossfadeItem=_crossfadeItem;
- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSublayers;
- (void)_updateFrameLayers;
- (void)_updateContents;
- (void)playFromBeginning;
- (void)pause;
- (id)init;

@end

