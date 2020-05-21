//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import "PLSyncableDetectedFace.h"

@class NSDate, NSSet, NSString, PLDetectedFaceGroup, PLDetectedFaceprint, PLFaceCrop, PLManagedAsset, PLPerson;

@interface PLDetectedFace : PLManagedObject <PLSyncableDetectedFace>
{
}

+ (id)predicateForArchival;
+ (id)predicatesForFacesNeedingFaceCropGeneration;
+ (id)predicatesToExcludeNonVisibleFaces;
+ (void)batchFetchKeyFacesByPersonUUIDWithPersonUUIDs:(id)arg1 library:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)batchFetchDetectedFacesByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (unsigned long long)countOfHiddenFacesOnAssetsWithObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)detectedFaceWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
+ (void)enumerateAssetUUIDsForSearchIndexingWithDetctedFaceUUIDs:(id)arg1 managedObjectContext:(id)arg2 assetUUIDHandler:(CDUnknownBlockType)arg3;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1 hardReset:(BOOL)arg2;
+ (long long)resetAssetForAllSyncableFacesInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)syncableFacesToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned long long)arg2;
+ (id)_syncableFacesToUploadInitiallyPredicate;
+ (id)syncableFacesPredicate;
+ (id)_facesMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2 inPhotoLibrary:(id)arg3;
+ (id)findExistingFaceMatchingDimension:(id)arg1 inFaces:(id)arg2 ignoreSourceAssetDimensions:(BOOL)arg3;
@property(nonatomic) int effectiveNameSource;
- (void)addClusterRejectedPerson:(id)arg1;
- (void)addRejectedPersonNeedingFaceCrops:(id)arg1;
- (void)addRejectedPerson:(id)arg1;
- (id)namingDescription;
- (id)debugLogDescription;
- (void)removeFaceprint;
- (void)_verifyAssetRelationship;
@property(readonly, nonatomic) BOOL isTrainingFace;
- (void)_updateFaceGroupIfNeeded;
- (void)_touchPersonForPersistenceIfNeeded;
- (void)willSave;
- (void)delete;
- (void)awakeFromInsert;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)arg1;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (BOOL)isValidForPersistence;
- (double)photosFaceRepresentationQuality;
- (double)photosFaceRepresentationRoll;
- (id)photosFaceRepresentationLocalIdentifier;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (long long)photosFaceRepresentationQualityMeasure;
- (BOOL)photosFaceRepresentationIsRightEyeClosed;
- (BOOL)photosFaceRepresentationIsLeftEyeClosed;
- (BOOL)photosFaceRepresentationHasSmile;
- (double)photosFaceRepresentationBlurScore;
- (double)photosFaceRepresentationSize;
- (double)photosFaceRepresentationCenterY;
- (double)photosFaceRepresentationCenterX;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;
- (id)syncDescription;
- (id)momentShare;
- (id)cplFullRecord;
@property(readonly, retain, nonatomic) id localID;
- (BOOL)isSyncableChange;
- (BOOL)supportsCloudUpload;

// Remaining properties
@property(retain, nonatomic) NSDate *adjustmentVersion; // @dynamic adjustmentVersion;
@property(nonatomic) unsigned short ageType; // @dynamic ageType;
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(readonly, nonatomic) BOOL assetVisible; // @dynamic assetVisible;
@property(nonatomic) unsigned short baldType; // @dynamic baldType;
@property(nonatomic) double blurScore; // @dynamic blurScore;
@property(nonatomic) double centerX; // @dynamic centerX;
@property(nonatomic) double centerY; // @dynamic centerY;
@property(nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property(nonatomic) int cloudNameSource; // @dynamic cloudNameSource;
@property(retain, nonatomic) NSSet *clusterRejectedPersons; // @dynamic clusterRejectedPersons;
@property(nonatomic) int clusterSequenceNumber; // @dynamic clusterSequenceNumber;
@property(nonatomic) short confirmedFaceCropGenerationState; // @dynamic confirmedFaceCropGenerationState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned short eyeMakeupType; // @dynamic eyeMakeupType;
@property(nonatomic) unsigned short eyesState; // @dynamic eyesState;
@property(nonatomic) int faceAlgorithmVersion; // @dynamic faceAlgorithmVersion;
@property(retain, nonatomic) PLFaceCrop *faceCrop; // @dynamic faceCrop;
@property(retain, nonatomic) PLDetectedFaceGroup *faceGroup; // @dynamic faceGroup;
@property(retain, nonatomic) PLDetectedFaceGroup *faceGroupBeingKeyFace; // @dynamic faceGroupBeingKeyFace;
@property(retain, nonatomic) PLDetectedFaceprint *faceprint; // @dynamic faceprint;
@property(nonatomic) unsigned short facialHairType; // @dynamic facialHairType;
@property(nonatomic) unsigned short genderType; // @dynamic genderType;
@property(nonatomic) unsigned short glassesType; // @dynamic glassesType;
@property(retain, nonatomic) NSString *groupingIdentifier; // @dynamic groupingIdentifier;
@property(nonatomic) unsigned short hairColorType; // @dynamic hairColorType;
@property(nonatomic) BOOL hasSmile; // @dynamic hasSmile;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL hidden; // @dynamic hidden;
@property(nonatomic) BOOL isInTrash; // @dynamic isInTrash;
@property(nonatomic) BOOL isLeftEyeClosed; // @dynamic isLeftEyeClosed;
@property(nonatomic) BOOL isRightEyeClosed; // @dynamic isRightEyeClosed;
@property(nonatomic) double leftEyeX; // @dynamic leftEyeX;
@property(nonatomic) double leftEyeY; // @dynamic leftEyeY;
@property(nonatomic) unsigned short lipMakeupType; // @dynamic lipMakeupType;
@property(nonatomic) BOOL manual; // @dynamic manual;
@property(retain, nonatomic) NSString *masterIdentifier; // @dynamic masterIdentifier;
@property(nonatomic) double mouthX; // @dynamic mouthX;
@property(nonatomic) double mouthY; // @dynamic mouthY;
@property(nonatomic) int nameSource; // @dynamic nameSource;
@property(retain, nonatomic) PLPerson *person; // @dynamic person;
@property(retain, nonatomic) PLPerson *personBeingKeyFace; // @dynamic personBeingKeyFace;
@property(nonatomic) double poseYaw; // @dynamic poseYaw;
@property(nonatomic) double quality; // @dynamic quality;
@property(nonatomic) int qualityMeasure; // @dynamic qualityMeasure;
@property(retain, nonatomic) NSSet *rejectedPersons; // @dynamic rejectedPersons;
@property(retain, nonatomic) NSSet *rejectedPersonsNeedingFaceCrops; // @dynamic rejectedPersonsNeedingFaceCrops;
@property(nonatomic) double rightEyeX; // @dynamic rightEyeX;
@property(nonatomic) double rightEyeY; // @dynamic rightEyeY;
@property(nonatomic) double roll; // @dynamic roll;
@property(nonatomic) double size; // @dynamic size;
@property(nonatomic) unsigned short smileType; // @dynamic smileType;
@property(nonatomic) long long sourceHeight; // @dynamic sourceHeight;
@property(nonatomic) long long sourceWidth; // @dynamic sourceWidth;
@property(readonly) Class superclass;
@property(nonatomic) int trainingType; // @dynamic trainingType;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@property(nonatomic) double yaw; // @dynamic yaw;

@end

