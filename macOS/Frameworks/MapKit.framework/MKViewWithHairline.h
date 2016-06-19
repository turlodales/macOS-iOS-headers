//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor;

@interface MKViewWithHairline : NSView
{
    BOOL _topHairlineHidden;
    BOOL _bottomHairlineHidden;
    NSColor *_hairlineColor;
    double _leftHairlineInset;
    double _rightHairlineInset;
}

@property(nonatomic) double rightHairlineInset; // @synthesize rightHairlineInset=_rightHairlineInset;
@property(nonatomic) double leftHairlineInset; // @synthesize leftHairlineInset=_leftHairlineInset;
@property(nonatomic, getter=isBottomHairlineHidden) BOOL bottomHairlineHidden; // @synthesize bottomHairlineHidden=_bottomHairlineHidden;
@property(nonatomic, getter=isTopHairlineHidden) BOOL topHairlineHidden; // @synthesize topHairlineHidden=_topHairlineHidden;
@property(retain, nonatomic) NSColor *hairlineColor; // @synthesize hairlineColor=_hairlineColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

