//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

@class AVMediaSelection, AVURLAsset, NSArray, NSData, NSDictionary, NSString, NSURL;

@interface __NSCFBackgroundAVAssetDownloadTask : __NSCFBackgroundSessionTask
{
    unsigned long long _downloadToken;
    unsigned long long _AVAssetDownloadToken;
    NSURL *_URL;
    NSURL *_destinationURL;
    NSURL *_temporaryDestinationURL;
    NSString *_assetTitle;
    NSData *_assetArtworkData;
    AVURLAsset *_URLAsset;
    NSDictionary *_options;
    NSArray *_loadedTimeRanges;
    AVMediaSelection *_resolvedMediaSelection;
}

@property(copy) AVMediaSelection *resolvedMediaSelection; // @synthesize resolvedMediaSelection=_resolvedMediaSelection;
@property(copy) NSArray *loadedTimeRanges; // @synthesize loadedTimeRanges=_loadedTimeRanges;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(retain) AVURLAsset *URLAsset; // @synthesize URLAsset=_URLAsset;
@property(copy) NSData *assetArtworkData; // @synthesize assetArtworkData=_assetArtworkData;
@property(copy) NSString *assetTitle; // @synthesize assetTitle=_assetTitle;
@property(copy) NSURL *temporaryDestinationURL; // @synthesize temporaryDestinationURL=_temporaryDestinationURL;
@property(copy) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(copy) NSURL *URL; // @synthesize URL=_URL;
@property unsigned long long AVAssetDownloadToken; // @synthesize AVAssetDownloadToken=_AVAssetDownloadToken;
- (BOOL)_isAVAssetTask;
- (id)response;
- (id)currentRequest;
- (id)originalRequest;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_willDownloadToURL:(id)arg1;
- (void)_onqueue_didFinishDownloadingToURL:(id)arg1;
- (void)_onqueue_didResolveMediaSelectionPropertyList:(id)arg1;
- (void)_onqueue_didLoadTimeRange:(id)arg1 totalTimeRangesLoaded:(id)arg2 timeRangeExpectedToLoad:(id)arg3;
- (void)_onqueue_didReceiveProgressUpdateWithTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)dealloc;
- (id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3;
- (id)initWithTaskGroup:(id)arg1 URLAsset:(id)arg2 URL:(id)arg3 destinationURL:(id)arg4 temporaryDestinationURL:(id)arg5 assetTitle:(id)arg6 assetArtworkData:(id)arg7 ident:(unsigned long long)arg8;

@end

