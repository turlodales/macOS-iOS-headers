//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteManagement/RMUnresolvedAsset-Protocol.h>

@class NSDictionary, NSString, NSURL, RMAsset;

@interface RMUnresolvedFileAsset : NSObject <RMUnresolvedAsset>
{
    RMAsset *_asset;
    NSDictionary *_queryParameters;
    NSURL *_downloadToFileURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *downloadToFileURL; // @synthesize downloadToFileURL=_downloadToFileURL;
@property(copy, nonatomic) NSDictionary *queryParameters; // @synthesize queryParameters=_queryParameters;
@property(retain, nonatomic) RMAsset *asset; // @synthesize asset=_asset;
- (void)resolveWithAssetResolver:(id)arg1 statusUpdater:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithAsset:(id)arg1 queryParameters:(id)arg2 downloadToFileURL:(id)arg3;

@end

