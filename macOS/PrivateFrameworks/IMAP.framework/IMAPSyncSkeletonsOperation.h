//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPNetworkTaskOperation.h>

#import "IMAPFetchResponseHandler.h"

@class NSIndexSet, NSMutableArray, NSString;

@interface IMAPSyncSkeletonsOperation : IMAPNetworkTaskOperation <IMAPFetchResponseHandler>
{
    NSMutableArray *_fetchResponses;
    BOOL _useUIDs;
    BOOL _includeLabels;
    NSIndexSet *_messageNumbers;
    id <IMAPSyncSkeletonsOperationDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IMAPSyncSkeletonsOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL includeLabels; // @synthesize includeLabels=_includeLabels;
@property(readonly, nonatomic) BOOL useUIDs; // @synthesize useUIDs=_useUIDs;
@property(readonly, copy, nonatomic) NSIndexSet *messageNumbers; // @synthesize messageNumbers=_messageNumbers;
- (id)_findFetchResponseWithMessageNumber:(unsigned long long)arg1 inIndexRange:(struct _NSRange)arg2;
- (id)_findFetchResponseWithMessageNumber:(unsigned long long)arg1;
- (BOOL)handleResponse:(id)arg1 forCommand:(id)arg2;
- (void)main;
@property(readonly, copy) NSString *description;
- (id)initWithMailboxName:(id)arg1;
- (id)initWithMessageNumbers:(id)arg1 useUIDsInstead:(BOOL)arg2 includeLabels:(BOOL)arg3 mailboxName:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

