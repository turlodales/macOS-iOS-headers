//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreLocation/CLRegion.h>

@interface CLCircularRegion : CLRegion
{
}

+ (BOOL)supportsSecureCoding;
- (BOOL)containsCoordinate:(struct CLLocationCoordinate2D)arg1;
@property(readonly, nonatomic) double radius;
@property(readonly, nonatomic) struct CLLocationCoordinate2D center;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCenter:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3;

@end

