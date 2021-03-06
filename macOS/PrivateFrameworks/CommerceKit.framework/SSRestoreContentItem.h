//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface SSRestoreContentItem : NSObject
{
    NSNumber *_accountID;
    NSString *_appleID;
    NSString *_bundleID;
    NSNumber *_cloudMatchStatus;
    BOOL _isRestore;
    NSMutableDictionary *_properties;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)_restoreKeyForDownloadProperty:(id)arg1;
- (id)_restoreKeyForAssetProperty:(id)arg1;
@property(copy, nonatomic) NSString *installPath;
@property(copy, nonatomic) NSString *videoDimensions;
@property(copy, nonatomic) NSString *storeSoftwareVersionID;
@property(retain, nonatomic) NSNumber *storeItemID;
@property(copy, nonatomic) NSString *storeFrontID;
@property(copy, nonatomic) NSString *storeFlavor;
@property(retain, nonatomic) NSNumber *storeAccountID;
@property(copy, nonatomic) NSString *storeAccountAppleID;
- (void)setValue:(id)arg1 forDownloadProperty:(id)arg2;
- (void)setValue:(id)arg1 forAssetProperty:(id)arg2;
@property(copy, nonatomic) NSString *podcastEpisodeGUID;
@property(nonatomic, getter=isDRMFree) BOOL DRMFree;
@property(copy, nonatomic) NSString *downloadKind;
@property(retain, nonatomic) NSNumber *cloudMatchStatus;
@property(retain, nonatomic) NSNumber *cloudItemID;
- (BOOL)isEligibleForRestore:(id *)arg1;
- (id)copyRestoreDictionary;
- (id)initWithRestoreDownload:(id)arg1;
- (id)init;
- (id)_initSSRestoreContentItem;

@end

