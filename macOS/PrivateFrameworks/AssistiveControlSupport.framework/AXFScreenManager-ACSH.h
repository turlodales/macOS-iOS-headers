//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AXFScreenManager.h"

@interface AXFScreenManager (ACSH)
- (double)maximumScaleFactorAcrossAllScreens;
- (struct CGPoint)acsh_pointOnScreen:(id)arg1 closestToPoint:(struct CGPoint)arg2;
- (struct CGPoint)validScreenPointForNewMouseLocation:(struct CGPoint)arg1 previousMouseLocation:(struct CGPoint)arg2;
- (struct CGRect)snapRect:(struct CGRect)arg1 withPadding:(double)arg2 toGridWithSpacing:(double)arg3;
- (struct CGRect)onScreenRectForRect:(struct CGRect)arg1 minimumOnScreenPixelAmount:(double)arg2;
@end

