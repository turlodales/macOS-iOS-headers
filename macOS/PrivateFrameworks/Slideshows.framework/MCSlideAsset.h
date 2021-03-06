//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCAssetVideo, NSString;

@interface MCSlideAsset : NSObject
{
    MCAssetVideo *_asset;
    NSString *_kenBurnsType;
    struct CGPoint center;
    double scale;
    double rotation;
}

@property(copy) NSString *kenBurnsType; // @synthesize kenBurnsType=_kenBurnsType;
@property(retain) MCAssetVideo *asset; // @synthesize asset=_asset;
- (id)description;
- (void)dealloc;
- (id)init;

@end

