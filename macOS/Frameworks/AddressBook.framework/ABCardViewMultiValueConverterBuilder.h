//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABCNContact, ABCardViewPersonMapper;

__attribute__((visibility("hidden")))
@interface ABCardViewMultiValueConverterBuilder : NSObject
{
    ABCNContact *_person;
    ABCardViewPersonMapper *_personMapper;
    id <ABCardViewProperty> _property;
    BOOL _shouldShowPrivateMeFields;
    BOOL _isEditing;
}

@property BOOL isEditing; // @synthesize isEditing=_isEditing;
@property BOOL shouldShowPrivateMeFields; // @synthesize shouldShowPrivateMeFields=_shouldShowPrivateMeFields;
- (id)privateFieldTransformer;
- (id)accountNameTransformer;
- (id)readOnlyTransformer;
- (id)transformers;
- (id)basicConverter;
- (id)build;
- (void)dealloc;
- (id)initWithPerson:(id)arg1 personMapper:(id)arg2 property:(id)arg3;

@end

