//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICAttachmentModel.h"

#import "NSFilePromiseProviderDelegate.h"
#import "NSPasteboardWriting.h"
#import "QLPreviewItem.h"

@class NSArray, NSString, NSURL;

@interface ICAttachmentModel (UI) <QLPreviewItem, NSPasteboardWriting, NSFilePromiseProviderDelegate>
+ (id)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2 uti:(id)arg3;
+ (id)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2;
- (void)filePromiseProvider:(id)arg1 writePromiseToURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)filePromiseProvider:(id)arg1 fileNameForType:(id)arg2;
- (id)forceCreateFilePromiseProvider;
- (id)filePromiseProvider;
- (id)pasteboardPropertyListForType:(id)arg1;
- (unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2;
- (id)writableTypesForPasteboard:(id)arg1;
@property(readonly, nonatomic) BOOL requiresFilePromiseForDrags;
- (void)drawPreviewInRect:(struct CGRect)arg1;
- (id)fileIconWithPreferredSize:(struct CGSize)arg1;
- (id)activityItems;
@property(readonly, nonatomic) NSArray *quicklookPreviewItems;
- (id)itemProvider;
@property(readonly, nonatomic) CDUnknownBlockType genericBrickLargeThumbnailCreator;
@property(readonly, nonatomic) CDUnknownBlockType genericBrickThumbnailCreator;
@property(readonly, nonatomic) CDUnknownBlockType genericListThumbnailCreator;
@property(readonly, nonatomic) BOOL needToPostProcessAttachment;
- (void)didCancelPreviewGeneratorOperation;
@property(readonly, nonatomic) BOOL requiresNetworkToGeneratePreview;
@property(readonly, nonatomic) BOOL generatePreviewsDuringCloudActivity;
@property(readonly, nonatomic) BOOL generateAsynchronousPreviews;
@property(readonly, nonatomic) BOOL needToGeneratePreviews;
- (void)classifyImageInOperation:(id)arg1;
- (void)generateOCRInOperation:(id)arg1;
- (BOOL)generatePreviewsInOperation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id previewItemDisplayState;
@property(readonly) NSString *previewItemTitle;
@property(readonly) NSURL *previewItemURL;
@property(readonly) Class superclass;
@end

