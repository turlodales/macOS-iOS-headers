//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/NSObject-Protocol.h>

@class KHThemeManager, NSArray;

@protocol KHThemeManagerPathSourceProtocol <NSObject>
- (NSArray *)watchDirectoriesForThemeManager:(KHThemeManager *)arg1;

@optional
- (BOOL)themeManagerWantsToDisableSoftwareUpdate:(KHThemeManager *)arg1;
- (NSArray *)kharmaBundleURLSForThemeManager:(KHThemeManager *)arg1;
- (NSArray *)watchPreviewDirectoriesForThemeManager:(KHThemeManager *)arg1;
@end

