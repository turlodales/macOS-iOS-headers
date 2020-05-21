//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKKnowledgeStore;

@interface INUserContextStore : NSObject
{
    CKKnowledgeStore *_knowledgeStore;
}

+ (id)keyForBundleIdentifier:(id)arg1 andType:(long long)arg2;
+ (id)findDataInValue:(id)arg1;
+ (id)sharedStore;
- (void).cxx_destruct;
- (id)_initWithKnowledgeStore:(id)arg1;
- (id)_init;
- (void)userContextOfClass:(Class)arg1 forBundleIdentifiers:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)storeUserContextViaHelper:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removeUserContextOfClass:(Class)arg1 forBundleIdentifier:(id)arg2;
- (void)storeUserContext:(id)arg1 forBundleIdentifier:(id)arg2;

@end

