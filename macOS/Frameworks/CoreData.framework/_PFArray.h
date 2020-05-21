//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@class _PFWeakReference;

__attribute__((visibility("hidden")))
@interface _PFArray : NSArray
{
    int _cd_rc;
    unsigned int _count;
    id *_array;
    _PFWeakReference *_weakContext;
    struct _PFArrayFlags _flags;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;
+ (void)initialize;
- (void)_setShouldUseExtendedRelease:(BOOL)arg1;
- (void)_setShouldRelease:(BOOL)arg1;
- (unsigned int)_flags;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)getObjects:(id *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)newArrayFromObjectIDs;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (id)managedObjectIDAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)arg1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)arrayFromObjectIDs;
- (id *)_objectsPointer;
- (id)initWithObjects:(id *)arg1 count:(unsigned int)arg2 andFlags:(unsigned int)arg3 andContext:(id)arg4;
- (id)initWithObjects:(id *)arg1 count:(unsigned int)arg2 andFlags:(unsigned int)arg3;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (Class)classForArchiver;
- (Class)classForCoder;

@end

