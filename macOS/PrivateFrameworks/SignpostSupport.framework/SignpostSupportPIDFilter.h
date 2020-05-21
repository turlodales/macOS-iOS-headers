//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SignpostPredicateProducer.h"

@class NSPredicate, NSSet;

@interface SignpostSupportPIDFilter : NSObject <SignpostPredicateProducer>
{
    BOOL __wantsNotEqual;
    NSSet *_pidSet;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL _wantsNotEqual; // @synthesize _wantsNotEqual=__wantsNotEqual;
@property(readonly, nonatomic) NSSet *pidSet; // @synthesize pidSet=_pidSet;
- (void)addPIDNumberSet:(id)arg1;
- (void)addPIDNumber:(id)arg1;
@property(readonly, nonatomic) NSPredicate *predicateEquivalent;
@property(readonly, nonatomic) unsigned long long _compoundPredicateType;
- (BOOL)_wantsNotSubsystem;
- (BOOL)passesPIDNumber:(id)arg1;
- (id)init;

@end

