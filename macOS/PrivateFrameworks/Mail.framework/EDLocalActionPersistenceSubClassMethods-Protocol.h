//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/NSObject-Protocol.h>

@class NSArray, NSURL;
@protocol ECMessage;

@protocol EDLocalActionPersistenceSubClassMethods <NSObject>
- (void)handledFailedCopyForMessages:(NSArray *)arg1;
- (BOOL)moveSupportedFromMailboxURL:(NSURL *)arg1 toURL:(NSURL *)arg2;
- (long long)mailboxDatabaseIDForURL:(NSURL *)arg1;
- (NSURL *)mailboxURLForDatabaseID:(long long)arg1;
- (id <ECMessage>)messageForDatabaseID:(long long)arg1;
@end

