//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXFeedSectionInfo.h>

@class PLPhotoLibrary;

@interface PXFeedTestSectionInfo : PXFeedSectionInfo
{
    PLPhotoLibrary *_photoLibrary;
    long long _countOfItems;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long countOfItems; // @synthesize countOfItems=_countOfItems;
- (id)photoLibrary;
- (id)captionForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)albumTitle;
- (id)date;
- (BOOL)isLoaded;
- (long long)sectionType;
- (id)initWithPhotoLibrary:(id)arg1;

@end

