//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSBezierPath.h>

@interface NSBezierPath (AKPlatformGeometryExtensions)
+ (struct CGPath *)newCGPathWithBezierPath:(id)arg1;
+ (id)bezierPathWithCGPath:(struct CGPath *)arg1;
- (void)akAppendPath:(id)arg1;
- (struct CGPath *)newCGPathForPlatformBezierPath;
- (void)applyTransform:(struct CGAffineTransform)arg1;
@end

