//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PKRoundedPath : NSObject
{
    struct CGPath *_CGPath;
    NSMutableArray *_points;
}

+ (id)pathWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
+ (id)pathWithEllipseInRect:(struct CGRect)arg1;
+ (id)pathWithRect:(struct CGRect)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *points; // @synthesize points=_points;
@property(retain) struct CGPath *CGPath; // @synthesize CGPath=_CGPath;
- (void)addContinuousCornerToPath:(struct CGPath *)arg1 trueCorner:(struct CGPoint)arg2 cornerRadius:(struct CGSize)arg3 corners:(unsigned long long)arg4 portion:(unsigned long long)arg5 clockwise:(BOOL)arg6 fullRadius:(BOOL)arg7;
- (id)initWithRect:(struct CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadii:(id)arg3 smoothPillShapes:(BOOL)arg4;
- (struct CGRect)boundingRect;
- (void)closeSubpath;
- (void)addLineToPointX:(double)arg1 y:(double)arg2;
- (void)dealloc;
- (id)initWithPoints:(struct CGPoint *)arg1 count:(long long)arg2;

@end

