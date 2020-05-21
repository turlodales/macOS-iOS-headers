//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNPredicateForAccountWithExternalIdentifier : CNPredicate
{
    NSString *_accountExternalIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *accountExternalIdentifier; // @synthesize accountExternalIdentifier=_accountExternalIdentifier;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)initWithAccountExternalIdentifier:(id)arg1;
- (id)init;

@end

