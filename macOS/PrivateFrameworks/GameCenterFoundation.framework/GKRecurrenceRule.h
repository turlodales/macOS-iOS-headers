//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface GKRecurrenceRule : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _interval;
    long long _frequency;
}

+ (BOOL)supportsSecureCoding;
@property long long frequency; // @synthesize frequency=_frequency;
@property unsigned long long interval; // @synthesize interval=_interval;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInterval:(unsigned long long)arg1 frequency:(long long)arg2;

@end

