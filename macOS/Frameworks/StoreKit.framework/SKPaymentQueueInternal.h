//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString, SKPaymentQueueClient, SKXPCConnection;

__attribute__((visibility("hidden")))
@interface SKPaymentQueueInternal : NSObject
{
    BOOL _checkedIn;
    BOOL _isRefreshing;
    BOOL _restoreFinishedDuringRefresh;
    BOOL _restoringCompletedTransactions;
    NSString *_identifier;
    SKPaymentQueueClient *_client;
    NSMutableDictionary *_downloads;
    NSMutableArray *_localTransactions;
    NSMutableArray *_transactions;
    NSMutableArray *_weakObservers;
    SKXPCConnection *_requestConnection;
    SKXPCConnection *_responseConnection;
    id <SKPaymentQueueDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

