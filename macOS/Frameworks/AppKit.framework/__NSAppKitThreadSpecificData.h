//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSKeyValueDependencyContext, NSMapTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface __NSAppKitThreadSpecificData : NSObject
{
    void *NSPThreadSelf;
    id NSCurrentGraphicsContext;
    id NSCGSContextThreadStateStack;
    id NSCurrentAppearance;
    id NSThreadFocusState;
    id NSThreadFocusStack;
    id NSCurrentNibLocalizedStringsBundles;
    id NSGlyphGeneratorCache;
    id NSActionCellReplacementString;
    struct _NSRange NSActionCellSelectionRange;
    id NSAlertCache;
    id NSCurrentDisplayCycle;
    unsigned int NSCurrentDisplayCycleTransactionSeed;
    id NSDisplayOperationStack;
    id NSPeriodicEventSource;
    id NSOriginalVersionDocument;
    id NSCurrentDocumentVersion;
    long long NSLockCount;
    id NSCurrentPrintOperation;
    id NSPrintInfoStorage;
    unsigned long long NSCachedTitleCellMask;
    id NSCachedTitleCellTitle;
    struct CGSize NSCachedTitleCellSize;
    id NSCurrentNibLoadingBundles;
    id NSCurrentNibPaths;
    void *NSStringDrawingTextStorageSettings;
    id NSCurrentOpenGLContext;
    NSMapTable *NSWindowDisableFlushCounts;
    NSMapTable *NSWindowDisablePostingCounts;
    long long NSThreadSequenceNumber;
    NSKeyValueDependencyContext *NSCurrentKeyValueDependencyContext;
    NSMutableArray *NSKeyValueDependencyContextStack;
    unsigned int NSCriticalWaitTimer;
    BOOL NSAutoreleasePoolIsInstalled;
}

- (id)init;

@end

