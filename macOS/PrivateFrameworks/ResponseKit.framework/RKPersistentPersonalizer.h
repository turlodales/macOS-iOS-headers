//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSLocale, NSMutableDictionary, NSString, NSURL;

@interface RKPersistentPersonalizer : NSObject
{
    void *_model;
    NSURL *_dynamicDataURL;
    NSString *_languageID;
    NSLocale *_languageLocale;
    id <RKDisplayStringsProvider> _displayStringsProvider;
    NSDate *_lastObservedDynamicDataCreationDate;
    NSDate *_lastDynamicDataCreationCheckDate;
    NSMutableDictionary *_synonyms;
}

+ (void)removeAllDynamicModelsInDirectory:(id)arg1;
+ (id)nonEmptyStringsPredicate;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *synonyms; // @synthesize synonyms=_synonyms;
@property(retain) NSDate *lastDynamicDataCreationCheckDate; // @synthesize lastDynamicDataCreationCheckDate=_lastDynamicDataCreationCheckDate;
@property(retain) NSDate *lastObservedDynamicDataCreationDate; // @synthesize lastObservedDynamicDataCreationDate=_lastObservedDynamicDataCreationDate;
@property(readonly) id <RKDisplayStringsProvider> displayStringsProvider; // @synthesize displayStringsProvider=_displayStringsProvider;
@property(retain) NSLocale *languageLocale; // @synthesize languageLocale=_languageLocale;
@property(retain) NSString *languageID; // @synthesize languageID=_languageID;
@property(retain) NSURL *dynamicDataURL; // @synthesize dynamicDataURL=_dynamicDataURL;
- (void)flushDynamicData;
- (id)headwordsForSynonymPrefix:(id)arg1;
- (id)headwordsForSynonym:(id)arg1;
- (void)dealloc;
- (void *)createLanguageModel;
- (id)topSynonymsForSpeechAct:(id)arg1 headword:(id)arg2 recipientContext:(id)arg3 maxCount:(unsigned long long)arg4;
- (void)trainSynonymForSpeechAct:(id)arg1 headword:(id)arg2 userResponse:(id)arg3 recipientContext:(id)arg4 weight:(unsigned long long)arg5 effectiveDate:(id)arg6;
- (void)initializeDynamicLanguageModel;
@property(readonly) void *model;
- (id)dynamicDataCreationDate;
- (id)initWithLanguageIdentifier:(id)arg1 andDynamicDataURL:(id)arg2 displayStringsProvider:(id)arg3;
- (id)init;

@end

