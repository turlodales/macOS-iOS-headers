//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ICSearchIndexableIdentifiers;

@protocol ICSearchIndexerContextDelegate
- (void)indexerContextObjectsDidChangeWithUpdateCount:(unsigned long long)arg1 deletedIdentifiers:(ICSearchIndexableIdentifiers *)arg2 addedIdentifiers:(ICSearchIndexableIdentifiers *)arg3 updatedIdentifiers:(ICSearchIndexableIdentifiers *)arg4 immediateIdentifiers:(ICSearchIndexableIdentifiers *)arg5;
- (void)indexerContextDidUnpauseIndexing;
- (void)indexerContextDidPauseIndexing;
@end

