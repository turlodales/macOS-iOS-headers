//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSObject<OS_dispatch_queue>;

@interface PHConcurrentMapTable : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMapTable *_protectedTable;
}

+ (id)mapTable;
- (void).cxx_destruct;
- (id)allKeys;
- (void)removeAllObjects;
- (unsigned long long)count;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)tryRemoveObjectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)_dispatchIsolatedRead:(CDUnknownBlockType)arg1;
- (void)_dispatchIsolatedWriteSync:(CDUnknownBlockType)arg1;
- (void)_dispatchIsolatedWriteAsync:(CDUnknownBlockType)arg1;
- (id)init;

@end

