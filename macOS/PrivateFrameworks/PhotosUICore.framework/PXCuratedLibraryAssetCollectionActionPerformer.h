//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCuratedLibraryActionPerformer.h>

@class PXAssetCollectionReference;

@interface PXCuratedLibraryAssetCollectionActionPerformer : PXCuratedLibraryActionPerformer
{
    PXAssetCollectionReference *_assetCollectionReference;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference; // @synthesize assetCollectionReference=_assetCollectionReference;
- (void)performActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2 assetCollectionReference:(id)arg3;

@end

