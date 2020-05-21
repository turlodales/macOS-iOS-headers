//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSColorPicker.h>

#import "NSColorPickingCustom.h"

@class NSView;

__attribute__((visibility("hidden")))
@interface NSColorPickerWheel : NSColorPicker <NSColorPickingCustom>
{
    id wheelView;
    NSView *_containerView;
    id brightnessSlider;
    BOOL previouslyTracking;
}

@property(retain) NSView *containerView; // @synthesize containerView=_containerView;
- (void)brightnessSlider:(id)arg1;
- (BOOL)worksWhenModal;
- (void)setColor:(id)arg1;
- (long long)currentMode;
- (BOOL)supportsMode:(long long)arg1;
- (id)buttonToolTip;
- (double)_insertionOrder;
- (void)viewSizeChanged:(id)arg1;
- (id)provideNewView:(BOOL)arg1;
- (void)dealloc;
- (id)initWithPickerMask:(unsigned long long)arg1 colorPanel:(id)arg2;

@end

