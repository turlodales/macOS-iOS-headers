//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HelpData/DDMObject.h>

@class DDMInfo, DDMMeta, DDMMisc, HPDHelpBook, NSArray, NSString;

@interface DDMBook : DDMObject
{
    NSString *_bookID;
    NSString *_tocID;
    NSString *_product;
    NSString *_version;
    NSString *_locale;
    NSString *_title;
    NSString *_copyright;
    DDMInfo *_info;
    DDMMeta *_meta;
    DDMMisc *_miscAttributes;
    NSArray *_tocItems;
    HPDHelpBook *_cachedHelpBook;
}

+ (id)ddmObjectIdentifierWithBookID:(id)arg1;
- (void).cxx_destruct;
@property(retain) HPDHelpBook *cachedHelpBook; // @synthesize cachedHelpBook=_cachedHelpBook;
@property(readonly) NSArray *tocItems; // @synthesize tocItems=_tocItems;
@property(readonly) DDMMisc *miscAttributes; // @synthesize miscAttributes=_miscAttributes;
@property(readonly) DDMMeta *meta; // @synthesize meta=_meta;
@property(readonly) DDMInfo *info; // @synthesize info=_info;
@property(readonly) NSString *copyright; // @synthesize copyright=_copyright;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) NSString *locale; // @synthesize locale=_locale;
@property(readonly) NSString *version; // @synthesize version=_version;
@property(readonly) NSString *product; // @synthesize product=_product;
@property(readonly) NSString *tocID; // @synthesize tocID=_tocID;
@property(readonly) NSString *bookID; // @synthesize bookID=_bookID;
- (id)ddmObjectIdentifier;
- (id)description;
@property(readonly) NSString *language;
@property(readonly) NSString *helpbookID;
@property(readonly) NSString *appBundleVersion;
- (id)helpBook;
@property(readonly) BOOL isSingleTopicBook;
- (id)defaultTOCItem;
- (id)tocItemWithID:(id)arg1;

@end

