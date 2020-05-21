//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHAAssetResourceDataLoading.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString, PHPhotoLibrary;

@interface PHAAssetResourceDataLoader : NSObject <PHAAssetResourceDataLoading>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_activeDownloads;
    PHPhotoLibrary *_photoLibrary;
    id <PHADownloadRequestManagement> _downloadRequestManager;
}

+ (id)dataLoaderWithDefaultConfigurationForPhotoLibrary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <PHADownloadRequestManagement> downloadRequestManager; // @synthesize downloadRequestManager=_downloadRequestManager;
- (void)_inq_cancelAllDownloads;
- (void)_inq_downloadAssetResource:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelAllDownloads;
- (void)requestDataForAssetResource:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)assetResourceFromAcceptableAssetResources:(id)arg1 options:(id)arg2;
- (id)_firstLocallyAvailableAssetResourceFromAssetResources:(id)arg1;
- (id)_localFileURLForAssetResource:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

