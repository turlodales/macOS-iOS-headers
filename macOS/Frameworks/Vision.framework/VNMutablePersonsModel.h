//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNPersonsModel.h>

#import "VNPersonsModelDataDelegate.h"

@class NSString, VNPersonsModelData, VNPersonsModelFaceModel;

@interface VNMutablePersonsModel : VNPersonsModel <VNPersonsModelDataDelegate>
{
    VNPersonsModelData *_modelData;
    VNPersonsModelFaceModel *_faceModel_DO_NOT_ACCESS_DIRECTLY;
}

+ (id)newModelFromVersion:(unsigned long long)arg1 objects:(id)arg2 error:(id *)arg3;
+ (id)supportedWriteVersions;
+ (id)_version1ModelWithObjects:(id)arg1 error:(id *)arg2;
+ (id)configurationFromLoadedObjects:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (void)personsModelDataWasModified:(id)arg1;
- (BOOL)removePersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)removeAllFaceObservationsFromPersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)removeFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)addFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)writeToURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)dataWithOptions:(id)arg1 error:(id *)arg2;
- (BOOL)_writeToUnopenedStream:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)writeToStream:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)_getModelWritingImplementation:(CDUnknownFunctionPointerType *)arg1 selector:(SEL *)arg2 version:(unsigned long long *)arg3 forOptions:(id)arg4;
- (BOOL)_getModelWritingImplementation:(CDUnknownFunctionPointerType *)arg1 selector:(SEL *)arg2 forVersion:(unsigned long long)arg3 readOnly:(BOOL)arg4;
- (BOOL)writeReadOnlyVersion1ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(struct CC_MD5state_st *)arg3 error:(id *)arg4;
- (BOOL)_writeReadOnlyVersion:(unsigned long long)arg1 toOutputStream:(id)arg2 options:(id)arg3 md5Context:(struct CC_MD5state_st *)arg4 error:(id *)arg5;
- (BOOL)writeVersion1ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(struct CC_MD5state_st *)arg3 error:(id *)arg4;
- (BOOL)_writeVersion1ConfigurationToOutputStream:(id)arg1 md5Context:(struct CC_MD5state_st *)arg2 error:(id *)arg3;
- (BOOL)_writeVersion1InformationToOutputStream:(id)arg1 md5Context:(struct CC_MD5state_st *)arg2 error:(id *)arg3;
- (id)upToDateFaceModelWithCanceller:(id)arg1 error:(id *)arg2;
@property(readonly, copy) NSString *description;
- (id)_lastModificationDate;
- (void)_modelWasModified;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

