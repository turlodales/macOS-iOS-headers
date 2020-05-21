//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface ICWeakObject : NSObject <NSCopying>
{
    id _object;
    unsigned long long _cachedHash;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long cachedHash; // @synthesize cachedHash=_cachedHash;
@property(readonly, nonatomic) __weak id object; // @synthesize object=_object;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1;

@end

