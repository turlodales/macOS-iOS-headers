//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, NSUUID;

@interface RTMapItemExtendedAttributes : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isMe;
    NSString *_addressIdentifier;
    double _wifiConfidence;
    long long _wifiFingerprintLabelType;
    NSUUID *_identifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)fingerprintLabelTypeToString:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long wifiFingerprintLabelType; // @synthesize wifiFingerprintLabelType=_wifiFingerprintLabelType;
@property(nonatomic) double wifiConfidence; // @synthesize wifiConfidence=_wifiConfidence;
@property(nonatomic) BOOL isMe; // @synthesize isMe=_isMe;
@property(copy, nonatomic) NSString *addressIdentifier; // @synthesize addressIdentifier=_addressIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToMapItemExtendedAttributes:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithAddressIdentifier:(id)arg1 isMe:(BOOL)arg2 wifiConfidence:(double)arg3 wifiFingerprintLabelType:(long long)arg4;
- (id)initWithIdentifier:(id)arg1 addressIdentifier:(id)arg2 isMe:(BOOL)arg3 wifiConfidence:(double)arg4 wifiFingerprintLabelType:(long long)arg5;
- (id)initWithExtendedAttributesMO:(id)arg1;
- (id)init;

@end

