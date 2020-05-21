//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class AFLinkedListItem;

@interface AFQueue : NSObject <NSFastEnumeration>
{
    AFLinkedListItem *_head;
    AFLinkedListItem *_tail;
    unsigned long long _count;
    id <AFQueueDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AFQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (id)dequeueAllObjects;
- (id)dequeueObject;
- (void)enqueueObjects:(id)arg1;
- (void)enqueueObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) id frontObject;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)_objects;
- (void)dealloc;

@end

