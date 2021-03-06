//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@interface AKBoxLayer : CAShapeLayer
{
    double _borderWidthScale;
    double _boxCornerRadius;
    double _nominalBorderWidth;
}

@property double nominalBorderWidth; // @synthesize nominalBorderWidth=_nominalBorderWidth;
@property double boxCornerRadius; // @synthesize boxCornerRadius=_boxCornerRadius;
- (void)_updateBoxPath;
@property(nonatomic) double borderWidthScale;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithBorderWidth:(double)arg1 cornerRadius:(double)arg2;

@end

