//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSKeyedUnarchiverDelegate.h"
#import "PVImageDelegate.h"

@class FIFOCache, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSUndoManager, PVEffect, ProjectAssetManager, TitleDefinition;

__attribute__((visibility("hidden")))
@interface Project : NSObject <PVImageDelegate, NSKeyedUnarchiverDelegate>
{
    NSString *m_path;
    NSMutableDictionary *m_project;
    BOOL m_dirty;
    BOOL m_modifiedSincePublish;
    BOOL m_readOnly;
    int m_isEditingCount;
    int m_duration;
    int m_durationForAllAssets;
    int m_editListDuration;
    NSString *m_identifier;
    NSDate *m_modDate;
    NSMutableDictionary *m_contentModesForOrientation;
    NSUndoManager *m_undoManager;
    NSMutableArray *m_projectChangeLogs;
    FIFOCache *m_kenBurnsImageCache;
    int m_suspendMusicValidate;
    int m_suspendUpdateAnchors;
    BOOL m_needsToUpdateAnchors;
    int m_projectID;
    int m_kenBurnsAcceptability;
    NSDictionary *m_editedRanges;
    BOOL m_validate;
    BOOL m_hasBeenModified;
    int m_currentTime;
    NSMutableArray *m_unusedBkgdAudioClips;
    NSMutableArray *m_deletedMediaFiles;
    struct CGSize m_currentSize;
    int m_exportHeight;
    BOOL m_missingKBSourceImage;
    NSString *m_displayName;
    int m_frameRate;
    FIFOCache *m_trailerShotCache;
    int m_suspendSave;
    BOOL _isMiro;
    BOOL _allowsSplits;
    BOOL _fadeSongForce;
    BOOL _isExportingPlist;
    id <ProjectDelegate> _delegate;
    NSArray *_lastArchiveNameAndDate;
    TitleDefinition *_defaultTitle;
    NSMutableArray *_deletedMediaFiles;
    ProjectAssetManager *_assetManager;
    NSArray *_savedEditList;
    double _fadeToBlackStartTime;
    double _fadeToBlackDuration;
    double _aspectRatio;
}

+ (id)defaultProjectImage;
+ (double)defaultAspectRatio;
+ (BOOL)trailerIsSuitableForThisDevice:(id)arg1;
+ (id)assetsDirectory:(id)arg1;
+ (id)projectWithSingleMovieClip:(id)arg1;
+ (void)setProjectClass:(Class)arg1;
+ (id)firstClipDictInEditListOfProjectPlist:(id)arg1;
+ (void)replaceProjectsURL:(id)arg1 withURL:(id)arg2 inProjectPlist:(id)arg3;
+ (void)findSharedMediaItems:(id)arg1 inProjectPlist:(id)arg2 addingToResultsMap:(id *)arg3;
+ (id)projectHolderPathFromProjectPath:(id)arg1 forWriting:(BOOL)arg2;
+ (id)projectFilePathFromProjectPath:(id)arg1 forWriting:(BOOL)arg2;
+ (struct CGSize)sizeForRenderIntent:(int)arg1 sourceSize:(struct CGSize)arg2;
+ (struct CGSize)thumbImageSize:(struct CGSize)arg1;
+ (struct CGSize)exportImageSize:(struct CGSize)arg1;
+ (struct CGSize)playBackImageSize:(struct CGSize)arg1;
+ (struct CGSize)sizeForMaxPixels:(double)arg1 sourceSize:(struct CGSize)arg2;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) BOOL isExportingPlist; // @synthesize isExportingPlist=_isExportingPlist;
@property(nonatomic) BOOL fadeSongForce; // @synthesize fadeSongForce=_fadeSongForce;
@property(nonatomic) double fadeToBlackDuration; // @synthesize fadeToBlackDuration=_fadeToBlackDuration;
@property(nonatomic) double fadeToBlackStartTime; // @synthesize fadeToBlackStartTime=_fadeToBlackStartTime;
@property(retain, nonatomic) NSArray *savedEditList; // @synthesize savedEditList=_savedEditList;
@property(retain, nonatomic) ProjectAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(retain, nonatomic) NSMutableArray *deletedMediaFiles; // @synthesize deletedMediaFiles=_deletedMediaFiles;
@property(nonatomic) BOOL allowsSplits; // @synthesize allowsSplits=_allowsSplits;
@property(nonatomic) BOOL isMiro; // @synthesize isMiro=_isMiro;
@property(retain, nonatomic) TitleDefinition *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(retain, nonatomic) NSArray *lastArchiveNameAndDate; // @synthesize lastArchiveNameAndDate=_lastArchiveNameAndDate;
@property(nonatomic) id <ProjectDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *path; // @synthesize path=m_path;
@property(nonatomic) int durationForAllAssets; // @synthesize durationForAllAssets=m_durationForAllAssets;
@property(nonatomic) int currentTime; // @synthesize currentTime=m_currentTime;
@property(nonatomic) BOOL hasBeenModified; // @synthesize hasBeenModified=m_hasBeenModified;
@property(readonly, nonatomic) int projectID; // @synthesize projectID=m_projectID;
@property(readonly, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=m_undoManager;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=m_modDate;
@property(nonatomic) BOOL readOnly; // @synthesize readOnly=m_readOnly;
@property(nonatomic) BOOL modifiedSincePublish; // @synthesize modifiedSincePublish=m_modifiedSincePublish;
- (void)fixupShotThumbnailFileNameAfterImport;
- (void)flushThumbnailTrailerShot;
- (void)saveThumbnailTrailerShot:(id)arg1 forURL:(id)arg2 index:(int)arg3 time:(int)arg4 size:(struct CGSize)arg5;
- (id)thumbnailTrailerShotForURL:(id)arg1 index:(int)arg2 time:(int)arg3 size:(struct CGSize)arg4;
- (void)assetTrailerShotCache;
- (id)trailerShotCacheDirectory;
- (id)thumbnailTrailerKeyForURL:(id)arg1 index:(int)arg2 time:(int)arg3 size:(struct CGSize)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)deleteAllExportedFiles;
- (void)deleteExportedFile:(id)arg1;
- (id)exportPresetForPlugin;
- (id)exportPresetForATV;
- (BOOL)hasKBOnly;
- (id)hasExportedFileForFullScreen:(BOOL)arg1;
- (id)hasExportedFile:(id)arg1;
- (BOOL)hasAnyExportedFile;
- (id)exportedFilePath:(id)arg1;
- (id)fileNameFromPreset:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned int filterSeed;
@property(retain, nonatomic) PVEffect *filterEffect;
@property(retain, nonatomic) NSString *filterEffectID;
- (int)displayedDurationOfClip:(id)arg1;
- (void)audioRangeForClip:(id)arg1 start:(int *)arg2 end:(int *)arg3;
- (void)audioOffsetsForClip:(id)arg1 startOffset:(int *)arg2 endOffset:(int *)arg3;
- (void)audioOffsetBoundsForClip:(id)arg1 minStart:(int *)arg2 maxStart:(int *)arg3 minEnd:(int *)arg4 maxEnd:(int *)arg5;
- (int)startOffsetForClip:(id)arg1;
- (int)startOffsetForEditListClip:(id)arg1;
- (double)durationOfEditListClipInSeconds:(id)arg1;
- (void)addForegroundAudioClips:(id)arg1 withAnchor:(id)arg2;
- (void)removeClip:(id)arg1 releaseAnchor:(BOOL)arg2;
- (void)deleteMediaFileAtURL:(id)arg1;
- (id)detachMovieAudioFromClip:(id)arg1;
- (BOOL)canDetachAudioFromClip:(id)arg1;
- (BOOL)canMoveAudioToForegroundFromClip:(id)arg1;
- (BOOL)insertMovieClip:(id)arg1 afterClip:(id)arg2;
- (void)replaceClip:(id)arg1 withClip:(id)arg2;
- (BOOL)insertClip:(id)arg1 atTime:(int)arg2;
- (BOOL)insertClip:(id)arg1 atTime:(int)arg2 adjustOtherClips:(BOOL)arg3;
- (id)duplicateClip:(id)arg1;
- (BOOL)canDuplicateClip:(id)arg1;
- (id)moveTitleToBlack:(id)arg1;
- (id)splitClip:(id)arg1 atTime:(int)arg2;
- (BOOL)canSplitClip:(id)arg1 atTime:(int)arg2;
- (id)clipsAnchoredToClip:(id)arg1;
- (id)cutawaysAnchoredToClip:(id)arg1;
- (id)audioClipsAnchoredToClip:(id)arg1;
- (BOOL)moveClipsAfterTime:(int)arg1 duration:(int)arg2;
- (unsigned long long)clipIndexInArray:(id)arg1 atTime:(int)arg2;
- (void)moveClipsInArray:(id)arg1 afterTime:(int)arg2 duration:(int)arg3;
- (void)moveClipsInArray:(id)arg1 afterTime:(int)arg2 duration:(int)arg3 except:(id)arg4;
- (id)keyframeTimes;
- (id)keyframeTimesForClips:(id)arg1;
- (id)keyframeTimesForEditListClips:(id)arg1;
- (BOOL)clip:(id)arg1 isInUseAtTime:(int)arg2;
- (id)nonTransitionClipBeforeClip:(id)arg1;
- (id)clipAfterClip:(id)arg1;
- (id)clipAfterClip:(id)arg1 inClips:(id)arg2;
- (id)clipBeforeClip:(id)arg1;
- (id)clipBeforeClip:(id)arg1 inClips:(id)arg2;
- (id)clipAfterTransitionClip:(id)arg1;
- (id)clipBeforeTransitionClip:(id)arg1;
- (id)foregroundAudioClipsInUseAtTime:(int)arg1;
- (id)backgroundAudioClipsInUseAtTime:(int)arg1;
- (id)cutawaysInUseAtTime:(int)arg1;
- (id)expandedEditList;
- (id)editListClipInUseNearTime:(int)arg1;
- (id)editListClipInUseAtTime:(int)arg1 timeFromPreviousEdit:(int *)arg2;
- (id)editListClipInUseAtTime:(int)arg1;
- (int)convertClipStartTimeToProjectTime:(id)arg1;
- (id)clipsOfType:(int)arg1 inUseFromTime:(int)arg2 toTime:(int)arg3;
- (id)clipsOfType:(int)arg1 inUseAtTime:(int)arg2;
- (id)clipsInUseAtTime:(int)arg1;
- (id)nonEditListClipsIn:(id)arg1 inUseAtTime:(int)arg2;
- (BOOL)isMovieUsed:(id)arg1;
- (BOOL)isMovie:(id)arg1 usedInList:(id)arg2;
- (id)editedRangeList;
- (int)nearestAnchoredSlotAtTime:(int)arg1 duration:(int)arg2 ignoringClip:(id)arg3 clipType:(int)arg4;
- (int)anchoredSlotAtTime:(int)arg1 duration:(int)arg2 inRange:(struct _NSRange)arg3;
- (int)availableSpaceEndingAtTime:(int)arg1 ignoringClip:(id)arg2 clipType:(int)arg3;
- (int)availableSpaceStartingAtTime:(int)arg1 ignoringClip:(id)arg2 clipType:(int)arg3;
- (struct _NSRange)availableAnchoredRangeAtTime:(int)arg1 ignoringClip:(id)arg2 clipType:(int)arg3;
- (id)availableAnchoredRangesIgnoringClip:(id)arg1 clipType:(int)arg2;
- (id)anchoredSegmentsIgnoringClip:(id)arg1 clipType:(int)arg2;
- (int)timeForNearestEdgeOfClip:(id)arg1 projectTime:(int)arg2;
- (int)snapToGuideTimeWithin:(float)arg1 ofProjectTime:(int)arg2 ignoringClip:(id)arg3 forceSnap:(char *)arg4;
- (int)snapToGuideTimeWithinInEditListWithStartOrEndPointsWithin:(float)arg1 ofProjectTime:(int)arg2 ignoringClip:(id)arg3;
- (id)usedTrackNames;
- (unsigned int)numberOfForegroundAudioTracks;
- (BOOL)isEditing;
- (void)endEditingOfTrailer;
- (id)endEditing;
- (void)startEditing;
- (void)updateAnchorsIfNeeded;
- (void)resumeUpdateAnchors;
- (void)suspendUpdateAnchors;
- (void)updateAnchors;
- (void)updateAnchorsForClip:(id)arg1;
- (void)removeAnchorForClip:(id)arg1;
- (long long)indexOfEditListClipAtTime:(int)arg1;
- (int)startOffsetForEditListIndex:(long long)arg1;
- (void)endUndoGroup;
- (void)beginUndoGroup:(id)arg1;
- (void)undoProjectChanges:(id)arg1;
- (void)noteClipsChangedInLog:(id)arg1;
- (void)captureContentsOfClip:(id)arg1 needsDisplay:(BOOL)arg2;
- (BOOL)isDirty;
- (void)markDirty;
- (void)markDirty:(BOOL)arg1;
- (void)rebuildFingerprints:(BOOL)arg1;
- (int)maxAllowedDurationOfTransition:(id)arg1 simple:(int *)arg2;
- (int)minTotalDurationOfClip:(id)arg1;
- (int)minClipDurationForLeftEatDuration:(int)arg1 rightEatDuration:(int)arg2 totalDuration:(BOOL)arg3;
- (void)reattachTransitions;
- (int)allowedTransitionDuration:(int)arg1;
- (void)detachTransitions;
- (void)appendVideoClip:(id)arg1;
- (id)imageAtTime:(int)arg1 withSize:(struct CGSize)arg2;
- (id)videoPreviewImageOfSize:(struct CGSize)arg1;
- (id)thumbnailImage;
@property(readonly, nonatomic) NSString *temporaryUniqueIdentifier;
- (double)durationSecondsFromFrameTime:(int)arg1;
- (double)secondsFromProjectTime:(int)arg1;
- (double)durationInSeconds;
- (int)editListDuration;
- (int)duration;
- (BOOL)isBiggerThan720;
- (struct CGSize)naturalSize;
- (struct CGSize)applyAspectRatioTo16by9Size:(struct CGSize)arg1;
- (void)sizeChanged;
- (BOOL)useClipWithRotation;
- (float)maxSourceFrameRate;
- (BOOL)useHEVCcontent:(BOOL)arg1;
- (BOOL)hasHEVCContent:(id)arg1 clipType:(int)arg2 onlyMovies:(BOOL)arg3;
- (BOOL)use2160Pcontent:(BOOL)arg1;
- (BOOL)has2160PContent:(id)arg1 clipType:(int)arg2 onlyMovies:(BOOL)arg3;
- (BOOL)use1080Pcontent:(BOOL)arg1;
- (BOOL)has1080Content:(id)arg1 clipType:(int)arg2 onlyMovies:(BOOL)arg3;
@property(readonly, nonatomic) BOOL exportAt60fps;
@property(readonly, nonatomic) BOOL playbackAt60fps;
- (BOOL)containsSufficient60fpsContent;
- (BOOL)miroContainsSufficient60fpsContent;
- (int)clipDurationGoodFor60fps:(id)arg1;
- (int)movieOrKBDurationGoodFor60fps:(id)arg1;
- (int)naturalFrameRate;
- (id)previousClipOfType:(int)arg1 beforeClip:(id)arg2;
- (id)nextClipOfType:(int)arg1 afterClip:(id)arg2;
- (id)clipsForClipType:(int)arg1;
- (id)firstMovieClip;
- (id)lastClip;
- (id)firstClip;
@property(retain, nonatomic) NSMutableArray *cutaways;
- (void)restoreBackgroundAudioClips:(id)arg1;
- (id)saveBackgroundAudioClips;
- (void)restoreCutaways:(id)arg1;
- (id)saveCutaways;
- (void)restoreForegroundAudioClips:(id)arg1;
- (id)saveForegroundAudioClips;
- (id)restoredAnchoredClips:(id)arg1;
- (id)saveAnchoredClipsInList:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *trailerDict;
@property(retain, nonatomic) NSMutableArray *foregroundAudioClips;
@property(retain, nonatomic) NSMutableArray *backgroundAudioClips;
@property(retain, nonatomic) NSMutableArray *editList;
- (id)editInfo;
- (void)updateTrailerMovieNameFieldsFromUnformattedString:(id)arg1;
- (BOOL)renameTo:(id)arg1;
- (BOOL)rename:(id)arg1 to:(id)arg2 withPath:(id)arg3;
- (void)flushMajorChanges;
- (BOOL)resumeSave;
- (void)suspendSave;
- (BOOL)save;
- (void)prepareForCloudPersistence;
- (void)trailerIsSavingToPath:(id)arg1;
- (BOOL)saveToPath:(id)arg1;
- (id)plistAsDataWithError:(id *)arg1;
- (id)simpleEditInfo;
- (id)convertToPlist;
@property(retain, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *persistedStorageName;
@property(readonly, nonatomic) NSString *projectVersion;
- (void)validate;
- (int)numberOfNewsIntroTitlesUsed:(id)arg1 matchesClip:(char *)arg2;
- (void)validateEditListTrack;
- (id)addAutomaticTransitions;
- (void)didFinishTrimmingClip;
- (void)willBeginTrimmingClip:(id)arg1;
- (void)resumeMusicValidate;
- (void)suspendMusicValidate;
- (void)validateMusic;
- (void)validateCutaways;
- (void)validateForegroundAudioTracks;
- (void)validateBackgroundAudioTracks;
- (void)setProjectDictionary:(id)arg1 validate:(BOOL)arg2;
@property(retain, nonatomic) NSMutableDictionary *projectDictionary;
- (BOOL)clipsOnlyHaveAudioCharacteristics;
- (BOOL)isEmpty;
@property(readonly, nonatomic) int aspect;
- (void)updateModificationDate;
- (long long)compareModificationDates:(id)arg1;
@property(nonatomic) unsigned long long frameRateMode;
@property(retain, nonatomic) NSString *audioTimePitchAlgorithm;
- (int)minimumClipDurationForValidation;
@property(copy, nonatomic) NSString *defaultTransitionType;
@property(nonatomic) BOOL fadeOutToBlack;
@property(nonatomic) BOOL fadeInFromBlack;
@property(nonatomic) BOOL allowOriginalMusicForNoneTheme;
@property(nonatomic) BOOL useThemeAudio;
@property(readonly, nonatomic) BOOL isSimpleProject;
@property(readonly, nonatomic, getter=isTrailer) BOOL trailer;
@property(retain, nonatomic) NSString *themeID;
- (BOOL)hasMissingAssets;
- (void)setupUndo;
- (void)createSubDirectories;
- (id)localExportDirectory;
@property(readonly, nonatomic) NSString *exportDirectory;
@property(readonly, nonatomic) NSString *assetsDirectory;
@property(readonly, nonatomic) NSString *identifier;
- (void)checkForReadOnlyCookie;
- (void)dealloc;
- (void)cleanupUnusedMediaFiles;
- (BOOL)isURL:(id)arg1 usedInList:(id)arg2;
- (id)initWithContentsOfFile:(id)arg1;
- (void)didInitWithContentsOfFile;
- (id)initWithContentsOfFile:(id)arg1 validate:(BOOL)arg2;
- (id)loadFromProjectData:(id)arg1;
- (void)updateClipsForCapriWithKonaProject:(id)arg1;
- (BOOL)usesOriginalNoneThemeMusic;
- (void)convertPlistToCustomObjects:(id)arg1;
- (void)cleanupProjectDictionary:(id)arg1;
- (void)cleanupMalformedAudioPaths:(id)arg1;
- (id)init;
- (id)initWithValidState:(BOOL)arg1;
- (id)_detectedFacesInImage:(id)arg1 clip:(id)arg2;
- (id)_keyForRenderingIntent:(int)arg1;
- (id)clips;
- (void)_enumerateMediaClipsUsingBlock:(CDUnknownBlockType)arg1;
- (id)mediaClipsInfoOmittingFirstClip:(BOOL)arg1;
- (id)copyMediaClipsOmittingFirstClip:(BOOL)arg1;
- (BOOL)okToDeleteFile:(id)arg1;
- (void)replacePhotosToKenBurnsURLs;
- (id)replaceURL:(id)arg1 withURL:(id)arg2;
- (id)replaceURL:(id)arg1 inMovie:(id)arg2 andEditItem:(id)arg3 withURL:(id)arg4;
- (unsigned long long)estimatedBundleSizeIncludingExternalAssets:(BOOL)arg1 bundleSize:(unsigned long long *)arg2 externalMap:(id *)arg3;
- (BOOL)isImageValid:(id)arg1 renderingIntent:(int)arg2 size:(struct CGSize *)arg3;
- (struct CGImage *)imageForURL:(id)arg1 renderingIntent:(int)arg2;
- (void)saveClipImageToProject:(id)arg1 clip:(id)arg2;
- (id)md5StringFromData:(id)arg1;
- (void)saveClipAssetToProject:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 excludedRenderingIntents:(id)arg3;
- (void)saveClipAssetToProject:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)saveImageOfAssetRepresentation:(id)arg1;
- (id)saveThumbnailOfAssetRepresentation:(id)arg1;
- (id)savePlaybackImageOfAssetRepresentation:(id)arg1;
- (id)saveImageOfAssetRepresentation:(id)arg1 renderingIntent:(int)arg2;
- (id)markFacesInImage:(id)arg1 highAccuracy:(BOOL)arg2;
- (id)scaleDownOrRotateIfNeeded:(id)arg1;
- (id)scaleAndSaveImageToProject:(id)arg1 cacheKey:(id)arg2 renderingIntent:(int)arg3;
- (void)zeroOutPanAndZoomForMultiUpClip:(id)arg1;
- (void)removePanAndZoomForKenBurnsClip:(id)arg1;
- (void)_addPanAndZoomForKenBurnsClip:(id)arg1 image:(id)arg2;
- (void)addPanAndZoomForKenBurnsClip:(id)arg1;
- (struct CGRect)rectEnclosingAllFacesInKenBurnsClip:(id)arg1;
- (unsigned long long)numberOfDetectedFacesInKenBurnsClip:(id)arg1;
- (id)detectedFaceRectsInKenBurnsClip:(id)arg1;
- (id)detectedFacesInKenBurnsClip:(id)arg1;
- (void)adjustDurationForKBClip:(id)arg1 imageSize:(struct CGSize)arg2;
- (struct CGRect)adjustKBRect:(struct CGRect)arg1 toContainRect:(struct CGRect)arg2 withinImageSize:(struct CGSize)arg3;
- (struct CGRect)rectFromKenBurnsPosition:(CDStruct_869f9c67)arg1 outputAspectRatio:(float)arg2 image:(id)arg3;
- (struct CGRect)verticallyClampedKenBurnsRect:(struct CGRect)arg1 imageSize:(struct CGSize)arg2;
- (struct CGRect)horizontallyClampedKenBurnsRect:(struct CGRect)arg1 imageSize:(struct CGSize)arg2;
- (void)nextKenBurnsStart:(CDStruct_869f9c67 *)arg1 end:(CDStruct_869f9c67 *)arg2;
- (void)regenerateKBimageFilesIfNecessary:(BOOL)arg1;
- (id)imageMatchingCurrentDeviceSizeForIdentifierURL:(id)arg1 sourceSize:(struct CGSize)arg2 renderingIntent:(int)arg3;
- (id)imageForIdentifierURL:(id)arg1 renderingIntent:(int)arg2;
- (void)setKenBurnsImage:(id)arg1 forCacheKey:(id)arg2 renderingIntent:(int)arg3;
- (id)filePathForIdentifierURL:(id)arg1 renderingIntent:(int)arg2;
- (id)filePathForCacheKey:(id)arg1;
- (id)cacheKeyForFileURL:(id)arg1 renderingIntent:(int)arg2;
- (id)cacheKeyForAssetsLibraryURL:(id)arg1 renderingIntent:(int)arg2;
- (id)cacheKeyForPhotosIdentifierURL:(id)arg1 renderingIntent:(int)arg2;
- (id)cacheKeyForKenBurnsIdentifierURL:(id)arg1 renderingIntent:(int)arg2;
- (id)cacheKeyForIdentifierURL:(id)arg1 renderingIntent:(int)arg2;
- (BOOL)shouldUseDerivativesDirectly;
- (BOOL)shouldCopyImages;
- (BOOL)regenerateImagesIfNecessaryForIdentifierURL:(id)arg1 kbInfo:(id)arg2 exportOnly:(BOOL)arg3;
- (void)didExport;
- (void)willStartExport:(id)arg1;
- (unsigned long long)bytesNeededForMultipleExports:(id)arg1;
- (unsigned long long)bytesNeededForExport:(id)arg1;
- (unsigned long long)estimatedSizeOfPassThroughExport;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

