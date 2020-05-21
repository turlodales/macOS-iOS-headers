//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RMAssetResolver.h"

@class NSObject<OS_dispatch_queue>, NSURLSession, RMConfigurationStatusUpdater;

@interface RMAssetResolver : NSObject <RMAssetResolver>
{
    NSURLSession *_URLSession;
    RMConfigurationStatusUpdater *_statusUpdater;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(readonly, nonatomic) RMConfigurationStatusUpdater *statusUpdater; // @synthesize statusUpdater=_statusUpdater;
@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
- (id)userAgent;
- (id)_createRequestWithURL:(id)arg1 acceptType:(id)arg2;
- (BOOL)_validateAsset:(id)arg1 reference:(id)arg2 didFinishWithResponse:(id)arg3 data:(id)arg4 error:(id *)arg5;
- (id)_dataURLForAsset:(id)arg1 reference:(id)arg2 queryParameters:(id)arg3;
- (id)downloadTaskWithAsset:(id)arg1 queryParameters:(id)arg2 statusUpdater:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)dataTaskWithAsset:(id)arg1 queryParameters:(id)arg2 statusUpdater:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)resolveAssets:(id)arg1 statusUpdater:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithURLSession:(id)arg1;
- (id)initWithURLSessionConfiguration:(id)arg1;
- (id)init;

@end

