//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ReminderKit/REMStoreInvocationResult.h>

#import "NSSecureCoding.h"

@class NSArray;

@interface REMAccountsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding>
{
    NSArray *_accountStorages;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *accountStorages; // @synthesize accountStorages=_accountStorages;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStorages:(id)arg1;

@end

