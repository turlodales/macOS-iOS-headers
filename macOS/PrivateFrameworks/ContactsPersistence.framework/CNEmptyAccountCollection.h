//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNAccountCollection.h"

@class CNObservable, NSArray, NSString, NSURL;

@interface CNEmptyAccountCollection : NSObject <CNAccountCollection>
{
    NSURL *_baseURL;
    NSString *_tag;
}

- (void).cxx_destruct;
@property(copy) NSString *tag; // @synthesize tag=_tag;
@property(copy) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (id)accountWithIdentifier:(id)arg1;
@property(readonly, copy) NSArray *persistentAccounts;
@property(readonly) BOOL includeLocalAccount;
@property(readonly) CNObservable *enabledPersistentAccountsObservable;
@property(readonly) CNObservable *enabledAccountsObservable;
@property(readonly, copy) NSArray *enabledAccounts;
@property(readonly) id <CNAccountDescription> defaultAccount;
@property(readonly, copy) NSArray *allAccounts;
- (id)initWithBaseURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

