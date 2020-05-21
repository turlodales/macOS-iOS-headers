//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSError, NSString;

@interface CURangingMeasurement : NSObject <NSSecureCoding>
{
    unsigned int _flags;
    double _distanceMeters;
    double _distanceError;
    NSError *_error;
    double _horizontalAngle;
    double _horizontalError;
    NSString *_identifier;
    double _verticalAngle;
    double _verticalError;
    double _ptsScore;
    unsigned long long _timestampTicks;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long timestampTicks; // @synthesize timestampTicks=_timestampTicks;
@property(nonatomic) double ptsScore; // @synthesize ptsScore=_ptsScore;
@property(nonatomic) double verticalError; // @synthesize verticalError=_verticalError;
@property(nonatomic) double verticalAngle; // @synthesize verticalAngle=_verticalAngle;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double horizontalError; // @synthesize horizontalError=_horizontalError;
@property(nonatomic) double horizontalAngle; // @synthesize horizontalAngle=_horizontalAngle;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double distanceError; // @synthesize distanceError=_distanceError;
@property(nonatomic) double distanceMeters; // @synthesize distanceMeters=_distanceMeters;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

