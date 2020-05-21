//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKDiscoveryTrigger.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate;

@interface PKDiscoveryTimeTrigger : PKDiscoveryTrigger <NSSecureCoding, NSCopying>
{
    NSDate *_time;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *time; // @synthesize time=_time;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

