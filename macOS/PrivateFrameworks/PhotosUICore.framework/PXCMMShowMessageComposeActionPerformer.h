//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMActionPerformer.h>

@class NSURL;

@interface PXCMMShowMessageComposeActionPerformer : PXCMMActionPerformer
{
    NSURL *_shareURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
- (id)performActionWithSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performMessageComposeActionWithSession:(id)arg1 shareURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

