//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBContactList, _INPBDateTimeRange, _INPBIntentMetadata, _INPBLocation, _INPBString, _INPBStringList;

@protocol _INPBStartPhotoPlaybackIntent <NSObject>
@property(readonly, nonatomic) BOOL hasSearchTerm;
@property(retain, nonatomic) _INPBStringList *searchTerm;
@property(readonly, nonatomic) BOOL hasPeopleInPhoto;
@property(retain, nonatomic) _INPBContactList *peopleInPhoto;
@property(readonly, nonatomic) BOOL hasLocationCreated;
@property(retain, nonatomic) _INPBLocation *locationCreated;
@property(readonly, nonatomic) BOOL hasKeywordString;
@property(retain, nonatomic) _INPBStringList *keywordString;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) unsigned long long includedAttributesCount;
@property(readonly, nonatomic) int *includedAttributes;
@property(readonly, nonatomic) unsigned long long excludedAttributesCount;
@property(readonly, nonatomic) int *excludedAttributes;
@property(readonly, nonatomic) BOOL hasDateCreated;
@property(retain, nonatomic) _INPBDateTimeRange *dateCreated;
@property(readonly, nonatomic) BOOL hasContentPerson;
@property(retain, nonatomic) _INPBContactList *contentPerson;
@property(readonly, nonatomic) BOOL hasAlbumName;
@property(retain, nonatomic) _INPBString *albumName;
- (int)StringAsIncludedAttributes:(NSString *)arg1;
- (NSString *)includedAttributesAsString:(int)arg1;
- (void)setIncludedAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)includedAttributeAtIndex:(unsigned long long)arg1;
- (void)addIncludedAttribute:(int)arg1;
- (void)clearIncludedAttributes;
- (int)StringAsExcludedAttributes:(NSString *)arg1;
- (NSString *)excludedAttributesAsString:(int)arg1;
- (void)setExcludedAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)excludedAttributeAtIndex:(unsigned long long)arg1;
- (void)addExcludedAttribute:(int)arg1;
- (void)clearExcludedAttributes;
@end

