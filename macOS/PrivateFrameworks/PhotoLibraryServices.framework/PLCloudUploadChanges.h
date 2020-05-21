//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet;

@interface PLCloudUploadChanges : NSObject
{
    NSMutableArray *_insertedAssets;
    NSMutableArray *_updatedAssets;
    NSMutableSet *_adjustedAssetUuids;
    NSMutableSet *_propertyChangedAssetUuids;
    NSMutableSet *_faceChangedAssetUuids;
    NSMutableArray *_updatedMasters;
    NSMutableArray *_insertedResources;
    NSMutableArray *_updatedResources;
    NSMutableArray *_albumInserts;
    NSMutableArray *_albumChanges;
    NSMutableArray *_memoryChanges;
    NSMutableArray *_personChanges;
    NSMutableArray *_faceCropChanges;
    NSMutableArray *_suggestionChanges;
    NSMutableSet *_updatedRelationship;
    NSMutableArray *_deletedRecords;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *deletedRecords; // @synthesize deletedRecords=_deletedRecords;
@property(retain, nonatomic) NSMutableSet *updatedRelationship; // @synthesize updatedRelationship=_updatedRelationship;
@property(retain, nonatomic) NSMutableArray *suggestionChanges; // @synthesize suggestionChanges=_suggestionChanges;
@property(retain, nonatomic) NSMutableArray *faceCropChanges; // @synthesize faceCropChanges=_faceCropChanges;
@property(retain, nonatomic) NSMutableArray *personChanges; // @synthesize personChanges=_personChanges;
@property(retain, nonatomic) NSMutableArray *memoryChanges; // @synthesize memoryChanges=_memoryChanges;
@property(retain, nonatomic) NSMutableArray *albumChanges; // @synthesize albumChanges=_albumChanges;
@property(retain, nonatomic) NSMutableArray *albumInserts; // @synthesize albumInserts=_albumInserts;
@property(retain, nonatomic) NSMutableArray *updatedResources; // @synthesize updatedResources=_updatedResources;
@property(retain, nonatomic) NSMutableArray *insertedResources; // @synthesize insertedResources=_insertedResources;
@property(retain, nonatomic) NSMutableArray *updatedMasters; // @synthesize updatedMasters=_updatedMasters;
@property(retain, nonatomic) NSMutableSet *faceChangedAssetUuids; // @synthesize faceChangedAssetUuids=_faceChangedAssetUuids;
@property(retain, nonatomic) NSMutableSet *propertyChangedAssetUuids; // @synthesize propertyChangedAssetUuids=_propertyChangedAssetUuids;
@property(retain, nonatomic) NSMutableSet *adjustedAssetUuids; // @synthesize adjustedAssetUuids=_adjustedAssetUuids;
@property(retain, nonatomic) NSMutableArray *updatedAssets; // @synthesize updatedAssets=_updatedAssets;
@property(retain, nonatomic) NSMutableArray *insertedAssets; // @synthesize insertedAssets=_insertedAssets;
- (id)summaryDescription;
- (BOOL)isEmpty;
- (id)init;

@end

