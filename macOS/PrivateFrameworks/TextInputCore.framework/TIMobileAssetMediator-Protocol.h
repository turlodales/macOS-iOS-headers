//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSArray, TIAsset;

@protocol TIMobileAssetMediator <NSObject>
- (void)downloadUninstalledAssetsMatching:(NSArray *)arg1 continuation:(void (^)(void))arg2;
- (BOOL)tryToPurgeAsset:(TIAsset *)arg1;
- (NSArray *)fetchLatestInstalledAssetsMatchingAny:(NSArray *)arg1;
- (NSArray *)fetchLatestAssetsMatchingAny:(NSArray *)arg1;
- (NSArray *)fetchInstalledAssetInformation;
@end

