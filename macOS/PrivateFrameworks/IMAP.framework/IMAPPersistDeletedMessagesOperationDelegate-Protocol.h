//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/NSObject-Protocol.h>

@class IMAPPersistDeletedMessagesOperation, NSIndexSet;

@protocol IMAPPersistDeletedMessagesOperationDelegate <NSObject>
- (void)persistDeletedMessagesOperation:(IMAPPersistDeletedMessagesOperation *)arg1 deletedUIDs:(NSIndexSet *)arg2;
@end

