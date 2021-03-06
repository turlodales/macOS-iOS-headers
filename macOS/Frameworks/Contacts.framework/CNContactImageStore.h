//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactMetadataPersistentStoreManager;

@interface CNContactImageStore : NSObject
{
    CNContactMetadataPersistentStoreManager *_storeManager;
}

+ (long long)maximumContactImagesPerContact;
- (void).cxx_destruct;
@property(retain, nonatomic) CNContactMetadataPersistentStoreManager *storeManager; // @synthesize storeManager=_storeManager;
- (id)managedObjectsToContactImages:(id)arg1;
- (void)insertContactImage:(id)arg1 withContactIdentifier:(id)arg2 inContext:(id)arg3;
- (void)ensureImageQuotasForImages:(id)arg1 inContext:(id)arg2;
- (BOOL)updateExistingImagesIfNeededWithNewContactImage:(id)arg1 forContactIdentifier:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (BOOL)performSaveRequest:(id)arg1 error:(id *)arg2;
- (id)performFetchRequest:(id)arg1 error:(id *)arg2;
- (id)initWithContactMetadataStoreManager:(id)arg1;
- (id)init;

@end

