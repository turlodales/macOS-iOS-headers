//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import "PXSectionedDataSourceManagerObserver.h"

@class NSString, PXSectionedDataSource, PXSectionedDataSourceManager, PXSectionedSelectionManager, PXSelectionSnapshot, PXUIMediaProvider;

@interface PXAssetsSession : PXObservable <PXSectionedDataSourceManagerObserver>
{
    PXSectionedDataSource *_dataSource;
    PXSelectionSnapshot *_selectionSnapshot;
    PXSectionedDataSourceManager *_dataSourceManager;
    PXUIMediaProvider *_mediaProvider;
    PXSectionedSelectionManager *_selectionManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(readonly, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(retain, nonatomic) PXSelectionSnapshot *selectionSnapshot; // @synthesize selectionSnapshot=_selectionSnapshot;
@property(retain, nonatomic) PXSectionedDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateDataSourceDependentProperties;
- (id)mutableChangeObject;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 selectionManager:(id)arg3;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

