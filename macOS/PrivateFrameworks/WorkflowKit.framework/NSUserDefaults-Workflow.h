//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (Workflow)
+ (id)siriAssistantUserDefaults;
+ (id)systemShortcutsUserDefaults;
+ (id)workflowUserDefaults;
- (id)workflowIdentifierConsumingSingleUseToken:(id)arg1;
- (void)setWorkflowIdentifier:(id)arg1 forToken:(id)arg2;
- (BOOL)wf_voiceParametersDisabled;
- (BOOL)wf_isDeviceIdiomDisabledInSiri:(long long)arg1;
- (BOOL)wf_isCurrentDeviceModelDisabledInSiri;
- (void)wf_registerDefaultDisabledDevices;
- (id)wf_keyForDisablingDeviceIdiom:(long long)arg1;
@end

