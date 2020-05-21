//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import "TLKSelectableGridViewDelegate.h"

@class NSString, TLKSelectableGridView;

@interface SearchUISelectableGridCardSectionView : SearchUICardSectionView <TLKSelectableGridViewDelegate>
{
}

+ (BOOL)supportsRecyclingForCardSection:(id)arg1;
- (void)selectableGridView:(id)arg1 didChangeSelectedIndex:(long long)arg2;
- (id)convertSFTitleSubtitleData:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)setupContentView;

// Remaining properties
@property(retain, nonatomic) TLKSelectableGridView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

