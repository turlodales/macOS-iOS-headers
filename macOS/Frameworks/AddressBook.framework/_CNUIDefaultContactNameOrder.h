//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/CNUIContactNameOrder.h>

@class ABUserDefaults, CNContact;

@interface _CNUIDefaultContactNameOrder : CNUIContactNameOrder
{
    ABUserDefaults *_userDefaults;
    CNContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) ABUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (id)defaultNameOrder;
- (id)phoneticNameKeys;
- (id)nameKeys;
- (id)initWithContact:(id)arg1 userDefaults:(id)arg2;
- (id)initWithContact:(id)arg1;

@end

