//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSProgressIndicator;

__attribute__((visibility("hidden")))
@interface AVLoadingIndicatorView : NSView
{
    NSProgressIndicator *_progressIndicator;
    BOOL _isAnimatingProgressIndicator;
}

- (void).cxx_destruct;
- (void)setHidden:(BOOL)arg1;
- (id)makeBackingLayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

