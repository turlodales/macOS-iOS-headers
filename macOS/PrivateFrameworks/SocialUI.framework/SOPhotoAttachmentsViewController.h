//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SocialUI/SOAttachmentsViewController.h>

@class IKImageBrowserView;

@interface SOPhotoAttachmentsViewController : SOAttachmentsViewController
{
    IKImageBrowserView *_imageBrowserView;
}

- (void).cxx_destruct;
@property(retain) IKImageBrowserView *imageBrowserView; // @synthesize imageBrowserView=_imageBrowserView;
- (void)loadView;
- (void)chatDisplayControllerWillChange:(id)arg1;
- (void)attachmentsDidChange;
- (id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInImageBrowser:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_deleteSelection;
- (void)_importSelectionToIPhoto;
- (id)actionableIndexes:(id)arg1;
- (void)_openImageBrowserSelection;
- (void)imageBrowser:(id)arg1 cellWasRightClickedAtIndex:(unsigned long long)arg2 withEvent:(id)arg3;
- (id)imageBrowser:(id)arg1 pasteboardWriterForItemAtIndex:(unsigned long long)arg2;
- (void)viewDidAppear;
- (void)setUpImageBrowser;

@end

