//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBookCore/ABAbstractAccountConfiguration.h>

@class ABAccount;

@interface ABPointOfInterestAccountConfiguration : ABAbstractAccountConfiguration
{
    ABAccount *_account;
}

- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveValueForKey:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
@property(nonatomic, getter=isSearchable) BOOL searchable;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 persistence:(id)arg2;

@end

