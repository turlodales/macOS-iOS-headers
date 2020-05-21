//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TelephonyUtilities/TUMetadataCacheDataProvider.h>

@class NSObject<OS_dispatch_semaphore>;

@interface TUSuggestionsMetadataCacheDataProvider : TUMetadataCacheDataProvider
{
    NSObject<OS_dispatch_semaphore> *_suggestionsServiceThrottleSemaphore;
    id _suggestionsContactsObserver;
}

+ (id)newestSuggestedContactForDestinationID:(id)arg1;
+ (void)suggestedNamesForDestinationID:(id)arg1 onlySignificant:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (id)suggestedNamesForDestinationID:(id)arg1 onlySignificant:(BOOL)arg2 error:(id *)arg3;
+ (id)sharedService;
+ (BOOL)canUseSiriSuggestions;
- (void).cxx_destruct;
@property(readonly, nonatomic) id suggestionsContactsObserver; // @synthesize suggestionsContactsObserver=_suggestionsContactsObserver;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *suggestionsServiceThrottleSemaphore; // @synthesize suggestionsServiceThrottleSemaphore=_suggestionsServiceThrottleSemaphore;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;
- (id)init;

@end

