//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextAttachmentCell.h"

@interface MKPaddedTextAttachmentCell : NSTextAttachmentCell
{
    double _leadingPadding;
    double _trailingPadding;
}

- (struct CGSize)cellSize;
- (double)verticalOffset;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (void)setLeadingPadding:(double)arg1 trailingPadding:(double)arg2;

@end

