//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContact, CNLikeness;
@protocol CNContactLikenessMutator;

@protocol CNContactLikenessMutatorFactory <NSObject>
- (id <CNContactLikenessMutator>)likenessMutatorForContact:(CNContact *)arg1 likeness:(CNLikeness *)arg2 mutationType:(long long)arg3;
@end

