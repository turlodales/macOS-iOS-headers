//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABACAccount, NSNumber, NSString;

@interface ABAccountComponents : NSObject
{
    NSString *_identifier;
    NSString *_path;
    ABACAccount *_account;
    id <ABACAccountStore> _store;
    ABACAccount *_parentAccount;
    NSNumber *_dsid;
    NSString *_altDSID;
}

+ (id)componentsWithIdentifier:(id)arg1 path:(id)arg2 account:(id)arg3 parentAccount:(id)arg4 store:(id)arg5;
+ (id)componentsWithIdentifier:(id)arg1 path:(id)arg2 account:(id)arg3 store:(id)arg4;
+ (id)componentsWithIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(readonly) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(readonly) id <ABACAccountStore> store; // @synthesize store=_store;
@property(readonly) ABACAccount *parentAccount; // @synthesize parentAccount=_parentAccount;
@property(readonly) ABACAccount *account; // @synthesize account=_account;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)initWithIdentifier:(id)arg1 path:(id)arg2 account:(id)arg3 parentAccount:(id)arg4 store:(id)arg5;

@end

