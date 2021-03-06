//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface CalPersistentLRUCacheItem : NSObject <NSSecureCoding>
{
    id <NSCopying><NSSecureCoding> _key;
    id <NSSecureCoding> _value;
    CalPersistentLRUCacheItem *_nextItem;
    CalPersistentLRUCacheItem *_previousItem;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) __weak CalPersistentLRUCacheItem *previousItem; // @synthesize previousItem=_previousItem;
@property(retain, nonatomic) CalPersistentLRUCacheItem *nextItem; // @synthesize nextItem=_nextItem;
@property(readonly, nonatomic) id <NSSecureCoding> value; // @synthesize value=_value;
@property(readonly, nonatomic) id <NSCopying><NSSecureCoding> key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 value:(id)arg2;

@end

