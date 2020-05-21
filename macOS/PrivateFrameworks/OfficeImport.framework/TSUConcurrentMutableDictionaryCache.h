//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, OITSUReadWriteQueue;

__attribute__((visibility("hidden")))
@interface TSUConcurrentMutableDictionaryCache : NSObject
{
    NSMutableDictionary *_cache;
    OITSUReadWriteQueue *_readWriteQueue;
    NSString *_name;
    unsigned long long _count;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) OITSUReadWriteQueue *readWriteQueue; // @synthesize readWriteQueue=_readWriteQueue;
- (void)performSyncWriteWithUnderlyingDictionary:(CDUnknownBlockType)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)description;
- (void)removeObjectForKey:(id)arg1 andWait:(BOOL)arg2;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeAllObjects;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)init;

@end

