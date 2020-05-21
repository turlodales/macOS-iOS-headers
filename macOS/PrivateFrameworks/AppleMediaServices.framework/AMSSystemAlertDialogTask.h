//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSDialogRequest;

@interface AMSSystemAlertDialogTask : AMSTask
{
    BOOL _dismissOnHomeButton;
    BOOL _dismissOnLock;
    BOOL _shouldDismissAfterUnlock;
    BOOL _shouldDisplayAsTopMost;
    BOOL _shouldPendInSetupIfNotAllowed;
    BOOL _displaysOnLockscreen;
    AMSDialogRequest *_request;
    long long _defaultButtonIndex;
    long long _unlockActionButtonIndex;
}

- (void).cxx_destruct;
@property long long unlockActionButtonIndex; // @synthesize unlockActionButtonIndex=_unlockActionButtonIndex;
@property BOOL displaysOnLockscreen; // @synthesize displaysOnLockscreen=_displaysOnLockscreen;
@property BOOL shouldPendInSetupIfNotAllowed; // @synthesize shouldPendInSetupIfNotAllowed=_shouldPendInSetupIfNotAllowed;
@property BOOL shouldDisplayAsTopMost; // @synthesize shouldDisplayAsTopMost=_shouldDisplayAsTopMost;
@property BOOL shouldDismissAfterUnlock; // @synthesize shouldDismissAfterUnlock=_shouldDismissAfterUnlock;
@property BOOL dismissOnLock; // @synthesize dismissOnLock=_dismissOnLock;
@property BOOL dismissOnHomeButton; // @synthesize dismissOnHomeButton=_dismissOnHomeButton;
@property long long defaultButtonIndex; // @synthesize defaultButtonIndex=_defaultButtonIndex;
@property(readonly) AMSDialogRequest *request; // @synthesize request=_request;
- (id)_reorderButtonActions;
- (id)_handleResponseForNote:(struct __CFUserNotification *)arg1 buttonActions:(id)arg2 keys:(struct ButtonKey *)arg3;
- (struct __CFUserNotification *)_createNotificationFromDictionary:(struct __CFDictionary *)arg1 options:(unsigned long long)arg2;
- (struct __CFDictionary *)_createNoteDictionaryWithKeys:(struct ButtonKey *)arg1 buttonActions:(id)arg2 outOptions:(unsigned long long *)arg3;
- (id)present;
- (id)initWithRequest:(id)arg1;

@end

