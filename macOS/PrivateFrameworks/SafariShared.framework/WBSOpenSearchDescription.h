//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WBSOpenSearchURLTemplate;

@interface WBSOpenSearchDescription : NSObject
{
    NSString *_descriptionDocumentURLString;
    WBSOpenSearchURLTemplate *_searchURLTemplate;
    WBSOpenSearchURLTemplate *_urlTemplateForSuggestionsInJSON;
    WBSOpenSearchURLTemplate *_urlTemplateForSuggestionsInXML;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInXML; // @synthesize urlTemplateForSuggestionsInXML=_urlTemplateForSuggestionsInXML;
@property(readonly, nonatomic) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInJSON; // @synthesize urlTemplateForSuggestionsInJSON=_urlTemplateForSuggestionsInJSON;
@property(readonly, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplate; // @synthesize searchURLTemplate=_searchURLTemplate;
@property(readonly, nonatomic) NSString *descriptionDocumentURLString; // @synthesize descriptionDocumentURLString=_descriptionDocumentURLString;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDescriptionDocumentURLString:(id)arg1 searchURLTemplate:(id)arg2 urlTemplateForSuggestionsInJSON:(id)arg3 urlTemplateForSuggestionsInXML:(id)arg4;

@end

