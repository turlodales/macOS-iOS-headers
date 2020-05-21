//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSSet;

@interface _ICProactiveTrigger : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _triggerSourceType;
    NSSet *_availableApps;
    NSDictionary *_attributedString;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) NSSet *availableApps; // @synthesize availableApps=_availableApps;
@property(readonly, nonatomic) unsigned char triggerSourceType; // @synthesize triggerSourceType=_triggerSourceType;
- (BOOL)isEqualToProactiveTrigger:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithSource:(unsigned char)arg1 attributes:(id)arg2;

@end

