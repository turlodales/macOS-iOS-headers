//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNContactLikenessMutatorFactory.h"

@class CNContact, CNUIMeContactMonitor, NSString, PRPersonaStore;

@interface CNContactLikenessCardMutatorFactory : NSObject <CNContactLikenessMutatorFactory>
{
    id <ABCardViewImageDataSource> _dataSource;
    PRPersonaStore *_personaStore;
    CNUIMeContactMonitor *_meMonitor;
    CNContact *_contact;
}

@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) CNUIMeContactMonitor *meMonitor; // @synthesize meMonitor=_meMonitor;
@property(retain, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
@property(retain, nonatomic) id <ABCardViewImageDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)likenessMutatorForContact:(id)arg1;
- (id)initWithDataSource:(id)arg1 personaStore:(id)arg2 meMonitor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

