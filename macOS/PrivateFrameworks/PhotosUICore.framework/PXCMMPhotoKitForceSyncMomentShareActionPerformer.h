//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXCMMActionPerformer.h>

#import "PXCMMPhotoKitActionPerformer.h"

@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitForceSyncMomentShareActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>
{
}

- (void)performBackgroundTask;
- (BOOL)canPerformActionWithSession:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) PXCMMPhotoKitSession *session;

@end

