//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NFNote.h"

#import "ICSearchIndexableNote.h"

@class NSArray, NSString;

@interface NFNote (IC) <ICSearchIndexableNote>
- (id)noteAsPlainText;
@property(readonly, nonatomic) NSString *identifier;
- (id)dataForTypeIdentifier:(id)arg1;
- (id)searchableItemAttributeSet;
- (id)userActivityContentAttributeSet;
- (id)searchDomainIdentifier;
- (id)searchIndexingIdentifier;
- (id)contentIdentifier;
- (BOOL)isSharedReadOnly;
- (BOOL)isSharedViaICloudFolder;
- (BOOL)isSharedViaICloud;
- (id)contentInfoText;
- (id)noteAsPlainTextWithoutTitle;
@property(readonly, nonatomic) NSArray *noteCellKeyPaths;
- (BOOL)isPasswordProtected;
- (BOOL)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultType;
- (unsigned long long)searchResultsSection;
- (id)authorsExcludingCurrentUser;
- (id)modificationDate;
- (id)creationDate;
- (id)dateForCurrentSortType;
- (long long)visibilityTestingType;
- (id)accountName;
- (id)folderNameForNoteList;
- (id)folderName;
- (id)trimmedTitle;
- (BOOL)isMovable;
- (BOOL)isHiddenFromSearch;
@property(readonly, nonatomic) BOOL isModernNote;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id folder;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

