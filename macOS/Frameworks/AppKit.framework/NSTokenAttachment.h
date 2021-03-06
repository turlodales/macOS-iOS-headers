//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSTextAttachment.h>

@interface NSTokenAttachment : NSTextAttachment
{
    id _delegate;
    BOOL _needsSeparator;
}

- (id)_immediateActionAnimationControllerForRepresentedObject:(id)arg1 inTextView:(id)arg2;
- (id)_immediateActionAnimationControllerForCharacterAtIndex:(unsigned long long)arg1 inTextView:(id)arg2;
@property id delegate;
- (void)_setNeedsSeparator:(BOOL)arg1;
- (BOOL)_needsSeparator;
- (void)setAttachmentCell:(id)arg1;
- (id)attachmentCell;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

