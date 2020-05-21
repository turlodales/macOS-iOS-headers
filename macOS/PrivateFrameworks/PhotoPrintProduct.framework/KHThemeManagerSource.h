//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KHThemeManagerSource.h"

@class KHThemeManager, NSString, NSURL;

@interface KHThemeManagerSource : NSObject <KHThemeManagerSource>
{
    NSURL *_sourceURL;
    KHThemeManager *_manager;
}

- (void).cxx_destruct;
@property(nonatomic) __weak KHThemeManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (id)descriptionForThemeProvider:(id)arg1;
- (id)titleForThemeProvider:(id)arg1;
- (BOOL)isThemePreviewValid:(id)arg1;
- (BOOL)isThemeValid:(id)arg1;
- (BOOL)isThemePreviewLocal:(id)arg1;
- (BOOL)isThemeLocal:(id)arg1;
- (id)URLForThemePreview:(id)arg1;
- (id)URLForTheme:(id)arg1;
- (id)productCodesForThemeProvider:(id)arg1;
- (id)bundleForThemePreview:(id)arg1;
- (id)bundleForTheme:(id)arg1;
- (id)prepareThemePreviewsForProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)prepareThemesForProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)categoriesForThemeProvider:(id)arg1;
@property(readonly, nonatomic) unsigned long long sourceType;
@property(readonly, nonatomic) BOOL sourceIsLocal;
- (BOOL)sourceIsAvailable;
- (id)prepareThemeBundleForUse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)prepareThemeBundlePreviewsForUse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)allThemeProviders;
- (id)remoteThemeProviders;
- (id)localThemeProviders;
- (id)fetchThemeProvidersForProductCodes:(id)arg1;
- (void)prepareSourceWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithSourceURL:(id)arg1 manager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

