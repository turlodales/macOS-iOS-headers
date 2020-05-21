//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Memories/FMSongAsset.h>

@class FlexCloudManager;

@interface FlexCloudSongAsset : FMSongAsset
{
    FlexCloudManager *_cloudManager;
}

- (void).cxx_destruct;
@property(readonly) FlexCloudManager *cloudManager; // @synthesize cloudManager=_cloudManager;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1;
- (long long)contentVersionForAssetLocation:(unsigned long long)arg1;
- (BOOL)contentUpdateAvaliable;
- (unsigned long long)assetStatus;
- (void)purgeLocalCache;
- (void)cancelDownload;
- (void)requestDownloadWithOptions:(id)arg1;
- (void)requestDownload;
- (BOOL)isCloudBacked;
- (id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 cloudManager:(id)arg4 contentVersion:(long long)arg5 compatibilityVersion:(long long)arg6;

@end

