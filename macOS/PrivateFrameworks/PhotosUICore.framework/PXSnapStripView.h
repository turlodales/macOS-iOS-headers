//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXView.h"

@class NSArray, PXSnapStripViewInternal;

@interface PXSnapStripView : UXView
{
    PXSnapStripViewInternal *_stripView;
    NSArray *_indicatorInfos;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *indicatorInfos; // @synthesize indicatorInfos=_indicatorInfos;
- (void)_updateStripView:(BOOL)arg1;
- (void)setIndicatorInfos:(id)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

