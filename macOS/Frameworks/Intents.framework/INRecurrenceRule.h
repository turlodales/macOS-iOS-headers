//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface INRecurrenceRule : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _interval;
    long long _frequency;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long frequency; // @synthesize frequency=_frequency;
@property(readonly, nonatomic) unsigned long long interval; // @synthesize interval=_interval;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithInterval:(unsigned long long)arg1 frequency:(long long)arg2;

@end

