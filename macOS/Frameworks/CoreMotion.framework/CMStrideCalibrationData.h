//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CMStrideCalibrationData : NSObject <NSSecureCoding, NSCopying>
{
    long long _state;
    double _kValue;
    double _begin;
    double _end;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double end; // @synthesize end=_end;
@property(nonatomic) double begin; // @synthesize begin=_begin;
@property(nonatomic) double kValue; // @synthesize kValue=_kValue;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)description;
- (id)initWithBegin:(double)arg1 end:(double)arg2 state:(long long)arg3 kValue:(double)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

