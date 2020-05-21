//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKSubcredentialProvisioningOperation.h>

@class PKAppletSubcredentialSharingInvitation, PKPaymentWebService;

@interface PKSubcredentialProvisioningRequestRemoteInvitationOperation : PKSubcredentialProvisioningOperation
{
    PKPaymentWebService *_remoteDeviceWebService;
    id <PKPaymentWebServiceTargetDeviceProtocol> _remoteTargetDevice;
    PKAppletSubcredentialSharingInvitation *_invitation;
}

+ (BOOL)canRequestInvitation:(id)arg1;
- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;

@end

