//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class EMListUnsubscribeCommandMessageHeaders, NSString;

@interface EMListUnsubscribeCommand : NSObject <NSSecureCoding>
{
    id <EDReceivingAccount> _account;
    NSString *_accountIdentifier;
    NSString *_address;
    NSString *_subject;
    NSString *_body;
    EMListUnsubscribeCommandMessageHeaders *_originalMessageHeaders;
}

+ (BOOL)supportsSecureCoding;
+ (void)setAccountFinderBlock:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)accountFinderBlock;
- (void).cxx_destruct;
@property(readonly, nonatomic) EMListUnsubscribeCommandMessageHeaders *originalMessageHeaders; // @synthesize originalMessageHeaders=_originalMessageHeaders;
@property(readonly, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) NSString *address; // @synthesize address=_address;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_accountWithIdentifier:(id)arg1;
@property(readonly, nonatomic) id <EDReceivingAccount> account;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_commonInitWithAddress:(id)arg1 subject:(id)arg2 body:(id)arg3;
- (id)initWithAddress:(id)arg1 subject:(id)arg2 body:(id)arg3 account:(id)arg4 headers:(id)arg5;
- (id)init;

@end

