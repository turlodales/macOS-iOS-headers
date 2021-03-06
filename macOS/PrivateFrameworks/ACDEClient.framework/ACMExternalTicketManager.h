//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ACDEClient/ACMTicketManager.h>

#import <ACDEClient/ACMTicketManagerProtocol-Protocol.h>

@class NSString;

@interface ACMExternalTicketManager : ACMTicketManager <ACMTicketManagerProtocol>
{
}

- (void)tokenDidReceive2SVSecret:(id)arg1;
- (id)deviceIdentifier;
- (id)twoSVCreateDateForPrincipal:(id)arg1;
- (id)twoSVSecretForPrincipal:(id)arg1;
- (id)twoSVPersonIDForPrincipal:(id)arg1;
- (id)identifier;
- (unsigned long long)clientID;
- (id)defaultPublicKeyVersionForRealm:(id)arg1;
- (id)preferences;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

