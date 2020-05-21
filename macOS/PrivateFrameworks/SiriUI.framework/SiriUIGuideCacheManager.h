//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSObject<OS_dispatch_queue>, SAGuidanceGuideSnippet, SAGuidanceGuideUpdate, SAGuidanceSuggestedUtterances;

@interface SiriUIGuideCacheManager : NSObject
{
    SAGuidanceGuideUpdate *_cachedGuideUpdate;
    NSObject<OS_dispatch_queue> *_cacheFileQueue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)_aceObjectDictionaryAtFilepath:(id)arg1;
- (id)_cachedGuideUpdate;
- (id)_pathForCachedGuideUpdate;
- (void)_updateLastCheckedWithDate:(id)arg1;
- (BOOL)_shouldCheckForUpdateAtDate:(id)arg1;
- (void)clearCachedGuide;
- (void)updateCacheWithGuideUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateLastCheckedDate;
- (BOOL)shouldCheckForUpdate;
@property(readonly, nonatomic) SAGuidanceSuggestedUtterances *cachedSuggestedUtterances;
@property(readonly, nonatomic) SAGuidanceGuideSnippet *cachedGuideSnippet;
@property(readonly, nonatomic) NSNumber *cachedGuideTag;
- (id)init;

@end

