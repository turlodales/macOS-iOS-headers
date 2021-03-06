//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/EDIndexableAccount-Protocol.h>
#import <IMAP/MCAccount-Protocol.h>

@class NSOperationQueue;

@protocol MCMailAccount <MCAccount, EDIndexableAccount>
@property(readonly, nonatomic) BOOL isGmailAccount;
@property(readonly, nonatomic) NSOperationQueue *remoteFetchQueue;
@property(readonly, nonatomic) NSOperationQueue *remoteTaskQueue;
@end

