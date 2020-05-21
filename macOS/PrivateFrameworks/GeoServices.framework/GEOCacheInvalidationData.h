//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray;

@interface GEOCacheInvalidationData : NSObject <NSSecureCoding>
{
    double _timestamp;
    double _ttl;
    unsigned int _version;
    NSArray *_versionDomains;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *versionDomains; // @synthesize versionDomains=_versionDomains;
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
@property(readonly, nonatomic) double ttl; // @synthesize ttl=_ttl;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (BOOL)_isKey:(id)arg1 subsetOf:(id)arg2;
- (BOOL)isInvalidatedByServiceVersion:(unsigned int)arg1 domains:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 ttl:(double)arg2 version:(unsigned int)arg3 domains:(id)arg4;

@end

