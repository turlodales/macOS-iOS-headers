//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNContactLikenessMutator.h"

@class CNContact, NSString, PRPersonaStore;

@interface CNContactLikenessPersonaStoreMutator : NSObject <CNContactLikenessMutator>
{
    PRPersonaStore *_personaStore;
    id <CNContactLikenessMutator> _contactStoreMutator;
    CNContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) id <CNContactLikenessMutator> contactStoreMutator; // @synthesize contactStoreMutator=_contactStoreMutator;
@property(retain, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
- (id)setLikenessAsCurrent:(id)arg1;
- (id)deleteLikeness:(id)arg1;
- (id)updateLikeness:(id)arg1;
- (id)addNewLikeness:(id)arg1;
- (id)initWithPersonaStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

