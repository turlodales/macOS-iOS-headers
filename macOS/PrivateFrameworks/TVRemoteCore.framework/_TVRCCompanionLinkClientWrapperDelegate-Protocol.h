//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, _TVRCRPCompanionLinkClientWrapper, _TVRXDeviceAuthenticationChallenge;

@protocol _TVRCCompanionLinkClientWrapperDelegate <NSObject>
- (void)deviceUpdatedSupportedButtons:(_TVRCRPCompanionLinkClientWrapper *)arg1;
- (void)deviceEncounteredAuthenticationChallenge:(_TVRXDeviceAuthenticationChallenge *)arg1;
- (void)disconnectedFromDevice:(_TVRCRPCompanionLinkClientWrapper *)arg1 error:(NSError *)arg2;
- (void)connectedToDevice:(_TVRCRPCompanionLinkClientWrapper *)arg1;
@end

