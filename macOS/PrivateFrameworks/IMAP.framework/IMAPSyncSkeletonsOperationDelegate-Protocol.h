//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/NSObject-Protocol.h>

@class IMAPServerInterface, IMAPSyncSkeletonsOperation, NSArray;

@protocol IMAPSyncSkeletonsOperationDelegate <NSObject>
- (void)syncSkeletonsOperationFinished:(IMAPSyncSkeletonsOperation *)arg1 withFetchResponses:(NSArray *)arg2 serverInterface:(IMAPServerInterface *)arg3;
@end

