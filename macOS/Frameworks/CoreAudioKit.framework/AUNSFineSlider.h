//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSlider.h"

@class NSObject;

__attribute__((visibility("hidden")))
@interface AUNSFineSlider : NSSlider
{
    struct CGPoint mLastMousePoint;
    NSObject *mOwningParameterStrip;
}

- (long long)isVertical;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (id)initWithFrame:(struct CGRect)arg1 owningParameterStrip:(id)arg2;
- (void)privInvokeAction;
- (float)privValForEvent:(id)arg1;

@end

