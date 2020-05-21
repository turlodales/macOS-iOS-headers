//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface WBSMemoryFootprintMallocZone : NSObject <NSSecureCoding>
{
    unsigned long long _addr;
    struct malloc_statistics_t _statistics;
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) unsigned long long sizeAllocated;
@property(readonly, nonatomic) unsigned long long sizeInUse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMallocZone:(struct _malloc_zone_t *)arg1;

@end

