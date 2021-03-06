//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSMatrix, NSPDFInfo, NSPopUpButton, NSView;

@interface NSPDFPanelAccessoryViewController : NSViewController
{
    NSViewController *_customAccessoryViewController;
    NSMatrix *_orientationMatrix;
    NSPopUpButton *_pageSizePopup;
    NSView *_pageSizeContainer;
    NSView *_orientationContainer;
    BOOL showOrientation;
    BOOL showPaperSize;
}

- (void)setOrientation:(id)arg1;
- (void)changePaper:(id)arg1;
- (id)populateMenu:(id)arg1 withPaperList:(id)arg2;
- (void)awakeFromNib;
- (void)loadView;
@property(readonly) NSPDFInfo *pdfInfo;
- (void)_setPrintInfo:(id)arg1;
- (id)_printInfo;
- (void)dealloc;
- (id)initWithOptions:(long long)arg1 customAccessoryViewController:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

