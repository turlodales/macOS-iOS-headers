//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentImageModel : ICAttachmentModel
{
}

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
- (BOOL)canConvertToHTMLForSharing;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (struct CGAffineTransform)previewImageOrientationTransform;
- (BOOL)supportsQuickLook;
- (struct CGSize)sizeByCroppingSize:(struct CGSize)arg1;
- (void)updateAttachmentSize;
- (void)addLocation;
- (void)updateFileBasedAttributes;
- (BOOL)shouldCropImage;
- (BOOL)supportsImageClassification;
- (BOOL)supportsOCR;
- (BOOL)needsFullSizePreview;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1;
- (BOOL)canSaveURL;
- (id)saveURL;
- (BOOL)canMarkup;
- (BOOL)showThumbnailInNoteList;
- (BOOL)hasThumbnailImage;
- (BOOL)hasPreviews;
- (id)previewItemTitle;
- (id)previewImageTypeUTI;

@end

