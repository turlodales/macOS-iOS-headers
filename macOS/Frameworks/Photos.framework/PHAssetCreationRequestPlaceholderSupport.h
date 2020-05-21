//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHAssetCreationRequest.h>

@class NSXPCConnection, PLClientServerTransaction;

@interface PHAssetCreationRequestPlaceholderSupport : PHAssetCreationRequest
{
    PLClientServerTransaction *_serverTransaction;
    long long _placeholderCreationMode;
    NSXPCConnection *_clientConnection;
}

+ (BOOL)_shouldCopySpatialOverCaptureResourcesMetadataCopyOptions:(id)arg1;
+ (BOOL)_shouldCopyTitleDescriptionAndKeywordsForMetadataCopyOptions:(id)arg1;
+ (BOOL)_shouldBakeInAdjustmentsAndFlattenLivePhoto:(char *)arg1 forSourceAsset:(id)arg2 adjustmentBakeInOptions:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak NSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (id)_fetchOptionsForDuplicateAssetPhotoLibraryType:(id)arg1;
- (void)_updateManagedAssetAfterResourceDownload:(id)arg1;
- (id)_createPlaceholderManagedAssetFromSourceManagedAsset:(id)arg1 inPhotoLibrary:(id)arg2 error:(id *)arg3;
- (void)changeFailedOnDaemonWithLibrary:(id)arg1 error:(id)arg2;
- (void)changeFailedOnClientWithLibrary:(id)arg1 error:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (void)_setDestinationAssetAvailabilityHandler:(CDUnknownBlockType)arg1;
- (id)initForNewObjectWithUUID:(id)arg1;

@end

