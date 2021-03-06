//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNTask.h>

@class NSManagedObjectContext, NSMutableOrderedSet;

@interface CNCustomPropertyMigrationTask : CNTask
{
    NSManagedObjectContext *_context;
    NSMutableOrderedSet *_customPropertyDefinitionsToDelete;
    NSMutableOrderedSet *_customPropertyValuesToDelete;
}

+ (id)actionsByProperty;
+ (id)supportedCustomPropertyNames;
+ (id)os_log;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableOrderedSet *customPropertyValuesToDelete; // @synthesize customPropertyValuesToDelete=_customPropertyValuesToDelete;
@property(readonly, nonatomic) NSMutableOrderedSet *customPropertyDefinitionsToDelete; // @synthesize customPropertyDefinitionsToDelete=_customPropertyDefinitionsToDelete;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void)deleteObjects:(id)arg1;
- (void)deleteMigratedObjects;
- (void)markCustomPropertyValuesForDeletion:(id)arg1;
- (void)unmarkCustomPropertyDefinitionsForDeletion:(id)arg1;
- (void)markCustomPropertyDefinitionsForDeletion:(id)arg1;
- (id)migratePropertyValues:(id)arg1;
- (id)valuesForCustomProperties:(id)arg1;
- (id)fetchCustomPropertiesWithNames:(id)arg1;
- (id)run:(id *)arg1;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithManagedObjectContext:(id)arg1;

@end

