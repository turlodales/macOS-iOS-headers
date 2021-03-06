//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAsset, PHAssetResource;

__attribute__((visibility("hidden")))
@interface MiroAssetRequest : NSObject
{
    BOOL _isLocal;
    int _requestID;
    PHAsset *_asset;
    PHAssetResource *_resource;
    double _progress;
    double _sizeFactor;
}

- (void).cxx_destruct;
@property(nonatomic) double sizeFactor; // @synthesize sizeFactor=_sizeFactor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) BOOL isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) int requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) PHAssetResource *resource; // @synthesize resource=_resource;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (id)description;

@end

