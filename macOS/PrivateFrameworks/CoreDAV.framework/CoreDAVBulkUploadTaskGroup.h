//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import "CoreDAVTaskDelegate.h"

@class NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface CoreDAVBulkUploadTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>
{
    NSURL *_folderURL;
    NSString *_lastKnownCTag;
    BOOL _validCTag;
    unsigned long long _multiPutBatchMaxNumResources;
    unsigned long long _multiPutBatchMaxSize;
    NSMutableDictionary *_remainingUUIDsToAddActions;
    NSMutableDictionary *_remainingHREFsToModDeleteActions;
    NSMutableDictionary *_uuidToHREF;
    NSMutableDictionary *_hrefToETag;
    NSMutableDictionary *_uuidToErrorItems;
    NSMutableDictionary *_hrefToErrorItems;
    NSMutableDictionary *_uuidToStatus;
    NSMutableDictionary *_hrefToStatus;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *hrefToStatus; // @synthesize hrefToStatus=_hrefToStatus;
@property(readonly, nonatomic) NSDictionary *uuidToStatus; // @synthesize uuidToStatus=_uuidToStatus;
@property(readonly, nonatomic) NSDictionary *hrefToErrorItems; // @synthesize hrefToErrorItems=_hrefToErrorItems;
@property(readonly, nonatomic) NSDictionary *uuidToErrorItems; // @synthesize uuidToErrorItems=_uuidToErrorItems;
@property(readonly, nonatomic) NSDictionary *hrefToETag; // @synthesize hrefToETag=_hrefToETag;
@property(readonly, nonatomic) NSDictionary *uuidToHREF; // @synthesize uuidToHREF=_uuidToHREF;
@property(retain, nonatomic) NSString *nextCTag; // @synthesize nextCTag=_lastKnownCTag;
@property(readonly, nonatomic) BOOL validCTag; // @synthesize validCTag=_validCTag;
@property(readonly, nonatomic) NSURL *folderURL; // @synthesize folderURL=_folderURL;
@property(nonatomic) unsigned long long multiPutBatchMaxSize; // @synthesize multiPutBatchMaxSize=_multiPutBatchMaxSize;
@property(nonatomic) unsigned long long multiPutBatchMaxNumResources; // @synthesize multiPutBatchMaxNumResources=_multiPutBatchMaxNumResources;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)syncAway;
- (void)startTaskGroup;
- (void)_sendNextBatch;
- (Class)multiPutTaskClass;
@property(readonly, copy) NSString *description;
- (id)initWithFolderURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4 context:(id)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

