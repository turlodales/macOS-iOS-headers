//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHProductChooserViewController.h>

@class NSMutableArray, UXBarButtonItem;

@interface KHBookProductChooserViewController : KHProductChooserViewController
{
    long long _onceToken;
    NSMutableArray *_bookProductFamilies;
    UXBarButtonItem *_helpButtonItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UXBarButtonItem *helpButtonItem; // @synthesize helpButtonItem=_helpButtonItem;
- (void)showHelp:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)bookProductFamilies;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)projectType;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

@end

