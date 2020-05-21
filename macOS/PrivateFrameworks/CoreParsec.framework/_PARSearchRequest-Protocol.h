//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, _PARLocation, _PARMapsSession, _PARSilhouette, _PARSubscriptions, _PARSuggestion;

@protocol _PARSearchRequest <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) long long exp;
@property(nonatomic) BOOL seedBuild;
@property(nonatomic) BOOL internalBuild;
@property(nonatomic) BOOL hsEnabled;
@property(copy, nonatomic) NSString *siriLocale;
@property(nonatomic) int lookupSelectionType;
@property(copy, nonatomic) NSString *lookupHintDomain;
@property(copy, nonatomic) NSString *lookupAppBundleId;
@property(copy, nonatomic) NSString *queryLanguage;
@property(nonatomic) int suggest;
@property(retain, nonatomic) _PARMapsSession *mapsSession;
@property(nonatomic) float uiScale;
@property(copy, nonatomic) NSString *userGUID;
@property(retain, nonatomic) _PARSubscriptions *subscriptions;
@property(copy, nonatomic) NSString *storeFront;
@property(nonatomic) BOOL managedDevice;
@property(copy, nonatomic) NSData *installedAppsSignature;
@property(nonatomic) int transportationMode;
@property(nonatomic) int routineMode;
@property(retain, nonatomic) _PARLocation *location;
@property(retain, nonatomic) _PARSilhouette *silhouette;
@property(copy, nonatomic) NSData *dictionarySignature;
@property(copy, nonatomic) NSArray *localSuggestions;
@property(copy, nonatomic) NSString *modelVersionL3;
@property(copy, nonatomic) NSString *modelVersionL2;
@property(nonatomic) int hourFormat;
@property(nonatomic) int measurementSystem;
@property(nonatomic) int tempUnit;
@property(copy, nonatomic) NSString *timeZone;
@property(copy, nonatomic) NSString *calendar;
@property(copy, nonatomic) NSString *inputMode;
@property(copy, nonatomic) NSArray *preferredLanguages;
@property(copy, nonatomic) NSString *effectiveSystemLanguage;
@property(copy, nonatomic) NSString *locale;
@property(copy, nonatomic) NSString *countryCode;
@property(nonatomic) int sendTopHit;
@property(copy, nonatomic) NSString *secretKey;
@property(copy, nonatomic) NSString *query;
@property(nonatomic) int queryType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_PARSuggestion *)localSuggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)localSuggestionsCount;
- (void)addLocalSuggestions:(_PARSuggestion *)arg1;
- (void)clearLocalSuggestions;
- (NSString *)preferredLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)preferredLanguagesCount;
- (void)addPreferredLanguages:(NSString *)arg1;
- (void)clearPreferredLanguages;
@end

