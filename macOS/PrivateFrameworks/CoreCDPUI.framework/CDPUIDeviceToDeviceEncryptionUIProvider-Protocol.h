//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CDPUIDeviceToDeviceEncryptionFlowContext;

@protocol CDPUIDeviceToDeviceEncryptionUIProvider
- (void)promptIneligibilityWithContext:(CDPUIDeviceToDeviceEncryptionFlowContext *)arg1 vm:(id <CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol>)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)promptForCancelWithContext:(CDPUIDeviceToDeviceEncryptionFlowContext *)arg1 vm:(id <CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol>)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)promptForUpgradeWithContext:(CDPUIDeviceToDeviceEncryptionFlowContext *)arg1 vm:(id <CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol>)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@end

