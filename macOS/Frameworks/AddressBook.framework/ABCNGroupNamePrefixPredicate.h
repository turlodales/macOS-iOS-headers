//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCNPredicate.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ABCNGroupNamePrefixPredicate : ABCNPredicate
{
    NSString *_prefix;
}

@property(readonly, copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (void)dealloc;
- (id)initWithPrefix:(id)arg1;
- (id)cn_coreDataPredicate;

@end

