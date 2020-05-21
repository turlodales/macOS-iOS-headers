//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber;

@interface CTSignalStrengthMeasurements : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_rssi;
    NSNumber *_rscp;
    NSNumber *_ecn0;
    NSNumber *_rsrp;
    NSNumber *_rsrq;
    NSNumber *_snr;
    NSNumber *_ecio;
    NSNumber *_rxagc;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *rxagc; // @synthesize rxagc=_rxagc;
@property(retain, nonatomic) NSNumber *ecio; // @synthesize ecio=_ecio;
@property(retain, nonatomic) NSNumber *snr; // @synthesize snr=_snr;
@property(retain, nonatomic) NSNumber *rsrq; // @synthesize rsrq=_rsrq;
@property(retain, nonatomic) NSNumber *rsrp; // @synthesize rsrp=_rsrp;
@property(retain, nonatomic) NSNumber *ecn0; // @synthesize ecn0=_ecn0;
@property(retain, nonatomic) NSNumber *rscp; // @synthesize rscp=_rscp;
@property(retain, nonatomic) NSNumber *rssi; // @synthesize rssi=_rssi;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

