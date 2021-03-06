//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/NSObject-Protocol.h>

@class KHFrame, KHPhotoBinViewController, KHProject, NSArray, NSString;

@protocol KHPhotoBinViewControllerDelegate <NSObject>
- (BOOL)photoBinViewControllerShouldPerformBatchUpdates:(KHPhotoBinViewController *)arg1;
- (void)removePhotosFromPhotoBinController:(NSArray *)arg1;
- (KHProject *)projectForPhotoBinController:(KHPhotoBinViewController *)arg1;

@optional
- (void)photoDraggedFromPhotoBinController:(KHPhotoBinViewController *)arg1;
- (void)photoBinDidEndScrolling;
- (void)photoPasted:(NSString *)arg1 toPhotoBinController:(KHPhotoBinViewController *)arg2;
- (KHFrame *)photoBinNeedsSelectedPhotoFrame:(KHPhotoBinViewController *)arg1;
- (void)selectionChanged;
@end

