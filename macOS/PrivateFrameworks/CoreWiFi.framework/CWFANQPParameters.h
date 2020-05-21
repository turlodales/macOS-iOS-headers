//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface CWFANQPParameters : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_scanResults;
    NSArray *_ANQPElementIDList;
    unsigned long long _maximumCacheAge;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long maximumCacheAge; // @synthesize maximumCacheAge=_maximumCacheAge;
@property(copy, nonatomic) NSArray *ANQPElementIDList; // @synthesize ANQPElementIDList=_ANQPElementIDList;
@property(copy, nonatomic) NSArray *scanResults; // @synthesize scanResults=_scanResults;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToANQPParameters:(id)arg1;

@end

