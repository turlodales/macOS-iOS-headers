//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/MFPGradientBrush.h>

@class NSArray, OITSUBezierPath, OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPPathGradientBrush : MFPGradientBrush
{
    OITSUColor *mCenterColor;
    struct CGPoint mCenterPoint;
    NSArray *mSurroundColors;
    OITSUBezierPath *mPath;
}

- (void).cxx_destruct;
- (id)endColor;
- (id)startColor;
- (void)createShading;
- (void)setPath:(id)arg1;
- (void)setSurroundColors:(id)arg1;
- (void)setCenterPoint:(struct CGPoint)arg1;
- (void)setCenterColor:(id)arg1;

@end

