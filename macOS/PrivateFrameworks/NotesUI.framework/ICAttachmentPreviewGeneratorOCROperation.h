//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesUI/ICAttachmentPreviewGeneratorOperation.h>

@class ICAttachmentModel, NSManagedObjectContext;

@interface ICAttachmentPreviewGeneratorOCROperation : ICAttachmentPreviewGeneratorOperation
{
    NSManagedObjectContext *_managedObjectContext;
    ICAttachmentModel *_attachmentModel;
}

- (void).cxx_destruct;
@property(retain) ICAttachmentModel *attachmentModel; // @synthesize attachmentModel=_attachmentModel;
@property(retain) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void)main;
- (unsigned long long)type;

@end

