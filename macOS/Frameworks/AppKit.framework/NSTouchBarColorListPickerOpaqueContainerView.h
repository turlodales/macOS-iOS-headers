//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSTouchBarColorListPickerContainerView.h"

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface NSTouchBarColorListPickerOpaqueContainerView : NSView <NSTouchBarColorListPickerContainerView>
{
    CALayer *_underContentCoverView;
    NSView *_contentView;
    BOOL _active;
}

@property BOOL active; // @synthesize active=_active;
- (BOOL)wantsLayer;
- (struct CGAffineTransform)_alternateContentAffineTransform;
- (struct CGAffineTransform)_contentAffineTransform;
@property(retain) NSView *contentView; // @synthesize contentView=_contentView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)_shouldDoLayerPerformanceUpdates;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

