//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXChangeObserver.h"

@class PHImportSource, PXImportSourcesManager;

@protocol PXImportSourcesManagerChangeObserver <PXChangeObserver>

@optional
- (void)importSourcesManager:(PXImportSourcesManager *)arg1 didRemoveImportSource:(PHImportSource *)arg2;
- (void)importSourcesManager:(PXImportSourcesManager *)arg1 didUpdateImportSource:(PHImportSource *)arg2;
- (void)importSourcesManager:(PXImportSourcesManager *)arg1 didAddImportSource:(PHImportSource *)arg2;
@end

