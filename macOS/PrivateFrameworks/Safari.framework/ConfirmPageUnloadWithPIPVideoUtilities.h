//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ConfirmPageUnloadWithPIPVideoUtilities : NSObject
{
}

+ (id)_actionButtonTitleForReason:(long long)arg1;
+ (id)_informativeTextForReason:(long long)arg1;
+ (id)_messageTextForReason:(long long)arg1;
+ (id)_createAlertForPageUnloadReason:(long long)arg1;
+ (id)pageWithVideoInPIPInBrowserTabs:(id)arg1;
+ (BOOL)modallyConfirmPageUnloadInBrowserContentViewController:(id)arg1 reason:(long long)arg2;
+ (void)confirmPageUnloadInBrowserContentViewController:(id)arg1 reason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (BOOL)shouldConfirmUnloadingPageWithBrowserContentViewController:(id)arg1;

@end

