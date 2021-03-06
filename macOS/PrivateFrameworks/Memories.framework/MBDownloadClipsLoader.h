//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Memories/MBClipsLoader.h>

#import <Memories/PHAssetRepresentationDownloadObserver-Protocol.h>

@class NSMutableDictionary, NSRecursiveLock, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface MBDownloadClipsLoader : MBClipsLoader <PHAssetRepresentationDownloadObserver>
{
    NSSet *_assetURLs;
    NSSet *_insertedAssetURLs;
    NSMutableDictionary *_identifierURLsToClipsMap;
    NSRecursiveLock *_updateLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *updateLock; // @synthesize updateLock=_updateLock;
@property(retain) NSMutableDictionary *identifierURLsToClipsMap; // @synthesize identifierURLsToClipsMap=_identifierURLsToClipsMap;
@property(retain, nonatomic) NSSet *insertedAssetURLs; // @synthesize insertedAssetURLs=_insertedAssetURLs;
@property(retain, nonatomic) NSSet *assetURLs; // @synthesize assetURLs=_assetURLs;
- (void)loadClipsFromURLs:(id)arg1;
- (void)load;
- (id)fetchAssetURLs;
- (void)downloadStateOfAssetRepresentationDidChange:(id)arg1 previousState:(unsigned long long)arg2 currentState:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

