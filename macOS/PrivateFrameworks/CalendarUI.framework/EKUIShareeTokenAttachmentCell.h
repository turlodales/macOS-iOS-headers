//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/EKUITokenAttachmentCell.h>

@class EKUIShareesGadget;

@interface EKUIShareeTokenAttachmentCell : EKUITokenAttachmentCell
{
    EKUIShareesGadget *_shareeGadget;
}

- (void).cxx_destruct;
@property(retain) EKUIShareesGadget *shareeGadget; // @synthesize shareeGadget=_shareeGadget;
- (BOOL)shouldShowToken;
- (id)stringForRepresentedObject;
- (id)imageForRepresentedObject;
- (id)statusIconForSharee:(id)arg1 isHighlighted:(BOOL)arg2 isSelected:(BOOL)arg3;
- (id)imageNameForStatus:(unsigned long long)arg1;
- (id)initCellForTokenField:(id)arg1;

@end

