//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDictionary.h"

@class _PFResultArray;

__attribute__((visibility("hidden")))
@interface _PFResultObject : NSDictionary
{
    _PFResultArray *_parent_buffer;
    int _cd_rc;
    unsigned int _count;
    unsigned long long _sql_entity_id;
    unsigned long long _primary_key;
}

+ (Class)classForKeyedUnarchiver;
- (id)keyEnumerator;
- (unsigned long long)_valueCountByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)_countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3 forKeys:(BOOL)arg4;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)objectIDFromPtr:(void *)arg1;
- (id)number64FromPtr:(void *)arg1;
- (id)number32FromPtr:(void *)arg1;
- (id)doubleFromPtr:(void *)arg1;
- (id)dataFromPtr:(void *)arg1;
- (id)taggedStringFromPtr:(unsigned long long *)arg1 withLength:(unsigned long long)arg2;
- (id)stringFromPtr:(void *)arg1;
- (unsigned long long *)_columnOffsets;
- (void)_setParentBuffer:(id)arg1;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (Class)classForArchiver;
- (Class)classForCoder;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;

@end

