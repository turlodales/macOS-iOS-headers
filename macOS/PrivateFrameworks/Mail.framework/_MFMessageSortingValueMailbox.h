//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFMessageSortingValue.h>

@class MFMailbox;

@interface _MFMessageSortingValueMailbox : MFMessageSortingValue
{
    MFMailbox *_mailbox;
}

@property(retain, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;
- (id)description;
- (void)dealloc;

@end

