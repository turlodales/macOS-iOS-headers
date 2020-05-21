//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface WBSAutoFillAssociatedDomainsManager : NSObject
{
    NSMutableDictionary *_domainToDomainsWithAssociatedCredentials;
    NSMutableDictionary *_domainsToDomainsToConsiderIdentical;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSArray *_domainsWithAssociatedCredentials;
    NSArray *_domainsToConsiderIdentical;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *domainsToConsiderIdentical; // @synthesize domainsToConsiderIdentical=_domainsToConsiderIdentical;
@property(copy, nonatomic) NSArray *domainsWithAssociatedCredentials; // @synthesize domainsWithAssociatedCredentials=_domainsWithAssociatedCredentials;
- (void)_updateDomainToDomainsToConsiderIdentical;
- (void)_updateDomainToDomainsWithAssociatedCredentials;
- (id)domainsToConsiderIdenticalToDomain:(id)arg1;
- (id)domainsWithAssociatedCredentialsForDomain:(id)arg1;
- (id)initWithDomainsWithAssociatedCredentials:(id)arg1 domainsToConsiderIdentical:(id)arg2;
- (id)initWithDomainsWithAssociatedCredentials:(id)arg1;
- (id)init;

@end

