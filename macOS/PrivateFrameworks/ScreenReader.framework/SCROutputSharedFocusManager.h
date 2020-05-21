//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXFDispatchQueue, NSDictionary, NSMutableDictionary, NSString, SCRCWeakReferenceContainer;

__attribute__((visibility("hidden")))
@interface SCROutputSharedFocusManager : NSObject
{
    BOOL __notificationsAreQueuedForOutput;
    NSDictionary *_sharedFocusUIElementJumpingInfo;
    NSMutableDictionary *__notificationsForOutput;
    AXFDispatchQueue *__sharedFocusManagerDispatchQueue;
    NSString *__previousSelectionChangeOutput;
    SCRCWeakReferenceContainer *__application;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCRCWeakReferenceContainer *_application; // @synthesize _application=__application;
@property(copy, nonatomic, setter=_setPreviousSelectionChangeOutput:) NSString *_previousSelectionChangeOutput; // @synthesize _previousSelectionChangeOutput=__previousSelectionChangeOutput;
@property(nonatomic, setter=_setNotificationsAreQueuedForOutput:) BOOL _notificationsAreQueuedForOutput; // @synthesize _notificationsAreQueuedForOutput=__notificationsAreQueuedForOutput;
@property(retain, nonatomic) AXFDispatchQueue *_sharedFocusManagerDispatchQueue; // @synthesize _sharedFocusManagerDispatchQueue=__sharedFocusManagerDispatchQueue;
@property(retain, nonatomic) NSMutableDictionary *_notificationsForOutput; // @synthesize _notificationsForOutput=__notificationsForOutput;
@property(retain, nonatomic) NSDictionary *sharedFocusUIElementJumpingInfo; // @synthesize sharedFocusUIElementJumpingInfo=_sharedFocusUIElementJumpingInfo;
- (id)_descriptionForNotificationType:(long long)arg1;
- (id)sharedFocusQueueDescription;
- (id)_removeDuplicateOutputToRequest:(id)arg1 forNotificationKey:(long long)arg2;
- (id)_addAdditionalOutputToRequest:(id)arg1 forNotificationKey:(long long)arg2;
- (void)_flushSharedFocusQueue;
- (void)_scheduleOutputForSharedFocusQueue;
- (void)_outputSharedFocusNotificationQueue;
- (BOOL)addOutputRequestToSharedFocusQueue:(id)arg1 withNotificationKey:(long long)arg2;
- (id)application;
- (id)initWithApplication:(id)arg1;

@end

