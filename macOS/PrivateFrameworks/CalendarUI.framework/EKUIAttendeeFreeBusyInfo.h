//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKUILocationTableCellView, EKUITokenAttachmentCell;

@interface EKUIAttendeeFreeBusyInfo : NSObject
{
    int _freeBusyType;
    EKUITokenAttachmentCell *_cell;
    EKUILocationTableCellView *_locationView;
}

- (void).cxx_destruct;
@property(retain) EKUILocationTableCellView *locationView; // @synthesize locationView=_locationView;
@property int freeBusyType; // @synthesize freeBusyType=_freeBusyType;
@property(retain) EKUITokenAttachmentCell *cell; // @synthesize cell=_cell;
- (id)init;

@end

