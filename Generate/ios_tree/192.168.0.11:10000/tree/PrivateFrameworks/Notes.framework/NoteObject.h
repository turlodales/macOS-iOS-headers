/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteObject : NSManagedObject <ICLegacyNote, ICSearchIndexableNote>

@property (nonatomic, readonly) <ICLegacyAccount> *account;
@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, retain) NSSet *attachments;
@property (nonatomic, retain) NSString *author;
@property (nonatomic, retain) NoteBodyObject *body;
@property (nonatomic, retain) NSNumber *containsCJK;
@property (nonatomic, retain) NSString *content;
@property (nonatomic, readonly) NSString *contentAsPlainText;
@property (nonatomic, readonly) NSString *contentAsPlainTextPreservingNewlines;
@property (nonatomic, retain) NSNumber *contentType;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, readonly) long long currentStatus;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSNumber *deletedFlag;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *externalContentRef;
@property (nonatomic, retain) NSNumber *externalFlags;
@property (nonatomic, retain) NSData *externalRepresentation;
@property (nonatomic, retain) NSNumber *externalSequenceNumber;
@property (nonatomic, retain) NSNumber *externalServerIntId;
@property (nonatomic) unsigned long long flags;
@property (nonatomic, readonly) <ICLegacyFolder> *folder;
@property (nonatomic, readonly, retain) NSString *guid;
@property (nonatomic, readonly) bool hasUnreadChanges;
@property (nonatomic, readonly) bool hasValidServerIntId;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *htmlString;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) NSNumber *integerId;
@property (nonatomic, readonly) bool isBeingMarkedForDeletion;
@property (nonatomic, retain) NSNumber *isBookkeepingEntry;
@property (nonatomic, readonly) bool isDeletedOrInTrash;
@property (nonatomic, readonly) bool isMarkedForDeletion;
@property (nonatomic, readonly) bool isModernNote;
@property (nonatomic, readonly) bool isPinned;
@property (nonatomic, readonly) bool isPlainText;
@property (nonatomic) bool isPlainText;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, readonly) NSSet *noteCellKeyPaths;
@property (nonatomic, readonly) NSURL *noteId;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic, retain) NSString *serverId;
@property (nonatomic) long long serverIntId;
@property (nonatomic, retain) NoteStoreObject *store;
@property (nonatomic, retain) NSString *summary;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, retain) NSString *title;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

- (id)accountName;
- (id)authorsExcludingCurrentUser;
- (bool)belongsToCollection:(id)arg1;
- (bool)containsAttachments;
- (id)content;
- (id)contentAsPlainText;
- (id)contentAsPlainTextPreservingNewlines;
- (id)contentIdentifier;
- (id)contentInfoText;
- (long long)currentStatus;
- (id)dataForTypeIdentifier:(id)arg1;
- (id)dataSourceIdentifier;
- (id)defaultTitleForEmptyNote;
- (id)externalContentRef;
- (id)externalRepresentation;
- (unsigned long long)flags;
- (id)folderName;
- (id)folderNameForNoteList;
- (bool)hasUnreadChanges;
- (bool)hasValidServerIntId;
- (id)identifier;
- (bool)isBeingMarkedForDeletion;
- (bool)isDeletable;
- (bool)isDeletedOrInTrash;
- (bool)isHiddenFromSearch;
- (bool)isMarkedForDeletion;
- (bool)isModernNote;
- (bool)isMovable;
- (bool)isPasswordProtected;
- (bool)isPinned;
- (bool)isPlainText;
- (bool)isSharedReadOnly;
- (bool)isSharedViaICloud;
- (bool)isSharedViaICloudFolder;
- (void)markForDeletion;
- (id)noteAsPlainTextWithoutTitle;
- (id)noteCellKeyPaths;
- (id)noteId;
- (id)searchDomainIdentifier;
- (id)searchIndexingIdentifier;
- (bool)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultType;
- (unsigned long long)searchResultsSection;
- (id)searchableItemAttributeSet;
- (unsigned long long)sequenceNumber;
- (long long)serverIntId;
- (void)setContent:(id)arg1;
- (void)setExternalContentRef:(id)arg1;
- (void)setExternalRepresentation:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setIsPlainText:(bool)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setServerIntId:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)trimmedTitle;
- (id)userActivityContentAttributeSet;
- (long long)visibilityTestingType;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)account;
- (id)createAttachmentWithName:(id)arg1;
- (id)folder;
- (id)htmlString;
- (void)setHtmlString:(id)arg1;

@end
