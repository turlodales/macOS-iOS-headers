//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FinderKit/FI_TMarginedTextCell.h>

__attribute__((visibility("hidden")))
@interface FI_TTruncateInRangeTextCell : FI_TMarginedTextCell
{
    struct _NSRange _truncateInRange;
    _Bool _hasCustomFallbackLineBreak;
    unsigned long long _customFallbackLineBreakMode;
}

@property(readonly, nonatomic) _Bool hasCustomFallbackLineBreak; // @synthesize hasCustomFallbackLineBreak=_hasCustomFallbackLineBreak;
@property(nonatomic) struct _NSRange truncateInRange; // @synthesize truncateInRange=_truncateInRange;
- (void)setCustomLineBreakFallbackMode:(unsigned long long)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

