//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtension.h"

#import "CXCallDirectoryStoreMigratorExtension.h"

@class LSPlugInKitProxy, NSString, NSURL;

@interface NSExtension (CXCallDirectoryStoreMigrator) <CXCallDirectoryStoreMigratorExtension>
@property(readonly, nonatomic, getter=isEnabledViaPlugInKit) BOOL enabledViaPlugInKit;
@property(readonly, nonatomic) LSPlugInKitProxy *plugInKitProxy;
@property(readonly, nonatomic) NSURL *containingAppURL;
@property(readonly, nonatomic) NSString *localizedContainingAppName;
@property(readonly, nonatomic) NSString *localizedName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

