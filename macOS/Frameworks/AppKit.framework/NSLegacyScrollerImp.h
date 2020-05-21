//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSScrollerImp.h>

__attribute__((visibility("hidden")))
@interface NSLegacyScrollerImp : NSScrollerImp
{
}

- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (struct CGRect)_rolloverTrackingRect;
- (void)removeTrackingAreas;
- (void)updateTrackingAreas;
- (void)drawKnobWithAlpha:(double)arg1;
- (void)drawKnobSlotInRect:(struct CGRect)arg1 highlight:(BOOL)arg2 alpha:(double)arg3;
- (struct __CFDictionary *)copyCoreUIOptions;
- (double)knobEndInset;
- (double)trackSideInset;
- (void)setTrackAlpha:(double)arg1;
- (void)setKnobAlpha:(double)arg1;
- (long long)scrollerStyle;
- (void)dealloc;

@end

