//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemExtensions/OSSystemExtensionRequest.h>

__attribute__((visibility("hidden")))
@interface OSSystemExtensionActivationRequest : OSSystemExtensionRequest
{
}

- (void)failedWithError:(id)arg1;
- (void)activatedWithResult:(long long)arg1;
- (void)needsUserApproval;
- (void)requestReplacementActionForExistingExtension:(id)arg1 withExtension:(id)arg2;
- (void)sendActivationRequest;
- (void)didConnectToDaemon;

@end

