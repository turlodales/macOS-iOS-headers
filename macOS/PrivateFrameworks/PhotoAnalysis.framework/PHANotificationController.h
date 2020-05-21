//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PGManager;

@interface PHANotificationController : NSObject
{
    PGManager *_graphManager;
}

- (void).cxx_destruct;
- (void)postNotificationForSuggestion:(id)arg1 deliveryDate:(id)arg2;
- (void)fireNotificationForSuggestionIdentifiers:(id)arg1;
- (void)postNotificationForMemory:(id)arg1 withCreationReason:(unsigned long long)arg2;
- (void)fireNotificationForMemoryIdentifiers:(id)arg1 withCreationReason:(unsigned long long)arg2;
- (BOOL)shouldFireNotificationForMemories:(id)arg1 withCreationReason:(unsigned long long)arg2;
- (id)bestDateForDeliveringNotification;
- (BOOL)userIsActivelyUsingPhotos;
- (id)initWithGraphManager:(id)arg1;

@end

