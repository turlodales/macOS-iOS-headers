//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class FavoritesPickerViewController;

@protocol FavoritesPickerViewControllerDelegate <NSObject>

@optional
- (void)favoritesPickerViewControllerDidNavigateUp:(FavoritesPickerViewController *)arg1;
- (void)favoritesPickerViewController:(FavoritesPickerViewController *)arg1 didSelectFavoriteAtIndex:(unsigned long long)arg2;
@end

