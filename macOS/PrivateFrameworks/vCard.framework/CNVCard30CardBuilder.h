//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol CNVCardLineFactory, CNVCardPerson;

@interface CNVCard30CardBuilder : NSObject
{
    BOOL _photoHandled;
    id <CNVCardPerson> _person;
    NSMutableArray *_lines;
    long long _groupCount;
    unsigned long long _countOfLinesBeforePhoto;
    CDUnknownBlockType _retrofitPhoto;
    NSMutableArray *_unknownProperties;
    id <CNVCardLineFactory> _lineFactory;
}

+ (unsigned long long)estimatedBytesAvailableForPhotoWithOptions:(id)arg1 serializer:(id)arg2;
+ (id)builderWithPerson:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNVCardLineFactory> lineFactory; // @synthesize lineFactory=_lineFactory;
@property(readonly, nonatomic) NSMutableArray *unknownProperties; // @synthesize unknownProperties=_unknownProperties;
@property(nonatomic) BOOL photoHandled; // @synthesize photoHandled=_photoHandled;
@property(readonly, copy, nonatomic) CDUnknownBlockType retrofitPhoto; // @synthesize retrofitPhoto=_retrofitPhoto;
@property(nonatomic) unsigned long long countOfLinesBeforePhoto; // @synthesize countOfLinesBeforePhoto=_countOfLinesBeforePhoto;
@property(nonatomic) long long groupCount; // @synthesize groupCount=_groupCount;
@property(readonly, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
@property(readonly, nonatomic) id <CNVCardPerson> person; // @synthesize person=_person;
- (void)addPropertyLinesForValues:(id)arg1 generator:(id)arg2;
- (void)_addAttributesForCropRects:(id)arg1 imageHash:(id)arg2 toLine:(id)arg3;
- (void)preparePhotoLineWithOptions:(id)arg1;
- (BOOL)addPhotoReferences;
- (void)addPhotoWithOptions:(id)arg1;
- (void)addLegacyInstantMessagingHandles:(id)arg1 forService:(id)arg2 vCardProperty:(id)arg3;
- (void)addInstantMessagingHandles:(id)arg1;
- (void)addInstantMessagingInfo;
- (void)addDowntimeWhitelist;
- (void)addPreferredApplePersonaIdentifier;
- (void)addPreferredLikenessSource;
- (void)addPhonemeData;
- (void)addUID;
- (void)addCardDAVUID;
- (void)addUnknownProperties;
- (void)addCategories;
- (void)addNameOrderMarker;
- (void)addCompanyMarker;
- (void)addRelatedNames;
- (void)addOtherDates;
- (void)addAlternateBirthday;
- (void)addBirthday;
- (void)addCalendarURIs;
- (void)addURLs;
- (void)addNote;
- (void)addActivityAlerts;
- (void)addSocialProfiles;
- (void)addPostalAddresses;
- (void)addPhoneNumbers;
- (void)addEmailAddresses;
- (void)addOrganization;
- (void)addFullName;
- (void)addNameComponents;
- (void)addNameLines;
- (void)addEndOfCard;
- (void)addBeginningOfCard;
- (void)addLineWithName:(id)arg1 value:(id)arg2;
- (void)removeUnknownPropertiesWithTag:(id)arg1;
- (void)buildWithSerializer:(id)arg1;
- (id)initWithPerson:(id)arg1;

@end

