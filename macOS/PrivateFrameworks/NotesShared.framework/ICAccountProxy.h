//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICNoteContainer.h"

@class ICAccount, ICFolderCustomNoteSortType, NSArray, NSData, NSManagedObjectContext, NSString;

@interface ICAccountProxy : NSObject <ICNoteContainer>
{
    ICAccount *_account;
}

+ (id)keyPathsForValuesAffectingVisibleNotesCount;
+ (id)accountProxyWithAccount:(id)arg1;
- (void).cxx_destruct;
@property(retain) ICAccount *account; // @synthesize account=_account;
- (id)customNoteSortTypeValue;
- (BOOL)mergeWithSubFolderMergeableData:(id)arg1;
- (void)updateSubFolderMergeableDataChangeCount;
- (void)saveSubFolderMergeableDataIfNeeded;
@property(retain, nonatomic) NSData *subFolderOrderMergeableData;
@property(readonly, nonatomic) NSArray *visibleSubFolders;
@property(readonly, nonatomic) NSString *containerIdentifier;
@property(readonly, nonatomic) BOOL isTrashFolder;
- (BOOL)isModernCustomFolder;
@property(readonly, nonatomic) BOOL isAllNotesContainer;
@property(readonly, nonatomic) BOOL canBeSharedViaICloud;
@property(readonly, nonatomic) BOOL isSharedViaICloud;
- (BOOL)isDeleted;
- (id)noteVisibilityTestingForSearchingAccount;
@property(readonly, nonatomic) BOOL supportsEditingNotes;
- (id)visibleNoteContainerChildren;
- (id)detailForTableViewCell;
- (id)titleForTableViewCell;
- (id)titleForNavigationBar;
- (BOOL)noteIsVisible:(id)arg1;
- (unsigned long long)visibleNotesCount;
- (id)visibleNotes;
@property(readonly, nonatomic) ICFolderCustomNoteSortType *customNoteSortType;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForPinnedNotes;
- (id)predicateForVisibleNotes;
- (BOOL)supportsVisibilityTestingType:(long long)arg1;
- (id)accountName;
@property(readonly) NSManagedObjectContext *managedObjectContext;
@property(readonly, nonatomic) ICAccount *noteContainerAccount;
- (BOOL)isLeaf;
- (long long)compare:(id)arg1;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

