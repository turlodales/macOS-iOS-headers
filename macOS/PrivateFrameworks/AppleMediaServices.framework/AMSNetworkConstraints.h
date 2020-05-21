//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMSBagConsumer.h"
#import "AMSBagConsumer_Project.h"

@class NSMutableDictionary, NSString;

@interface AMSNetworkConstraints : NSObject <AMSBagConsumer_Project, AMSBagConsumer>
{
    NSMutableDictionary *_sizeLimits;
}

+ (id)_networkConstraintsForMediaType:(id)arg1 withArray:(id)arg2;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
+ (id)networkConstraintsForMediaType:(id)arg1 withBag:(id)arg2;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *sizeLimits; // @synthesize sizeLimits=_sizeLimits;
- (long long)_sizeLimitForNetworkType:(id)arg1;
- (void)_setSizeLimit:(long long)arg1 forNetworkType:(id)arg2;
- (void)_disableAllNetworkTypes;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (long long)sizeLimitForNetworkType:(id)arg1;
- (BOOL)isEqualToConstraints:(id)arg1;
- (BOOL)hasSizeLimitForNetworkType:(id)arg1;
@property(readonly, getter=isAnyNetworkTypeEnabled) BOOL anyNetworkTypeEnabled;
- (id)_initWithStoreConstraintDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

