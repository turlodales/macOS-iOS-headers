//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface CWFRangingMeasurement : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _roundTripTime;
    long long _RSSI;
    unsigned long long _channel;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long channel; // @synthesize channel=_channel;
@property(nonatomic) long long RSSI; // @synthesize RSSI=_RSSI;
@property(nonatomic) unsigned long long roundTripTime; // @synthesize roundTripTime=_roundTripTime;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRangingMeasurement:(id)arg1;
- (id)description;

@end

