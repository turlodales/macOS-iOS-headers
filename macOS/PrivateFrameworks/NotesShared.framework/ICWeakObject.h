//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/NSCopying-Protocol.h>

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

