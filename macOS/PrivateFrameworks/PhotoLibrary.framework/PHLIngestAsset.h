//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSURL;

@interface PHLIngestAsset : NSObject
{
    NSURL *_assetURL;
    NSDictionary *_metadataProperties;
}

- (void).cxx_destruct;
@property(readonly) NSDictionary *metadataProperties; // @synthesize metadataProperties=_metadataProperties;
@property(readonly) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (id)initWithAssetURL:(id)arg1 metadataProperties:(id)arg2 bookmarkData:(id)arg3;
- (id)initWithAssetURL:(id)arg1 metadataProperties:(id)arg2;
- (id)initWithAssetURL:(id)arg1;
- (id)init;

@end

