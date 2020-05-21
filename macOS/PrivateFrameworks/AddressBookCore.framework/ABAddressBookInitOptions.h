//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABPersistentStoreCoordinatorCache, NSArray, NSString;

@interface ABAddressBookInitOptions : NSObject
{
    BOOL _doInitialImports;
    BOOL _registerForChangeNotifications;
    BOOL _tracksAllSources;
    BOOL _provisional;
    BOOL _directoryResults;
    BOOL _overridesReadOnly;
    BOOL _hasUnfilteredAccess;
    NSString *_databaseDirectory;
    ABPersistentStoreCoordinatorCache *_persistentStoreCoordinatorCache;
    NSArray *_delegateInfos;
}

+ (id)defaultOptions;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *delegateInfos; // @synthesize delegateInfos=_delegateInfos;
@property(retain, nonatomic) ABPersistentStoreCoordinatorCache *persistentStoreCoordinatorCache; // @synthesize persistentStoreCoordinatorCache=_persistentStoreCoordinatorCache;
@property(copy, nonatomic) NSString *databaseDirectory; // @synthesize databaseDirectory=_databaseDirectory;
@property(nonatomic) BOOL hasUnfilteredAccess; // @synthesize hasUnfilteredAccess=_hasUnfilteredAccess;
@property(nonatomic) BOOL overridesReadOnly; // @synthesize overridesReadOnly=_overridesReadOnly;
@property(nonatomic) BOOL directoryResults; // @synthesize directoryResults=_directoryResults;
@property(nonatomic) BOOL provisional; // @synthesize provisional=_provisional;
@property(nonatomic) BOOL tracksAllSources; // @synthesize tracksAllSources=_tracksAllSources;
@property(nonatomic) BOOL registerForChangeNotifications; // @synthesize registerForChangeNotifications=_registerForChangeNotifications;
@property(nonatomic) BOOL doInitialImports; // @synthesize doInitialImports=_doInitialImports;
- (id)description;

@end

