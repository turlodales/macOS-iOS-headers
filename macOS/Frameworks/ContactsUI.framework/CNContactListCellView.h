//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class ABCardCollectionView, CNContactListCellViewController, NSArray, NSTextField;

@interface CNContactListCellView : NSTableCellView
{
    CNContactListCellViewController *_controller;
    ABCardCollectionView *_collectionView;
    NSTextField *_nameView;
    NSArray *_customConstraints;
}

- (void).cxx_destruct;
@property(retain) NSArray *customConstraints; // @synthesize customConstraints=_customConstraints;
@property(retain) NSTextField *nameView; // @synthesize nameView=_nameView;
@property(readonly) ABCardCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain) CNContactListCellViewController *controller; // @synthesize controller=_controller;
- (BOOL)accessibilityPerformPress;
- (id)metrics;
- (id)views;
- (void)updateConstraints;
- (void)setName:(id)arg1 emphasisRange:(struct _NSRange)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)awakeFromNib;

@end

