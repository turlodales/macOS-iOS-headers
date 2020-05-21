//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "_NSBoxCustomView.h"

@class NSColor, NSString, NSVisualEffectView, _NSBoxCustomView;

__attribute__((visibility("hidden")))
@interface _NSBoxMaterialCapableCustomView : NSView <_NSBoxCustomView>
{
    NSVisualEffectView *_effectView;
    _NSBoxCustomView *_simpleCustomView;
    NSColor *_fillColor;
    NSColor *_borderColor;
    double _borderWidth;
    double _cornerRadius;
}

- (void)viewDidMoveToWindow;
- (void)_updateSubviews;
@property double cornerRadius;
@property double borderWidth;
@property(copy) NSColor *borderColor;
@property(copy) NSColor *fillColor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

