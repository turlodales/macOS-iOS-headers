//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABCardViewMultiValueTransformer.h"

@class ABCardViewPersonMapper, CNContact, NSString;

@interface ABCardViewMultiValuePrivateFieldTransformer : NSObject <ABCardViewMultiValueTransformer>
{
    ABCardViewPersonMapper *_personMapper;
    CNContact *_contact;
    NSString *_field;
}

+ (id)transformerWithContact:(id)arg1 personMapper:(id)arg2 field:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *field; // @synthesize field=_field;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) ABCardViewPersonMapper *personMapper; // @synthesize personMapper=_personMapper;
- (CDUnknownBlockType)setIdentifierIsPrivate:(BOOL)arg1;
- (void)setPrivacyStateOfAggregateIdentifier:(id)arg1 isPrivate:(BOOL)arg2;
- (id)reverseTransformMultiValue:(id)arg1;
- (id)componentIdentifiersForAggregateIdentifier:(id)arg1;
- (CDUnknownBlockType)identifierIsPrivate;
- (BOOL)privacyStateOfAggregateIdentifier:(id)arg1;
- (id)transformMultiValue:(id)arg1;
- (id)initWithContact:(id)arg1 personMapper:(id)arg2 field:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

