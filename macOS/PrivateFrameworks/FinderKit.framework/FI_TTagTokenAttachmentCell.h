//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTokenAttachmentCell.h>

__attribute__((visibility("hidden")))
@interface FI_TTagTokenAttachmentCell : NSTokenAttachmentCell
{
    _Bool _titleShowsSelectedColorCircle;
    _Bool _dottedOutline;
    long long _labelColor;
    unsigned long long _numberOfItemsLackingThisTag;
}

+ (id)transferFromTokenAttachmentCell:(id)arg1;
- (void)drawTokenWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (id)tokenOutlineColor;
- (id)tokenFillColor;
- (_Bool)mixedState;
- (_Bool)tagExists;
- (void)updateAttributedStringValueForState;
- (void)setTitle:(id)arg1;
- (_Bool)selected;
- (id)init;

@end

