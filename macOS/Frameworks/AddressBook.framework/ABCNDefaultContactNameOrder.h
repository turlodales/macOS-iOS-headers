//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCNContactNameOrderImpl.h>

@class ABUserDefaults;

__attribute__((visibility("hidden")))
@interface ABCNDefaultContactNameOrder : ABCNContactNameOrderImpl
{
    ABUserDefaults *_userDefaults;
}

- (id)phoneticNameKeys;
- (id)nameKeys;
- (long long)nameOrderEnum;
- (id)defaultNameOrder;
- (id)phoneticFullNameForContact:(id)arg1;
- (id)fullNameForContact:(id)arg1 emphasisRange:(struct _NSRange *)arg2;
- (id)fullNameForContact:(id)arg1;
- (void)dealloc;
- (id)initWithUserDefaults:(id)arg1;
- (id)init;

@end

