//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSError, WBSDictionaryInt64, WBSHistoryServiceEvent;

@protocol WBSHistoryServiceDatabaseDelegate <NSObject>
- (void)handleEvent:(WBSHistoryServiceEvent *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)reportSevereError:(NSError *)arg1 completionHandler:(void (^)(void))arg2;
- (void)reportPermanentIDsForVisits:(WBSDictionaryInt64 *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)reportPermanentIDsForItems:(WBSDictionaryInt64 *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

