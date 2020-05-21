//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHAppSelectionContext, KHTheme, KHThemeDatabase, NSArray, NSLock, NSMutableDictionary, NSRecursiveLock, NSString, PIEPhotoGroupAnalyzer;

@interface KHController : NSObject
{
    KHTheme *_currentTheme;
    BOOL _projectChanged;
    NSArray *_photoSelection;
    KHAppSelectionContext *_appSelectionContext;
    NSMutableDictionary *_imageCache;
    NSRecursiveLock *_imageCacheLock;
    NSMutableDictionary *_imageFulfillmentOperations;
    NSLock *_imageFulfillmentLock;
    PIEPhotoGroupAnalyzer *_photoSelectionAnalyzer;
    BOOL _paginationChanged;
    BOOL _fetchingAssortmentData;
    BOOL _reachabilityStatus;
    BOOL _modal;
    BOOL _isPopulating;
    BOOL _isGeneratingThemeDB;
    BOOL _themeDBWritable;
    BOOL _blockHUDs;
    BOOL _renderingComparisonLayouts;
    NSString *_assetCachePath;
    NSString *_currentThemeCategory;
    struct {
        unsigned int delegateEditProjectPhoto:1;
        unsigned int delegateStartPerformanceMonitoringTimerWithKey:1;
        unsigned int delegateStopPerformanceMonitoringTimerWithKeyComment:1;
    } _controllerFlags;
    NSString *_currentThemeBundlePath;
    KHThemeDatabase *_themeDatabase;
    id <KHPhotoAppDelegateProtocol> _delegate;
    id <MapServicesProtocol> _mapServices;
    id <KHPhotoLibraryProtocol> _library;
}

+ (struct CGImage *)createDropZoneImageForFrame:(id)arg1;
+ (struct CGImage *)createDropZoneImageForFrame:(id)arg1 renderingIntent:(unsigned long long)arg2 preferred:(id)arg3;
+ (id)dropZoneImageNames;
+ (id)themeAssetPathForAsset:(id)arg1 inLocalCache:(BOOL)arg2;
+ (id)themeAssetPathForPath:(id)arg1 inLocalCache:(BOOL)arg2;
+ (id)themeDB;
+ (BOOL)canEditPhotos;
+ (id)serialUserInitiatedQueue;
+ (id)userInitiatedQueue;
+ (id)userInteractiveQueue;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <KHPhotoLibraryProtocol> library; // @synthesize library=_library;
@property(nonatomic) __weak id <MapServicesProtocol> mapServices; // @synthesize mapServices=_mapServices;
@property(nonatomic) __weak id <KHPhotoAppDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain) KHThemeDatabase *themeDatabase; // @synthesize themeDatabase=_themeDatabase;
@property(copy) NSString *currentThemeBundlePath; // @synthesize currentThemeBundlePath=_currentThemeBundlePath;
- (BOOL)checkThemes;
- (unsigned long long)themeCount;
- (void)stopPerformanceMonitoringTimerWithKey:(id)arg1 comment:(id)arg2;
- (void)startPerformanceMonitoringTimerWithKey:(id)arg1;
- (id)letterpressVideoURL;
- (void)setModal:(BOOL)arg1;
- (BOOL)isModal;
- (BOOL)isThemeDBWritable;
- (void)setThemeDBWritable:(BOOL)arg1;
- (void)closeThemeDB;
- (void)switchToDefaultDB;
- (void)switchToUpgradeDB;
- (void)clearImageCache;
- (id)cachedImageWithKey:(id)arg1 suitableForSize:(struct CGSize)arg2 fulfillmentBlock:(CDUnknownBlockType)arg3;
- (id)_cachedImageWithKey:(id)arg1 suitableForSize:(struct CGSize)arg2;
- (void)cacheImage:(id)arg1 forKey:(id)arg2 size:(struct CGSize)arg3;
- (void)unlockImageCache;
- (void)lockImageCache;
- (id)imageFilterWithName:(id)arg1;
- (id)imageFilterNames;
- (void)printProject:(id)arg1;
- (BOOL)renderingComparisonLayouts;
- (void)setRenderingComparisonLayouts:(BOOL)arg1;
- (void)toggleTreatmentsEnabled;
- (void)_appWillTerminate:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)reachabilityStatus;
- (void)setReachabilityStatus:(BOOL)arg1;
- (void)attemptThemeDBOpenAsReadOnly:(BOOL)arg1;
- (void)attemptDBLoadAsReadOnly:(BOOL)arg1;
- (void)switchToThemeDBAtPath:(id)arg1;
- (void)setAppSelectionContext:(id)arg1;
- (id)appSelectionContext;
- (id)photoSelectionAnalyzer;
- (void)setPhotoSelection:(id)arg1 withContext:(id)arg2;
- (void)changePhotoUUIDFrom:(id)arg1 to:(id)arg2;
- (BOOL)photoSelectionPrefersPortraitOrientation;
- (void)setPhotoSelection:(id)arg1;
- (id)photoSelection;
- (id)currentConfiguration;
- (BOOL)showPageNumberDebug;
- (BOOL)useNSBundleCacheForStrings;
- (BOOL)disableDirectTextEdit;
- (void)setCurrentThemeCategory:(id)arg1;
- (id)currentThemeCategory;
- (void)setCurrentTheme:(id)arg1;
- (id)currentTheme;
- (void)requestAddPhotosToProjectEditor:(id)arg1;
- (id)sharedThemeBundlePath;
- (id)themesDatabasePath;
- (id)themesUpgradeDatabasePath;
- (id)themeAssetRoot;
- (id)themeAssetRootForDatabase:(id)arg1;
- (id)pdfCreatorString;
- (id)cachesDirectory;
- (id)temporaryDirectory;
- (long long)themeDBVersion;
- (id)themeDB;
- (id)assetCachePath;
- (void)editProjectPhoto:(id)arg1;
- (BOOL)canEditPhotos;

@end

