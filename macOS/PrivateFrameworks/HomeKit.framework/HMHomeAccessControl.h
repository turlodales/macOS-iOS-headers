//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMAccessControl.h>

@class HMUserCameraAccess, HMUserPresenceAuthorization, HMUserPresenceCompute;

@interface HMHomeAccessControl : HMAccessControl
{
    BOOL _owner;
    BOOL _administrator;
    BOOL _remoteAccessAllowed;
    HMUserPresenceAuthorization *_presenceAuthStatus;
    HMUserPresenceCompute *_presenceComputeStatus;
    HMUserCameraAccess *_camerasAccess;
}

- (void).cxx_destruct;
- (void)updateCamerasAccessLevel:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRemoteAccess:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAdministratorAccess:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)camerasAccessLevel;
@property(retain, nonatomic) HMUserCameraAccess *camerasAccess; // @synthesize camerasAccess=_camerasAccess;
- (unsigned long long)presenceComputationStatus;
- (unsigned long long)presenceAuthorizationStatus;
@property(retain, nonatomic) HMUserPresenceCompute *presenceComputeStatus; // @synthesize presenceComputeStatus=_presenceComputeStatus;
@property(retain, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus; // @synthesize presenceAuthStatus=_presenceAuthStatus;
@property(getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed; // @synthesize remoteAccessAllowed=_remoteAccessAllowed;
@property(nonatomic, getter=isAdministrator) BOOL administrator; // @synthesize administrator=_administrator;
@property(getter=isOwner) BOOL owner; // @synthesize owner=_owner;
- (BOOL)isEqual:(id)arg1;
- (id)initWithUser:(id)arg1 owner:(BOOL)arg2 administratorPrivilege:(BOOL)arg3 remoteAccess:(BOOL)arg4 presenceAuthStatus:(id)arg5 presenceComputeStatus:(id)arg6 camerasAccess:(id)arg7;

@end

