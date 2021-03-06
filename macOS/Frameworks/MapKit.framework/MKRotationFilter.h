//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VKMapView;
@protocol MKRotationFilterDelegate;

__attribute__((visibility("hidden")))
@interface MKRotationFilter : NSObject
{
    VKMapView *_mapLayer;
    double _gestureStartAngle;
    BOOL _userRotatedAwayFromVerticalYaw;
    double _previousVerticalYawOverride;
    BOOL _snappedToNorth;
    BOOL _snappedAtStart;
    BOOL _snappingEnabled;
    double _additionalSnappingAngle;
    id <MKRotationFilterDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MKRotationFilterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double additionalSnappingAngle; // @synthesize additionalSnappingAngle=_additionalSnappingAngle;
@property(nonatomic, getter=isSnappedToNorth) BOOL snappedToNorth; // @synthesize snappedToNorth=_snappedToNorth;
- (BOOL)hasAdditionalSnappingAngle;
- (void)updateSnappedToNorth;
- (void)snapToNorthAnimated:(BOOL)arg1 forceTrueNorth:(BOOL)arg2;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1 withSnapping:(BOOL)arg2;
- (id)initWithMapLayer:(id)arg1;
- (id)init;

@end

