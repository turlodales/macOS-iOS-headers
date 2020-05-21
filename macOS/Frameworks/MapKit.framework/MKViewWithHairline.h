//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSBox, NSColor;

@interface MKViewWithHairline : NSView
{
    NSBox *_bottomHairline;
    NSBox *_topHairline;
    NSColor *_hairlineColor;
    double _leftHairlineInset;
    double _rightHairlineInset;
}

- (void).cxx_destruct;
@property(nonatomic) double rightHairlineInset; // @synthesize rightHairlineInset=_rightHairlineInset;
@property(nonatomic) double leftHairlineInset; // @synthesize leftHairlineInset=_leftHairlineInset;
@property(retain, nonatomic) NSColor *hairlineColor; // @synthesize hairlineColor=_hairlineColor;
- (void)layout;
@property(nonatomic, getter=isBottomHairlineHidden) BOOL bottomHairlineHidden;
@property(nonatomic, getter=isTopHairlineHidden) BOOL topHairlineHidden;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

