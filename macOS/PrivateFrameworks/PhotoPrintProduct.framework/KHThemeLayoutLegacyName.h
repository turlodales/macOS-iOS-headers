//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHModel.h>

@class NSString;

@interface KHThemeLayoutLegacyName : KHModel
{
    long long _themeId;
    long long _layoutId;
    NSString *_legacyName;
}

- (void)setLegacyName:(id)arg1;
- (void)cacheLegacyName:(id)arg1;
- (id)legacyName;
- (void)setLayoutId:(long long)arg1;
- (void)cacheLayoutId:(long long)arg1;
- (long long)layoutId;
- (void)setThemeId:(long long)arg1;
- (void)cacheThemeId:(long long)arg1;
- (long long)themeId;
- (void)dealloc;

@end

