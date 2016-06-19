//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface CIVector : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _count;
    union {
        double vec[4];
        double *ptr;
    } _u;
}

+ (BOOL)supportsSecureCoding;
+ (id)vectorWithString:(id)arg1;
+ (id)vectorWithCGAffineTransform:(struct CGAffineTransform)arg1;
+ (id)vectorWithCGRect:(struct CGRect)arg1;
+ (id)vectorWithCGPoint:(struct CGPoint)arg1;
+ (id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4;
+ (id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
+ (id)vectorWithX:(double)arg1 Y:(double)arg2;
+ (id)vectorWithX:(double)arg1;
+ (id)vectorWithValues:(const double *)arg1 count:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly) NSString *stringRepresentation;
@property(readonly) struct CGAffineTransform CGAffineTransformValue;
@property(readonly) struct CGRect CGRectValue;
@property(readonly) struct CGPoint CGPointValue;
@property(readonly) double W;
@property(readonly) double Z;
@property(readonly) double Y;
@property(readonly) double X;
- (double)valueAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long count;
- (void)finalize;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)initWithValues:(const double *)arg1 count:(unsigned long long)arg2;
- (id)initWithCGAffineTransform:(struct CGAffineTransform)arg1;
- (id)initWithCGRect:(struct CGRect)arg1;
- (id)initWithCGPoint:(struct CGPoint)arg1;
- (id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4;
- (id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
- (id)initWithX:(double)arg1 Y:(double)arg2;
- (id)initWithX:(double)arg1;
- (id)init;
@property(readonly) double *_values;

@end

