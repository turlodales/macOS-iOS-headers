//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSMutableDictionary, NSSet, NSString, NSURL;

@interface KHCatalogBundle : NSObject
{
    NSMutableDictionary *_rootDictionary;
    NSMutableDictionary *_themePreviewIdentifiersBySortOrderByCategoryId;
    NSMutableDictionary *_productCodesByThemesKey;
    NSCache *_categoriesCache;
    NSCache *_categoriesForRecordIdCache;
    NSSet *_remoteThemePreviewIdentifiers;
    NSSet *_remoteThemeIdentifiers;
    NSSet *_localThemePreviewIdentifiers;
    NSSet *_localThemeIdentifiers;
    NSURL *_URL;
    NSString *_allKey;
}

+ (id)languageSpecificCountryCodes;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *allKey; // @synthesize allKey=_allKey;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSMutableDictionary *rootDictionary; // @synthesize rootDictionary=_rootDictionary;
- (id)themePreviewVersionForThemePreviewIdentifier:(id)arg1;
- (id)themeVersionForThemePreviewIdentifier:(id)arg1;
- (BOOL)isPreviewBundleIdentifierLocal:(id)arg1;
- (BOOL)isBundleIdentifierLocal:(id)arg1;
- (id)localThemePreviewIdentifiers;
- (id)remoteThemePreviewsIdentifiers;
- (id)localThemeIdentifiers;
- (id)remoteThemeIdentifiers;
- (id)_themeIdentifiersLocal:(BOOL)arg1 isPreview:(BOOL)arg2;
- (id)_recordForThemePreviewIdentifier:(id)arg1;
- (id)allCategoryKeyId;
- (id)_allThemePreviewIdentifiers;
- (id)_visibleSortedThemePreviewIdentifiers;
- (BOOL)themePreviewIdentifierIsVisible:(id)arg1 category:(id)arg2;
- (id)themePreviewIdentifiersBySortOrderForCategory:(id)arg1;
- (id)description;
- (id)records;
- (id)categoriesForRecordId:(id)arg1;
- (id)recordsForCategory:(id)arg1;
- (id)recordsByThemePreviewIdentifier;
- (id)themeIdentifiers;
- (id)themePreviewIdentifiers;
- (id)productCodesForThemePreviewIdentifier:(id)arg1;
- (id)productCodesByThemePreviewIdentifiers;
- (id)categories;
- (id)packageIdentifierByBundleIdentifier;
- (id)packageIdentifierForBundleIdentifier:(id)arg1;
- (id)previewPackageIdentifierForBundleIdentifier:(id)arg1;
- (BOOL)hasLanguageSpecificPreviews;
- (id)internalVersion;
- (id)version;
- (id)bundleAttributes;
- (id)manifestURL;
- (BOOL)commonInit;
- (id)initWithContentsOfURL:(id)arg1;

@end

