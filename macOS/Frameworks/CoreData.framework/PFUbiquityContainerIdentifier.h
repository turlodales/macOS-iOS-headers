//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFilePresenter.h"

@class NSOperationQueue, NSString, NSURL, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityContainerIdentifier : NSObject <NSFilePresenter>
{
    NSString *_storeName;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_uuidString;
    PFUbiquityLocation *_uuidFileLocation;
    NSURL *_presentedItemURL;
    BOOL _usedExistingUUIDFile;
}

@property(readonly, copy) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
@property(readonly, nonatomic) BOOL usedExistingUUIDFile; // @synthesize usedExistingUUIDFile=_usedExistingUUIDFile;
@property(readonly, nonatomic) PFUbiquityLocation *uuidFileLocation; // @synthesize uuidFileLocation=_uuidFileLocation;
@property(readonly, nonatomic) NSString *uuidString; // @synthesize uuidString=_uuidString;
@property(readonly) NSOperationQueue *presentedItemOperationQueue;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)replaceIdentifierWithUUID:(id)arg1 error:(id *)arg2;
- (BOOL)identifyContainer:(id *)arg1;
- (BOOL)writeToDisk:(id *)arg1;
- (void)setUUIDStringFromLocation:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

