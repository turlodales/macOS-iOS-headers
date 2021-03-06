//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKAssetMetadata, NSData, NSDictionary, NSURL, _BKAggregatedAssetData;

@interface _BKAggregatedAssetMetadata : NSObject
{
    NSURL *_url;
    BKAssetMetadata *_opfMetadata;
    BKAssetMetadata *_iTunesMetadata;
    BKAssetMetadata *_preloadedMetadata;
    NSDictionary *_sinfOptions;
    NSData *_coverImageData;
    _BKAggregatedAssetData *_aggregateData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _BKAggregatedAssetData *aggregateData; // @synthesize aggregateData=_aggregateData;
@property(retain, nonatomic) NSData *coverImageData; // @synthesize coverImageData=_coverImageData;
@property(retain, nonatomic) NSDictionary *sinfOptions; // @synthesize sinfOptions=_sinfOptions;
@property(retain, nonatomic) BKAssetMetadata *preloadedMetadata; // @synthesize preloadedMetadata=_preloadedMetadata;
@property(retain, nonatomic) BKAssetMetadata *iTunesMetadata; // @synthesize iTunesMetadata=_iTunesMetadata;
@property(retain, nonatomic) BKAssetMetadata *opfMetadata; // @synthesize opfMetadata=_opfMetadata;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)_populatePackageHashOnMetadata:(id)arg1;
@property(readonly, nonatomic) BKAssetMetadata *combinedMetadata;
- (id)initWithURL:(id)arg1 opfMetadata:(id)arg2 aggregateData:(id)arg3;
- (id)init;

@end

