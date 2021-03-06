//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/WBSBrowserTabCompletionProviderDelegate-Protocol.h>
#import <Safari/WBSBrowserTabCompletionProviderSource-Protocol.h>

@class NSString, WBSBrowserTabCompletionProvider;

__attribute__((visibility("hidden")))
@interface UnifiedFieldCompletionListGeneratorObjCAdapter : NSObject <WBSBrowserTabCompletionProviderSource, WBSBrowserTabCompletionProviderDelegate>
{
    struct UnifiedFieldCompletionListGenerator *_completionListGenerator;
    WBSBrowserTabCompletionProvider *_tabCompletionProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WBSBrowserTabCompletionProvider *tabCompletionProvider; // @synthesize tabCompletionProvider=_tabCompletionProvider;
@property(readonly, nonatomic) struct UnifiedFieldCompletionListGenerator *completionListGenerator; // @synthesize completionListGenerator=_completionListGenerator;
- (void)didFindMatchesForCurrentQueryInBrowserTabCompletionProvider:(id)arg1;
- (id)selectedTabInfoForBrowserTabCompletionProvider:(id)arg1;
- (id)tabInfosForBrowserTabCompletionProvider:(id)arg1;
- (void)_tabsDidChange:(id)arg1;
- (void)_stopTrackingTabChanges;
- (void)_startTrackingTabChanges;
- (void)cancelLocalTabSearch;
- (void)startLocalTabSearch;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (id)initWithCompletionListGenerator:(struct UnifiedFieldCompletionListGenerator *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

