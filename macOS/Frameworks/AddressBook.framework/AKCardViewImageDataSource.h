//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABAddressBook, ABCNContactPhotoStore, ABCNContactStore, ABCardViewImage, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AKCardViewImageDataSource : NSObject
{
    id <AKCardViewDataSourceSupport> _cardView;
    ABCNContactStore *_addressBook;
    ABAddressBook *_legacyAddressBook;
    ABCNContactPhotoStore *_thumbnailPhotoStore;
    ABCNContactPhotoStore *_uncroppedPhotoStore;
    ABCNContactPhotoStore *_remotePhotoStore;
    NSArray *_alternateImageIDs;
    NSString *_alternateImagePath;
    ABCardViewImage *_updatedImage;
}

@property(retain) ABCardViewImage *updatedImage; // @synthesize updatedImage=_updatedImage;
@property(copy) NSString *alternateImagePath; // @synthesize alternateImagePath=_alternateImagePath;
@property(copy) NSArray *alternateImageIDs; // @synthesize alternateImageIDs=_alternateImageIDs;
- (id)makeSetImageCommandWithPeople:(id)arg1 image:(id)arg2 shouldSave:(BOOL)arg3;
- (id)photoFutureForUpdatedImage;
- (id)remotePhotoFutureWithPeople:(id)arg1;
- (id)localLargePhotoFutureWithPeople:(id)arg1;
- (id)localThumbnailPhotoFutureWithPeople:(id)arg1;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 legacyAddressBook:(id)arg2 cardView:(id)arg3;

@end

