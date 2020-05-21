//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHFrame, KHProjectPhoto;

@interface KHPhotoBinAnimationData : NSObject
{
    int _animationStyle;
    double _sourceTransform;
    double _destinationTransform;
    struct CGPath *_destinationClippingPath;
    KHProjectPhoto *_photo;
    KHFrame *_element;
    double _animationDuration;
    long long _zOrder;
    struct CGSize _animatableSize;
    struct CGRect _sourceRect;
    struct CGRect _sourceClippingRect;
    struct CGRect _destinationRect;
    struct CGRect _destinationClippingRect;
}

- (void).cxx_destruct;
@property(nonatomic) int animationStyle; // @synthesize animationStyle=_animationStyle;
@property(nonatomic) struct CGSize animatableSize; // @synthesize animatableSize=_animatableSize;
@property(nonatomic) long long zOrder; // @synthesize zOrder=_zOrder;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) KHFrame *element; // @synthesize element=_element;
@property(retain, nonatomic) KHProjectPhoto *photo; // @synthesize photo=_photo;
@property(nonatomic) struct CGPath *destinationClippingPath; // @synthesize destinationClippingPath=_destinationClippingPath;
@property(nonatomic) double destinationTransform; // @synthesize destinationTransform=_destinationTransform;
@property(nonatomic) struct CGRect destinationClippingRect; // @synthesize destinationClippingRect=_destinationClippingRect;
@property(readonly, nonatomic) struct CGRect destinationRect; // @synthesize destinationRect=_destinationRect;
@property(nonatomic) double sourceTransform; // @synthesize sourceTransform=_sourceTransform;
@property(nonatomic) struct CGRect sourceClippingRect; // @synthesize sourceClippingRect=_sourceClippingRect;
@property(readonly, nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(readonly, nonatomic) struct CGAffineTransform sourceAffineTransform;
@property(readonly, nonatomic) struct CGAffineTransform destinationAffineTransform;
- (void)_calculateDestinationRect;
- (id)description;

@end

