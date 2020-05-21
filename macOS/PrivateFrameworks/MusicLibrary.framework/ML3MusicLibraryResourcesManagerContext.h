//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ML3MusicLibraryResourcesManagerContext : NSObject
{
    BOOL _runningInDaemon;
    BOOL _multiUserSupported;
    id <MLMediaLibraryResourcesServiceProtocol> _resourcesService;
    id <ML3AccountInformationProviding> _accountInfo;
    id <MLMediaLibraryAccountChangeObserver> _accountChangeObserver;
    NSString *_libraryContainerIdentifier;
}

+ (id)contextForMultiUserDaemonLibraryWithAccountInfo:(id)arg1 accountChangeObserver:(id)arg2;
+ (id)contextForMultiUserFrameworkLibraryWithService:(id)arg1;
+ (id)contextForSingleUserLibraryWithLibraryContainerIdentifier:(id)arg1;
+ (id)contextForSingleUserLibraryWithAccountInfo:(id)arg1;
+ (id)contextForAutoupdatingSharedLibrary;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *libraryContainerIdentifier; // @synthesize libraryContainerIdentifier=_libraryContainerIdentifier;
@property(readonly, nonatomic) id <MLMediaLibraryAccountChangeObserver> accountChangeObserver; // @synthesize accountChangeObserver=_accountChangeObserver;
@property(readonly, nonatomic) id <ML3AccountInformationProviding> accountInfo; // @synthesize accountInfo=_accountInfo;
@property(readonly, nonatomic) id <MLMediaLibraryResourcesServiceProtocol> resourcesService; // @synthesize resourcesService=_resourcesService;
@property(readonly, nonatomic, getter=isMultiUserSupported) BOOL multiUserSupported; // @synthesize multiUserSupported=_multiUserSupported;
@property(readonly, nonatomic, getter=isRunningInDaemon) BOOL runningInDaemon; // @synthesize runningInDaemon=_runningInDaemon;
- (id)_initWithResourcesService:(id)arg1 accountInfo:(id)arg2 libraryContainerIdentifier:(id)arg3 accountChangeObserver:(id)arg4 supportsMultiUsers:(BOOL)arg5 runningInDaemon:(BOOL)arg6;

@end

