//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface CWFRangingResult : NSObject <NSCopying, NSSecureCoding>
{
    int _status;
    NSString *_MACAddress;
    double _distance;
    double _standardDeviation;
    unsigned long long _numberOfValidMeasurements;
    NSArray *_measurements;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *measurements; // @synthesize measurements=_measurements;
@property(nonatomic) unsigned long long numberOfValidMeasurements; // @synthesize numberOfValidMeasurements=_numberOfValidMeasurements;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) double standardDeviation; // @synthesize standardDeviation=_standardDeviation;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *MACAddress; // @synthesize MACAddress=_MACAddress;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRangingResult:(id)arg1;
- (id)description;

@end

