//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/BrowserDataImporter.h>

#import <Safari/BookmarkMergeDriverDelegate-Protocol.h>
#import <Safari/BrowserBookmarkImportEngineDelegate-Protocol.h>

@class BookmarkMergeDriver, BookmarksUndoController, NSDictionary, NSMutableArray, NSString;
@protocol BrowserBookmarkImporterDelegate;

__attribute__((visibility("hidden")))
@interface BrowserBookmarkImporter : BrowserDataImporter <BookmarkMergeDriverDelegate, BrowserBookmarkImportEngineDelegate>
{
    unsigned long long _importOrigin;
    NSDictionary *_previouslyImportedBookmarksByImportOriginUUID;
    NSMutableArray *_reimportedBookmarks;
    BookmarkMergeDriver *_mergeDriver;
    BOOL _hasBegunBookmarkTransaction;
    id <BrowserBookmarkImporterDelegate> _delegate;
    CDUnknownBlockType _completionHandler;
    BookmarksUndoController *_bookmarksUndoController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BookmarksUndoController *bookmarksUndoController; // @synthesize bookmarksUndoController=_bookmarksUndoController;
@property(nonatomic) BOOL hasBegunBookmarkTransaction; // @synthesize hasBegunBookmarkTransaction=_hasBegunBookmarkTransaction;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak id <BrowserBookmarkImporterDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)bookmarkMergeDriver:(id)arg1 shouldMergeTitlesOfBookmark:(id)arg2 existingBookmark:(id)arg3;
- (void)_updateReimportedBookmarks;
- (void)_adoptChangesFromReimportedBookmark:(id)arg1 existingBookmark:(id)arg2;
- (id)_mergeDriver;
- (id)_existingBookmarkForReimportedBookmark:(id)arg1;
- (id)_previouslyImportedBookmarksByImportOriginUUID;
- (void)_processImportFromOrigin:(unsigned long long)arg1 bookmarkDictionary:(id)arg2 andAppendToBookmarkIfPossible:(id)arg3;
- (BOOL)_shouldImportBookmark:(id)arg1 fromOrigin:(unsigned long long)arg2;
- (id)_keyForImportInfo:(id)arg1;
- (void)_didFinishSuccessfully:(BOOL)arg1;
- (id)_importInfoForBookmarkWithImportOrigin:(unsigned long long)arg1 originUUID:(id)arg2;
- (unsigned long long)_importOrigin;
- (id)_destinationBookmarkListForCollection:(int)arg1;
- (void)importerDidFailToImportBookmarks;
- (void)importerDidFinishImportingBookmarks;
- (void)importerDidImportBookmarks:(id)arg1 fromCollection:(int)arg2;
- (void)importBookmarksUsingImporterProxy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

