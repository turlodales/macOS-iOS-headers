//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RDQuery.h"

@class NSString;

@interface RDSingleItemQuery : NSObject <RDQuery>
{
    BOOL m_isValid;
    BOOL m_isEnabled;
    int m_type;
    long long m_qualifier;
    NSString *m_propertyKey;
    id m_firstValue;
    id m_secondValue;
    NSString *m_uuidValue;
    long long m_timeValue;
    NSString *m_timeUnit;
    id m_observer;
    int m_spinlock;
}

+ (id)reformatPixelSize:(id)arg1;
+ (long long)numericQualifierFromDateQualifier:(long long)arg1;
+ (long long)invertRelativeQualifier:(long long)arg1;
+ (unsigned char)searchValueTypeForKeyPath:(id)arg1;
+ (id)unlocalizeTimeUnit:(id)arg1;
+ (id)localizeTimeUnit:(id)arg1;
@property BOOL isValid; // @synthesize isValid=m_isValid;
- (void).cxx_destruct;
- (void)updateKeywordArchiveStringFrom:(id)arg1 to:(id)arg2;
- (void)remapFaceKeys:(id)arg1 fromDatabase:(id)arg2;
- (BOOL)isDefaultRatingQuery;
- (void)setTimeValue:(id)arg1;
- (id)timeValue;
- (void)setTimeUnit:(id)arg1;
- (id)timeUnit;
- (id)allTimeUnits;
- (void)setQualifier:(long long)arg1;
- (long long)qualifier;
@property(retain, nonatomic) NSString *uuidValue;
@property(retain, nonatomic) id secondValue;
@property(retain, nonatomic) id firstValue;
- (void)setPropertyKey:(id)arg1;
- (id)propertyKey;
- (void)setType:(int)arg1;
- (long long)type;
- (BOOL)hasEnabledAlbumCriteria;
- (BOOL)affectedByKeyPathChange:(id)arg1 previousMainRating:(long long)arg2 currentMainRating:(long long)arg3;
- (id)infoDictionary;
- (void)observeChangeToObject:(id)arg1 forKeyPath:(id)arg2;
- (void)removeChangeObserver:(id)arg1;
- (void)addChangeObserver:(id)arg1;
- (void)disableWithNoNotification;
- (void)setIsEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (BOOL)isQueryComplete;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithInfoDictionary:(id)arg1;
- (id)initWithQueryType:(int)arg1 propertyKey:(id)arg2 qualifier:(long long)arg3 firstValue:(id)arg4 secondValue:(id)arg5;
- (id)_coercedValueForValue:(id)arg1;
- (id)_keyPath;
- (id)dateFromDateOffset;
- (id)_calculateReferenceDateWithValue:(long long)arg1 timeUnit:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

