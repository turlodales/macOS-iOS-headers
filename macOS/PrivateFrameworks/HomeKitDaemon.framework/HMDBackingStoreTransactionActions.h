//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreTransactionOptions.h>

@class HMDBackingStore;

@interface HMDBackingStoreTransactionActions : HMDBackingStoreTransactionOptions
{
    BOOL _local;
    BOOL _changed;
    BOOL _saveToAssistant;
    BOOL _saveToSharedUserAccount;
    HMDBackingStore *_backingStore;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) BOOL saveToSharedUserAccount; // @synthesize saveToSharedUserAccount=_saveToSharedUserAccount;
@property(readonly, nonatomic) BOOL saveToAssistant; // @synthesize saveToAssistant=_saveToAssistant;
@property(readonly, nonatomic) BOOL changed; // @synthesize changed=_changed;
@property(readonly, nonatomic) BOOL local; // @synthesize local=_local;
- (id)description;
- (id)logIdentifier;
- (void)markSaveToSharedUserAccount;
- (void)markSaveToAssistant;
- (void)markChanged;
- (void)markLocalChanged;
- (id)initWithBackingStore:(id)arg1 options:(id)arg2;

@end

