//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABZeroingWeakReference, NSMutableDictionary, NSString;

@interface ABAccountPersistence : NSObject
{
    id <ABAccountPersistenceBackend> _backend;
    NSString *_accountType;
    BOOL _invalidated;
    id <CNCancelable> _delayedApplyToken;
    BOOL _hasChanges;
    NSMutableDictionary *_persistentValues;
    ABZeroingWeakReference *_delegate;
}

@property(getter=isInvalidated) BOOL invalidated; // @synthesize invalidated=_invalidated;
- (void)_sourceShouldRefreshImmediately;
- (unsigned long long)unsignedIntegerForKey:(id)arg1;
- (void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (double)doubleForKey:(id)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)nts_setObject:(id)arg1 forKey:(id)arg2;
- (void)nts_removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)invalidate;
- (void)delayedApplyChanges;
- (void)setDelayedApplyToken:(id)arg1;
- (id)scheduleDelayedApply;
@property BOOL hasChanges; // @synthesize hasChanges=_hasChanges;
- (void)deletePersistentValuesWithAddressBook:(id)arg1;
- (id)allPersistentValues;
- (void)rediscoverPersistentValuesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)loadPersistentValues;
- (BOOL)savePersistentValuesAndPostDidChangeNotification:(BOOL)arg1;
- (void)persistValuesAndPostDidChangeNotifcation:(BOOL)arg1;
- (void)applyChangesAndRefresh:(BOOL)arg1;
- (void)applyChanges:(id)arg1;
- (id)acAccountIdentifier;
@property __weak id <ABAccountPersistenceDelegate> delegate;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithBackend:(id)arg1 accountType:(id)arg2;

@end

