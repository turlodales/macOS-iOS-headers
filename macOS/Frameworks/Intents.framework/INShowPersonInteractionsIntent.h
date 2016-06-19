//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntent.h>

@class INPerson, NSString;

@interface INShowPersonInteractionsIntent : INIntent
{
    INPerson *_person;
    NSString *_focusItemIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSString *focusItemIdentifier; // @synthesize focusItemIdentifier=_focusItemIdentifier;
@property(copy) INPerson *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPerson:(id)arg1 focusItemIdentifier:(id)arg2;

@end

