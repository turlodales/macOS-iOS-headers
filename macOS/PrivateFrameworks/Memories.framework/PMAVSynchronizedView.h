//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class AVPlayerItem, AVSynchronizedLayer;

@interface PMAVSynchronizedView : NSView
{
}

+ (Class)layerClass;
@property(retain, nonatomic) AVPlayerItem *playerItem;
- (id)makeBackingLayer;
- (id)init;

// Remaining properties
@property(retain, nonatomic) AVSynchronizedLayer *layer; // @dynamic layer;

@end

