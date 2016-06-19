//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSBezierPath.h"

@interface NSBezierPath (UIBezierPathCompatibility)
+ (id)bezierPathWithRoundedRect:(struct CGRect)arg1 byRoundingCorners:(int)arg2 cornerRadii:(struct CGSize)arg3;
- (void)applyTransform:(struct CGAffineTransform)arg1;
- (void)addArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5;
- (void)addQuadCurveToPoint:(struct CGPoint)arg1 controlPoint:(struct CGPoint)arg2;
- (void)addLineToPoint:(struct CGPoint)arg1;
- (void)addCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)appendPath:(id)arg1;
@end

