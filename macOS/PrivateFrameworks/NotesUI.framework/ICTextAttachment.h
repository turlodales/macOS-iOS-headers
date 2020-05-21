//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesUI/ICBaseTextAttachment.h>

@class NSString;

@interface ICTextAttachment : ICBaseTextAttachment
{
}

+ (double)defaultAttachmentThumbnailViewHeight;
+ (BOOL)textAttachmentIsContent:(id)arg1;
+ (id)textAttachmentWithAttachment:(id)arg1;
+ (Class)textAttachmentClassForAttachment:(id)arg1;
- (struct CGRect)attachmentBoundsIncludingMarginsFromAttachmentBounds:(struct CGRect)arg1;
- (CDStruct_d2b197d1)attachmentBoundsMargins;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (double)availableWidthForTextContainer:(id)arg1;
- (struct CGSize)attachmentSizeForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2;
- (struct CGSize)attachmentSizeForTextContainer:(id)arg1;
@property(readonly, nonatomic) NSString *viewIdentifier;
- (Class)attachmentViewControllerClass;
- (Class)attachmentViewClass;
- (id)newlyCreatedViewControllerForManualRendering:(BOOL)arg1 layoutManager:(id)arg2;
- (id)newlyCreatedViewForManualRendering;
- (id)newlyCreatedView;
@property(readonly, nonatomic) BOOL containsFindableText;
- (BOOL)supportsMultipleThumbnailsOnSameLine;
- (BOOL)supportsThumbnailView;
- (BOOL)requiresSpaceAfterAttachmentForPrinting;
- (id)attachmentAsNSTextAttachment;
- (id)attachmentFileWrapper;
- (id)initWithData:(id)arg1 ofType:(id)arg2;

@end

