//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface CTEmergencyMode : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _enabled;
    BOOL _isEmergencyText;
    long long _type;
}

+ (BOOL)supportsSecureCoding;
+ (id)convertFromEmergencyMode:(const struct EmergencyMode *)arg1;
@property(nonatomic) BOOL isEmergencyText; // @synthesize isEmergencyText=_isEmergencyText;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCTEmergencyMode:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithEnabled:(BOOL)arg1 type:(long long)arg2 isEmergencyText:(BOOL)arg3;

@end

