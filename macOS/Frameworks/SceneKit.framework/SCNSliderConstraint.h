//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNConstraint.h>

@interface SCNSliderConstraint : SCNConstraint
{
    unsigned long long _categoryBitMask;
    struct SCNVector3 _offset;
    float _radius;
}

+ (BOOL)supportsSecureCoding;
+ (id)sliderConstraint;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) struct SCNVector3 offset;
@property(nonatomic) double radius;
@property(nonatomic) unsigned long long collisionCategoryBitMask;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

