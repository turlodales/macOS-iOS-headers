//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSDoubleLinkedList, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface AMSLRUCache : NSObject
{
    unsigned long long _maxSize;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_backingDictionary;
    AMSDoubleLinkedList *_backingList;
}

- (void).cxx_destruct;
@property(retain) AMSDoubleLinkedList *backingList; // @synthesize backingList=_backingList;
@property(retain) NSMutableDictionary *backingDictionary; // @synthesize backingDictionary=_backingDictionary;
@property(retain) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly) unsigned long long maxSize; // @synthesize maxSize=_maxSize;
- (void)_removeObjectForKey:(id)arg1;
- (unsigned long long)_count;
- (void)_addObject:(id)arg1 forKey:(id)arg2;
- (id)description;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1 withCreationBlock:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1;
- (id)allObjectsAndKeys;
@property(readonly) unsigned long long count;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (id)init;

@end

