//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSTouchBarRangeView;

@interface NSTouchBarRangeBackdropView : NSView
{
    id _parentView;
}

+ (id)keyPathsForValuesInvalidatingDisplay;
- (void).cxx_destruct;
- (id)_coreUIDrawOptions;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (struct CGSize)intrinsicContentSize;
- (struct NSEdgeInsets)alignmentRectInsets;
@property __weak NSTouchBarRangeView *parentView;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_commonViewSetup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)_shouldDoLayerPerformanceUpdates;

@end

