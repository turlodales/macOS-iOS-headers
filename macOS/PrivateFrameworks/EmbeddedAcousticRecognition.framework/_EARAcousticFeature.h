//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/NSCopying-Protocol.h>

@class NSArray;

@interface _EARAcousticFeature : NSObject <NSCopying>
{
    NSArray *_acousticFeatureValuePerFrame;
    double _frameDuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double frameDuration; // @synthesize frameDuration=_frameDuration;
@property(readonly, copy, nonatomic) NSArray *acousticFeatureValuePerFrame; // @synthesize acousticFeatureValuePerFrame=_acousticFeatureValuePerFrame;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithAcousticFeatureValues:(id)arg1 frameDuration:(float)arg2;

@end

