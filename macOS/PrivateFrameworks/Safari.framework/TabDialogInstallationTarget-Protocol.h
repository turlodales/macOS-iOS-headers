//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DimmingView, NSView<TabDialogView>;

@protocol TabDialogInstallationTarget <NSObject>
- (void)uninstallTabDialogViewAnimated:(BOOL)arg1 completionHandler:(void (^)(void))arg2;
- (void)transplantTabDialogView:(NSView<TabDialogView> *)arg1 andDimmingView:(DimmingView *)arg2 placement:(long long)arg3;
- (void)installTabDialogView:(NSView<TabDialogView> *)arg1 andDimmingView:(DimmingView *)arg2 placement:(long long)arg3 completionHandler:(void (^)(void))arg4;
@end

