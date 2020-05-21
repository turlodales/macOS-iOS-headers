//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UXKit/UXViewController.h>

#import "UXCollectionViewDataSource.h"
#import "UXCollectionViewDelegate.h"

@class NSString, UXCollectionView, UXCollectionViewLayout;

@interface UXCollectionViewController : UXViewController <UXCollectionViewDataSource, UXCollectionViewDelegate>
{
    UXCollectionViewLayout *_layout;
    UXCollectionView *_collectionView;
}

+ (Class)collectionViewClass;
- (void).cxx_destruct;
@property(retain, nonatomic) UXCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (double)scrollView:(id)arg1 pageAlignedOriginOnAxis:(long long)arg2 forProposedDestination:(double)arg3 currentOrigin:(double)arg4 initialOrigin:(double)arg5 velocity:(double)arg6;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)preferredFirstResponder;
- (void)viewDidLoad;
- (void)_sendViewDidLoad;
- (void)dealloc;
- (id)initWithCollectionViewLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

