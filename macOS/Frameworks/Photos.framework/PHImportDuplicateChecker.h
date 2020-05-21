//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHPhotoLibraryChangeObserver.h"

@class NSDate, NSMutableDictionary, NSMutableSet, NSString, PFDispatchQueue, PHPhotoLibrary;

@interface PHImportDuplicateChecker : NSObject <PHPhotoLibraryChangeObserver>
{
    NSMutableDictionary *_avchdAssetIdentifierCache;
    NSMutableDictionary *_sizeNameCache;
    NSMutableDictionary *_assetIdentifierCache;
    NSMutableDictionary *_dupInfoByObjectID;
    NSDate *_lastChange;
    NSMutableSet *_updatedDupInfos;
    PFDispatchQueue *_queue;
    PHPhotoLibrary *_library;
    NSMutableDictionary *_foundPPTData;
    NSMutableDictionary *_notFoundPPTData;
    NSMutableDictionary *_generatedPPTData;
}

+ (void)removeLibrary:(id)arg1;
+ (void)addLibrary:(id)arg1;
+ (id)fetchAssetsFromLibrary:(id)arg1 withPredicates:(id)arg2;
+ (id)dateWithDate:(id)arg1;
+ (id)doneWithDuplicateCheckerForLibrary:(id)arg1 forClient:(id)arg2;
+ (id)duplicateCheckerForClient:(id)arg1 andLibrary:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *generatedPPTData; // @synthesize generatedPPTData=_generatedPPTData;
@property(retain, nonatomic) NSMutableDictionary *notFoundPPTData; // @synthesize notFoundPPTData=_notFoundPPTData;
@property(retain, nonatomic) NSMutableDictionary *foundPPTData; // @synthesize foundPPTData=_foundPPTData;
@property(retain, nonatomic) PHPhotoLibrary *library; // @synthesize library=_library;
@property(retain) PFDispatchQueue *queue; // @synthesize queue=_queue;
- (id)generatePPTData;
- (void)photoLibraryDidChange:(id)arg1;
- (id)getAssetObjectIdsFromObjectIds:(id)arg1;
- (void)checkForDuplicates:(id)arg1 considerItemsInTrash:(BOOL)arg2 forEach:(CDUnknownBlockType)arg3 atEnd:(CDUnknownBlockType)arg4;
- (id)checkForDuplicate:(id)arg1 considerItemsInTheTrash:(BOOL)arg2;
- (void)recordTimeSinceStart:(double)arg1 inData:(id)arg2 forKey:(id)arg3;
- (BOOL)findFingerprint:(id)arg1 forItem:(id)arg2 inCache:(id)arg3 considerTrash:(BOOL)arg4;
- (id)findMatchingAssetsForItem:(id)arg1 inSet:(id)arg2 matchingDate:(id *)arg3 confidence:(unsigned char *)arg4;
- (id)filterDuplicatesForItem:(id)arg1 duplicateSet:(id)arg2 considerItemsInTrash:(BOOL)arg3;
- (void)dePopulateCachesWithObjectID:(id)arg1;
- (void)removeDuplicateInfo:(id)arg1 forFingerprint:(id)arg2 inCache:(id)arg3;
- (void)populateCachesWithAssetInfo:(id)arg1;
- (void)setDupInfo:(id)arg1 forFingerprint:(id)arg2 inCache:(id)arg3;
- (void)updateAssetsFromDupInfos;
- (id)initWithLibrary:(id)arg1;
- (unsigned long long)populateCachesWithAssetsInfos:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

