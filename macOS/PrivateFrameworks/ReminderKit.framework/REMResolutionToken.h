//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSUUID;

@interface REMResolutionToken : NSObject <NSSecureCoding, NSCopying>
{
    long long _counter;
    double _modificationTime;
    NSUUID *_replicaID;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *replicaID; // @synthesize replicaID=_replicaID;
@property(nonatomic) double modificationTime; // @synthesize modificationTime=_modificationTime;
@property(nonatomic) long long counter; // @synthesize counter=_counter;
- (id)debugDescription;
- (id)description;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)update;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultValue;
- (id)init;
- (id)initWithCounter:(long long)arg1 modificationTime:(double)arg2 replicaID:(id)arg3;

@end

