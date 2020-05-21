//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXView.h"

@class NSButton, NSTrackingArea, NSVisualEffectView;

@interface KHHoverPageAccessoryView : UXView
{
    UXView *_contentView;
    NSVisualEffectView *_visualEffectView;
    NSTrackingArea *_trackingArea;
    BOOL _forceAlwaysShowing;
    NSButton *_pageArrowButton;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL forceAlwaysShowing; // @synthesize forceAlwaysShowing=_forceAlwaysShowing;
@property(retain, nonatomic) NSButton *pageArrowButton; // @synthesize pageArrowButton=_pageArrowButton;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)_hideContentViewIfNecessary;
- (id)initWithFrame:(struct CGRect)arg1;

@end

