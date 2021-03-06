//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHThemeManagerSource-Protocol.h>

@class KHCatalogBundle, NSProgress;

@protocol KHThemeManagerCatalogedSource <KHThemeManagerSource>
- (void)resetCatalog;
- (NSProgress *)fetchCatalog:(void (^)(NSError *))arg1;
- (NSProgress *)scanSourceForCatalogUpdates:(void (^)(BOOL, NSError *))arg1;
- (KHCatalogBundle *)catalogBundleForProjectType:(long long)arg1;
@end

