//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ResourcePreferencesController, SandboxFileExtensionController;

__attribute__((visibility("hidden")))
@interface SandboxMigrationController : NSObject
{
    ResourcePreferencesController *_resourcePreferencesController;
    SandboxFileExtensionController *_fileExtensionController;
}

- (void).cxx_destruct;
- (BOOL)_hasPerformedOneTimeSandboxMigration;
- (void)_addMigratedExtensions:(id)arg1 migrationType:(unsigned long long)arg2;
- (void)performOneTimeSandboxResourceMigrationIfNecessary;
- (id)initWithResourcePreferencesController:(id)arg1 fileExtensionController:(id)arg2;

@end

