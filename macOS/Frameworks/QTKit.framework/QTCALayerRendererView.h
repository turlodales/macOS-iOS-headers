//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "QTImageConsumerVendor.h"

@class CALayer;

__attribute__((visibility("hidden")))
@interface QTCALayerRendererView : NSView <QTImageConsumerVendor>
{
    CALayer *_backingLayer;
}

- (id)imageConsumer;
- (void)setLayer:(id)arg1;
- (id)makeBackingLayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

