//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CEMAssetReference : NSObject
{
    int _assettype;
    NSString *_identifier;
}

+ (id)referenceForIdentifier:(id)arg1 assetschematype:(id)arg2;
+ (id)referenceForIdentifier:(id)arg1 assettype:(int)arg2;
- (void).cxx_destruct;
@property(readonly) int assettype; // @synthesize assettype=_assettype;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 assettype:(int)arg2;

@end

