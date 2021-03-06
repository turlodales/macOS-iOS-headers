//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class CKRecordZone, CKRecordZoneID, NSString;

__attribute__((visibility("hidden")))
@interface BRCCreateZoneAndSubscribeOperation : _BRCOperation <BRCOperationSubclass>
{
    CKRecordZoneID *_zoneID;
    BOOL _optimisticSubscribe;
    BOOL _subscriptionOnly;
    CDUnknownBlockType _createZoneAndSubscribeCompletionBlock;
    CKRecordZone *_createdZone;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CKRecordZone *createdZone; // @synthesize createdZone=_createdZone;
@property(copy, nonatomic) CDUnknownBlockType createZoneAndSubscribeCompletionBlock; // @synthesize createZoneAndSubscribeCompletionBlock=_createZoneAndSubscribeCompletionBlock;
@property(nonatomic) BOOL subscriptionOnly; // @synthesize subscriptionOnly=_subscriptionOnly;
@property(nonatomic) BOOL optimisticSubscribe; // @synthesize optimisticSubscribe=_optimisticSubscribe;
- (void)_registerSubscriptionForZoneID:(id)arg1 isOptimisticSubscribe:(BOOL)arg2;
- (void)_createZoneWithZoneID:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithServerZone:(id)arg1;
- (id)initWithSession:(id)arg1 zoneID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

