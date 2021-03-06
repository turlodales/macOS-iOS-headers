//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PSITable.h>

@class PSIStatement;

@interface PSIWordEmbeddingTable : PSITable
{
    PSIStatement *_insertStatement;
    PSIStatement *_insertPrefixStatement;
    PSIStatement *_deleteStatement;
    PSIStatement *_deletePrefixStatement;
    PSIStatement *_checkStatement;
    PSIStatement *_selectMatchesStatement;
    PSIStatement *_selectStatement;
    struct __CFLocale *_locale;
    BOOL _localeIsGerman;
}

- (void).cxx_destruct;
- (id)wordEmbeddingVersion;
- (void)removeWord:(id)arg1;
- (void)insertWord:(id)arg1 synonyms:(id)arg2;
- (BOOL)isInsertedWithWord:(id)arg1;
- (id)wordEmbeddingsForToken:(id)arg1;
- (id)matchesForToken:(id)arg1;
- (id)dumpWordEmbeddingTable;
- (void)cacheSearchableStatements;
- (void)cacheWritableStatements;
- (void)clear;
- (void)finalizze;
- (id)initWithDelegate:(id)arg1 searchable:(BOOL)arg2 writable:(BOOL)arg3 locale:(id)arg4;

@end

