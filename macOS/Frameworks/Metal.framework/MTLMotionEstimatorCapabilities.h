//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@interface MTLMotionEstimatorCapabilities : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, nonatomic) unsigned long long macroBlockHeight; // @dynamic macroBlockHeight;
@property(readonly, nonatomic) unsigned long long macroBlockWidth; // @dynamic macroBlockWidth;
@property(readonly, nonatomic) unsigned long long maxTextureHeight; // @dynamic maxTextureHeight;
@property(readonly, nonatomic) unsigned long long maxTextureWidth; // @dynamic maxTextureWidth;
@property(readonly, nonatomic) unsigned long long minTextureHeight; // @dynamic minTextureHeight;
@property(readonly, nonatomic) unsigned long long minTextureWidth; // @dynamic minTextureWidth;
@property(readonly, nonatomic) unsigned long long precisionDenominator; // @dynamic precisionDenominator;
@property(readonly, nonatomic) unsigned long long precisionNumerator; // @dynamic precisionNumerator;
@property(readonly, nonatomic) unsigned long long regionHeight; // @dynamic regionHeight;
@property(readonly, nonatomic) unsigned long long regionWidth; // @dynamic regionWidth;

@end

