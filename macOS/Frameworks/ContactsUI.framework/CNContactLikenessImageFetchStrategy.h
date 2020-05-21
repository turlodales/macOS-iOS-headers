//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNContactLikenessesFetchStrategy.h"

@class CNContact, CNContactStore, NSString;

@interface CNContactLikenessImageFetchStrategy : NSObject <CNContactLikenessesFetchStrategy>
{
    CNContact *_contact;
    CNContactStore *_contactStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, copy) NSString *description;
- (id)contactLikenessesModel;
- (id)initWithContact:(id)arg1 contactStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

