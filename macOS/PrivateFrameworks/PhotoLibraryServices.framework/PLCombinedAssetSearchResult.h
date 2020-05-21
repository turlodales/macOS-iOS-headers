//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLAssetSearchResult.h>

@class NSArray, NSMutableArray;

@interface PLCombinedAssetSearchResult : PLAssetSearchResult
{
    unsigned long long _assetCount;
    NSArray *_assetUUIDs;
    BOOL _resultsCanOverlap;
    NSMutableArray *_assetSearchResults;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL resultsCanOverlap; // @synthesize resultsCanOverlap=_resultsCanOverlap;
@property(retain, nonatomic) NSMutableArray *assetSearchResults; // @synthesize assetSearchResults=_assetSearchResults;
@property(readonly, nonatomic) NSArray *groupResults;
- (id)assetUUIDs;
- (unsigned long long)assetCount;
- (id)groupDescription;
- (unsigned long long)categoryMask;
- (void)addAssetSearchResult:(id)arg1 isMainSearchResult:(BOOL)arg2;
- (id)initWithAssetSearchResult:(id)arg1;
- (id)initWithAssetSearchResults:(id)arg1 canOverlap:(BOOL)arg2;

@end

