//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSDate, NSString, NSUUID;

@interface CWFRoamStatus : NSObject <NSCopying, NSSecureCoding>
{
    int _reason;
    NSUUID *_UUID;
    NSString *_interfaceName;
    NSDate *_startedAt;
    NSDate *_endedAt;
    NSData *_SSID;
    NSString *_originOUI;
    NSString *_targetOUI;
    NSString *_fromBSSID;
    NSString *_toBSSID;
    unsigned long long _fromChannel;
    unsigned long long _toChannel;
    long long _fromRSSI;
    long long _toRSSI;
    long long _status;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(nonatomic) long long toRSSI; // @synthesize toRSSI=_toRSSI;
@property(nonatomic) long long fromRSSI; // @synthesize fromRSSI=_fromRSSI;
@property(nonatomic) unsigned long long toChannel; // @synthesize toChannel=_toChannel;
@property(nonatomic) unsigned long long fromChannel; // @synthesize fromChannel=_fromChannel;
@property(copy, nonatomic) NSString *toBSSID; // @synthesize toBSSID=_toBSSID;
@property(copy, nonatomic) NSString *fromBSSID; // @synthesize fromBSSID=_fromBSSID;
@property(copy, nonatomic) NSString *targetOUI; // @synthesize targetOUI=_targetOUI;
@property(copy, nonatomic) NSString *originOUI; // @synthesize originOUI=_originOUI;
@property(copy, nonatomic) NSData *SSID; // @synthesize SSID=_SSID;
@property(copy, nonatomic) NSDate *endedAt; // @synthesize endedAt=_endedAt;
@property(copy, nonatomic) NSDate *startedAt; // @synthesize startedAt=_startedAt;
@property(copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRoamStatus:(id)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSString *networkName; // @dynamic networkName;
- (id)init;

@end

