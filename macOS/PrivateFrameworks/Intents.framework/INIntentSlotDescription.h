//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INIntentSlotDescriptionExport.h"
#import "NSCopying.h"

@class INCodableAttribute, NSArray, NSNumber, NSString;

@interface INIntentSlotDescription : NSObject <INIntentSlotDescriptionExport, NSCopying>
{
    BOOL _isExtended;
    BOOL _isPrivate;
    Class _resolutionResultClass;
    NSString *_name;
    unsigned long long _tag;
    NSString *_facadePropertyName;
    NSString *_dataPropertyName;
    long long _valueType;
    long long _valueStyle;
    NSArray *_resolveSelectorStrings;
    NSArray *_provideOptionsSelectorStrings;
    NSArray *_defaultValueSelectorStrings;
    INCodableAttribute *_codableAttribute;
    NSNumber *_rank;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *rank; // @synthesize rank=_rank;
@property(readonly, copy, nonatomic) INCodableAttribute *codableAttribute; // @synthesize codableAttribute=_codableAttribute;
@property(readonly, copy, nonatomic) NSArray *defaultValueSelectorStrings; // @synthesize defaultValueSelectorStrings=_defaultValueSelectorStrings;
@property(readonly, copy, nonatomic) NSArray *provideOptionsSelectorStrings; // @synthesize provideOptionsSelectorStrings=_provideOptionsSelectorStrings;
@property(readonly, copy, nonatomic) NSArray *resolveSelectorStrings; // @synthesize resolveSelectorStrings=_resolveSelectorStrings;
@property(readonly, nonatomic) BOOL isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, nonatomic) BOOL isExtended; // @synthesize isExtended=_isExtended;
@property(readonly, nonatomic) long long valueStyle; // @synthesize valueStyle=_valueStyle;
@property(readonly, nonatomic) long long valueType; // @synthesize valueType=_valueType;
@property(readonly, copy, nonatomic) NSString *dataPropertyName; // @synthesize dataPropertyName=_dataPropertyName;
@property(readonly, copy, nonatomic) NSString *facadePropertyName; // @synthesize facadePropertyName=_facadePropertyName;
@property(readonly, nonatomic) unsigned long long tag; // @synthesize tag=_tag;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) Class resolutionResultClass; // @synthesize resolutionResultClass=_resolutionResultClass;
@property(readonly, nonatomic) SEL deprecatedResolveSelector;
@property(readonly, nonatomic) SEL resolveSelector;
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 isExtended:(BOOL)arg5 isPrivate:(BOOL)arg6 valueType:(long long)arg7 valueStyle:(long long)arg8 defaultValueSelectorStrings:(id)arg9 provideOptionsSelectorStrings:(id)arg10 resolutionResultClass:(Class)arg11 resolveSelectors:(SEL)arg12;
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 valueType:(long long)arg5 valueStyle:(long long)arg6 isExtended:(BOOL)arg7 isPrivate:(BOOL)arg8 resolveSelectors:(SEL)arg9;
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 isExtended:(BOOL)arg5 isPrivate:(BOOL)arg6 valueType:(long long)arg7 valueStyle:(long long)arg8 codableAttribute:(id)arg9 defaultValueSelectorStrings:(id)arg10 provideOptionsSelectorStrings:(id)arg11 resolutionResultClass:(Class)arg12 resolveSelectors:(SEL)arg13;
@property(readonly, nonatomic) BOOL isEnum;
- (id)localizeValue:(id)arg1 withLocalizer:(id)arg2;
- (id)localizeValue:(id)arg1 forLanguage:(id)arg2;
- (void)setValue:(id)arg1 forSlotComposer:(id)arg2;
- (id)valueForSlotComposer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

