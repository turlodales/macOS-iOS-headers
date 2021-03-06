//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class SHKCompletionItem;

__attribute__((visibility("hidden")))
@interface SHKCompletionTextFieldCell : NSTextFieldCell
{
    double _beforeMargin;
    double _afterMargin;
    SHKCompletionItem *_completion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SHKCompletionItem *completion; // @synthesize completion=_completion;
@property double afterMargin; // @synthesize afterMargin=_afterMargin;
@property double beforeMargin; // @synthesize beforeMargin=_beforeMargin;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)_adjustFrameToVerticallyCenterText:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (id)highlightColorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

