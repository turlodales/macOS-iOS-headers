//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INVocabularyGenerationDocument, _INVocabularyStoreManager;

@interface _INSyncTransaction : NSObject
{
    NSString *_pathToLatestVocabularyDocument;
    NSString *_pathToStagedVocabularyDocument;
    NSString *_pathToSentVocabularyDocument;
    NSString *_syncSlot;
    _INVocabularyStoreManager *_storeManager;
    BOOL _deleteExistingVocabulary;
    BOOL _vocabularyUpdatesEnabled;
    BOOL _fullResetRequired;
    _INVocabularyGenerationDocument *_latest;
    _INVocabularyGenerationDocument *_sent;
}

+ (id)beginTransactionForBundleID:(id)arg1 bundlePath:(id)arg2 syncSlot:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) BOOL fullResetRequired; // @synthesize fullResetRequired=_fullResetRequired;
@property(readonly, nonatomic) _INVocabularyGenerationDocument *latestVocabularyDocument; // @synthesize latestVocabularyDocument=_latest;
- (void)_beginTransaction;
- (BOOL)_isMissingLatestFileError:(id)arg1;
- (void)_deleteInvalidSavedData;
- (id)_emptySentDocument;
@property(readonly, nonatomic) _INVocabularyGenerationDocument *sentVocabularyDocument; // @synthesize sentVocabularyDocument=_sent;
- (id)calculateDiff;
- (void)endTransactionWithFinalAnchor:(id)arg1;
- (void)_saveAndCleanup;
- (id)_initWithVocabularyManager:(id)arg1 syncSlot:(id)arg2 deleteExistingVocabulary:(BOOL)arg3;

@end

