//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext, NSPersistentContainer;

__attribute__((visibility("hidden")))
@interface VSPersistentContainer : NSObject
{
    long long _modelVersion;
    NSManagedObjectContext *_viewContext;
    NSPersistentContainer *_persistentContainer;
}

+ (id)directoryURL;
+ (id)legacyDirectoryURL;
- (void).cxx_destruct;
@property(retain, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(retain, nonatomic) NSManagedObjectContext *viewContext; // @synthesize viewContext=_viewContext;
@property(readonly, nonatomic) long long modelVersion; // @synthesize modelVersion=_modelVersion;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)developerIdentityProviderFetchRequest;
- (id)insertDeveloperIdentityProviderInContext:(id)arg1;
- (id)init;
- (id)initWithModelVersion:(long long)arg1;
- (void)migrateContainerIfNecessary;

@end

