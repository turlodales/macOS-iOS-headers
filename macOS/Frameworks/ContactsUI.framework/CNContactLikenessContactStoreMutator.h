//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNContactLikenessMutator.h"

@class CNContact, CNContactStore, NSString;

@interface CNContactLikenessContactStoreMutator : NSObject <CNContactLikenessMutator>
{
    CNContactStore *_contactStore;
    CNContact *_contact;
}

+ (void)updateContact:(id)arg1 withLikeness:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)setLikenessAsCurrent:(id)arg1;
- (id)deleteLikeness:(id)arg1;
- (id)updateLikeness:(id)arg1;
- (id)addNewLikeness:(id)arg1;
- (id)initWithContactStore:(id)arg1 contact:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

