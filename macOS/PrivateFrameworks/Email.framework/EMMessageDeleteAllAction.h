//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMMessageChangeAction.h>

@class NSArray;

@interface EMMessageDeleteAllAction : EMMessageChangeAction
{
    NSArray *_mailboxObjectIDs;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *mailboxObjectIDs; // @synthesize mailboxObjectIDs=_mailboxObjectIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)signpostType;
- (id)initWithMailboxes:(id)arg1 messageListItemsToExclude:(id)arg2;

@end

