//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaToolbox/FigBaseCALayer.h>

@class FigVideoLayerInternal;

@interface FigVideoLayer : FigBaseCALayer
{
    FigVideoLayerInternal *_videoLayer;
}

+ (id)defaultActionForKey:(id)arg1;
- (void)_didChangeRenderingStatus:(id)arg1;
- (void)_sendVideoLayerDisplayChangedNotification;
- (void)_sendVideoLayerIsBeingServicedNotification;
- (void)notificationBarrier;
- (unsigned int)layerDisplayID;
- (BOOL)isVideoLayerBeingServiced;
- (void)layerDidChangeDisplay:(unsigned int)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (id)actionForKey:(id)arg1;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (id)init;

@end

