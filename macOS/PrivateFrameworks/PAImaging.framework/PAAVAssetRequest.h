//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSURL, PHAsset;

@interface PAAVAssetRequest : NSObject <NSCopying>
{
    PHAsset *_asset;
    id <PFCanceler> _canceler;
    NSURL *_assetURL;
    NSArray *_keysToLoadAndTest;
    id <PAAVAssetRequestService> _requestService;
}

+ (void)setDefaultRequestService:(id)arg1;
+ (id)defaultRequestService;
- (void).cxx_destruct;
@property(retain) id <PAAVAssetRequestService> requestService; // @synthesize requestService=_requestService;
@property(retain) NSArray *keysToLoadAndTest; // @synthesize keysToLoadAndTest=_keysToLoadAndTest;
@property(retain) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain) id <PFCanceler> canceler; // @synthesize canceler=_canceler;
@property(retain) PHAsset *asset; // @synthesize asset=_asset;
- (id)debugDescription;
- (id)description;
- (id)submitSynchronous;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)init;
- (BOOL)validateIntoArray:(id)arg1;

@end

