//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMContext.h>

@class PHMomentShare, PHSuggestion, PXCMMPhotoKitActionManager;

@interface PXCMMPhotoKitContext : PXCMMContext
{
    PXCMMPhotoKitActionManager *_photoKitActionManager;
    PHMomentShare *_momentShare;
    PHSuggestion *_suggestion;
    PHMomentShare *_originatingMomentShare;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PHMomentShare *originatingMomentShare; // @synthesize originatingMomentShare=_originatingMomentShare;
@property(readonly, nonatomic) PHSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(readonly, nonatomic) PHMomentShare *momentShare; // @synthesize momentShare=_momentShare;
- (id)createSession;
- (id)actionManager;
- (id)initWithSuggestion:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3 optionalPeopleFetchResult:(id)arg4;
- (id)initWithMomentShare:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3;
- (id)initWithAssetsDataSourceManager:(id)arg1 mediaProvider:(id)arg2 activityType:(unsigned long long)arg3;
- (id)initWithFetchResult:(id)arg1 library:(id)arg2 activityType:(unsigned long long)arg3 sourceType:(unsigned long long)arg4 optionalPeopleFetchResult:(id)arg5;
- (id)initWithFetchResult:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3 optionalPeopleFetchResult:(id)arg4;
- (id)initWithFetchResult:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3;
- (id)initWithAssetCollection:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3 optionalPeopleFetchResult:(id)arg4;
- (id)initWithAssetCollection:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3;
- (id)initWithAssets:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3;

@end

